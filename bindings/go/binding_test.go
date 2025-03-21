package tree_sitter_molviewtree_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_molviewtree "github.com/tree-sitter/tree-sitter-molviewtree/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_molviewtree.Language())
	if language == nil {
		t.Errorf("Error loading Molviewtree grammar")
	}
}
