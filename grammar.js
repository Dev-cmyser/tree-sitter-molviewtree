module.exports = grammar({
	name: 'molviewtree',

	extras: $ => [/\s/],

	rules: {
		source_file: $ => repeat($.component),

		component: $ => seq($.component_name, repeat($.node)),

		indent: $ => /\t+/, // Обязательно учитывать отступы для вложенности

		css_variable: $ => token(/--[A-Za-z0-9_-]+/),

		identifier: $ => /[a-zA-Z_$][a-zA-Z0-9_$]*/,

		component_name: $ => token(seq('$', /[a-zA-Z_$][a-zA-Z0-9_$]*/)),

		property_name: $ => seq(choice($.css_variable, $.identifier), optional($.parameter)),

		parameter_marker: $ => token(choice('!', '?')),

		parameter: $ => seq($.parameter_marker, optional($.identifier)),

		string_literal: $ => seq('\\', /.*/),

		primitive_literal: $ => choice('true', 'false', 'null', /-?\d+(\.\d+)?/),

		list_marker: $ => '/',

		dict_marker: $ => '*',

		null_value: $ => '-',

		binding: $ => choice('<=', '=>', '<=>'),

		localization_marker: $ => '@',

		component_binding: $ => seq($.identifier, choice($.component_name, $.string_literal)),

		component_declaration_with_inline: $ => seq($.component_declaration, optional(seq(' ', $.property))),

		component_declaration: $ => seq('<=', $.identifier, $.component_name, repeat($.component_binding)),

		// я не знаю что это
		caret: $ => token('^'),
		property: $ =>
			seq(
				optional($.caret),
				$.property_name,
				optional(
					choice(
						$.css_variable,
						seq(
							$.binding,
							choice(
								$.primitive_literal,
								$.string_literal,
								$.component_name,
								seq($.property_name, optional(choice($.string_literal, $.primitive_literal))),
							),
						),
						$.localization_marker,
						choice($.list_marker, $.dict_marker),
						$.string_literal,
						$.primitive_literal,
					),
				),
			),

		node: $ =>
			prec.right(
				seq(
					$.indent,
					choice($.component_declaration_with_inline, $.property, $.null_value, $.string_literal),
					optional(repeat($.node)),
				),
			),
	},
})
