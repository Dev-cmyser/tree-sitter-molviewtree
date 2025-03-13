module.exports = grammar({
	name: 'molviewtree',

	extras: $ => [/\s/],

	rules: {
		source_file: $ => repeat($.component),

		component: $ => seq($.component_name, repeat($.node)),

		_indent: $ => /\t+/, // Обязательно учитывать отступы для вложенности

		identifier: $ => /[a-zA-Z_$][a-zA-Z0-9_$]*/,

		component_name: $ => seq('$', $.identifier),

		property_name: $ => seq($.identifier, optional($.parameter)),

		parameter: $ => prec.left(seq(alias(choice('!', '?'), $.parameter_marker), $.identifier)),

		string_literal: $ => seq('\\', /.*/),

		primitive_literal: $ => choice('true', 'false', 'null', /-?\d+(\.\d+)?/),

		list_marker: $ => '/',

		dict_marker: $ => '*',

		null_value: $ => '-',

		binding: $ => choice('<=', '=>', '<=>'),

		localization_marker: $ => '@',

		component_declaration: $ => seq('<=', $.identifier, $.component_name),

		property: $ =>
			seq(
				$.property_name,
				optional(
					choice(
						seq($.binding, choice($.primitive_literal, $.string_literal, $.component_name)),
						$.localization_marker,
						choice($.list_marker, $.dict_marker),
						$.null_value,
						$.string_literal,
						$.primitive_literal,
					),
				),
			),

		node: $ => prec.right(seq($._indent, choice($.component_declaration, $.property), optional(repeat($.node)))),
	},
})
