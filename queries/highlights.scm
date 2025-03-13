;; Подсвечиваем сущности, начинающиеся на `$mol_`
((identifier) @constructor
  (#match? @constructor "^\\$mol_"))

;; Подсвечиваем операторы <=, =>, <=>
((binding) @operator)

;; Текст, идущий сразу после обратного слэша (до конца строки), считаем строкой
((string_literal) @string)

;; Слова с @ (например hint @ \Readme)
((localization_marker) @keyword)

;; Пример подсветки разделителей `/` и `*`
((list_marker) @punctuation.special)
((dict_marker) @punctuation.special)
