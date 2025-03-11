import XCTest
import SwiftTreeSitter
import TreeSitterMolviewtree

final class TreeSitterMolviewtreeTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_molviewtree())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Molviewtree grammar")
    }
}
