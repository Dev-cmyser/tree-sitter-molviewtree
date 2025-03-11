from unittest import TestCase

import tree_sitter, tree_sitter_mol_view_tree


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_mol_view_tree.language())
        except Exception:
            self.fail("Error loading MolViewTree grammar")
