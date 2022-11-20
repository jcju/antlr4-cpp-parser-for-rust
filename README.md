## A C++ parser for Rust language, generated using ANTLR 4

**Platform**: Windows

Added C++ implementation of two base Class:

- CppBase/RustLexerBase.h
- CppBase/RustParserBase.h


### Usage

Generate parser (can be skipped)
```
antlr4 -Dlanguage=Cpp -visitor -o generated/ -package antlrcpptest RustLexer.g4 RustParser.g4
```

Put Rust code in: 
```
./examples/inputCode.rs
```
build and run.


### Reference

https://github.com/antlr/grammars-v4/tree/master/rust




### Guide on building a VS C++ parser with ANTLR

to be finished.



### Test

| Status | Test file     | Notes                                                                       |
| :-: | --------------- | --------------------------------------------------------------------------- |
| ✅  | hello.rs             |                                                                             |
| ✅  | v1_46_0_split_float_literal.rs |                                                                             |
| - | place_holder  | not tested yet |
| ❌  | place_holder            | test: FAIL                                                                  |