/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */
//
//  main.cpp
//  antlr4-cpp-rust
//
//  dev: jcju
//

#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "RustLexer.h"
#include "RustParser.h"

#include <Windows.h>

#pragma execution_character_set("utf-8")

using namespace antlrcpptest;
using namespace antlr4;
using namespace std;

int main(int argc, const char * argv[]) {
	string line;
	ifstream codeFile("../../examples/inputCode.rs");
	if (codeFile.is_open()) {
		ANTLRInputStream input(codeFile);
		RustLexer lexer(&input);
		CommonTokenStream tokens(&lexer);

		tokens.fill();
		for (auto token : tokens.getTokens()) {
			cout << token->toString() << std::endl;
		}

		cout << endl << "=======================================================" << endl;
		RustParser parser(&tokens);
		tree::ParseTree* tree = parser.crate();

		auto s = tree->toStringTree(&parser);
		cout << endl << "Parse Tree: " << endl << endl;
		cout << s << std::endl;

		codeFile.close();
	}
	return 0;
}
