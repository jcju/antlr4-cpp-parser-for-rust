## A C++ parser for Rust language, generated using ANTLR 4

**Platform**: Windows

Added C++ implementation of two base Class:

- RustLexerBase.cpp
- RustParserBase.cpp


### Usage: 

Generate parser (can be skipped)
```
antlr4 -Dlanguage=Cpp -visitor -o generated/ -package antlrcpptest RustLexer.g4 RustParser.g4
```

Put Rust code in: 
```
./examples/inputCode.rs
```
build and run.


### Ref: 

https://github.com/antlr/grammars-v4/tree/master/rust




### Guide on building a VS C++ parser with ANTLR

to be finished.
