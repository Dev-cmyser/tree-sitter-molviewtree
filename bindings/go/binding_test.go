package tree_sitter_mol_view_tree_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mol_view_tree "github.com/tree-sitter/tree-sitter-mol_view_tree/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mol_view_tree.Language())
	if language == nil {
		t.Errorf("Error loading MolViewTree grammar")
	}
}
