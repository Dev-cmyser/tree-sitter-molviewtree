import XCTest
import SwiftTreeSitter
import TreeSitterMolViewTree

final class TreeSitterMolViewTreeTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mol_view_tree())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading MolViewTree grammar")
    }
}
