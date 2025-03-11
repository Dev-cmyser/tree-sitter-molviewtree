module.exports = grammar({
    name: 'moltree',

    extras: $ => [/\s/, $.comment],

    rules: {
        source_file: $ => repeat($.statement),

        statement: $ => choice($.definition, $.property),

        definition: $ =>
            seq(field('name', $.identifier), field('type', $.identifier), optional(seq('{', repeat($.statement), '}'))),

        property: $ =>
            prec.left(
                seq(
                    choice('<=', '<=>', '=>', '?'),
                    field('prop', $.identifier),
                    optional(field('value', choice($.identifier, $.string, $.number))),
                ),
            ),

        identifier: $ => /\$?[a-zA-Z_][a-zA-Z0-9_]*/,

        string: $ => /"([^"\\]|\\.)*"/,

        number: $ => /\d+/,

        comment: $ => token(seq('#', /.*/)),
    },
})
