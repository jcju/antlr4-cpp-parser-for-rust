[![Build Status](https://img.shields.io/badge/build%20-passing-brightgreen.svg)](https://github.com/jcju/antlr4-cpp-parser-for-rust)

# ANTLR C++ parser for Rust language



Main contribution: added the C++ implementation of two base Class:

- CppBase/RustLexerBase.h
- CppBase/RustParserBase.h


## Usage

Generate parser *(can be skipped)*
```
antlr4 -Dlanguage=Cpp -visitor -o generated/ -package antlrcpptest RustLexer.g4 RustParser.g4
```

Put Rust code in: 
```
./examples/inputCode.rs
```
build and run.


## Guide on building ANTLR C++ parser on Windows

On Windows, we can build the generated C++ parser with Visual Studio. The steps are shown below:

1. Open `./Windows/antlr4cpp.sln`

2. Go to solution properties, set `antlr4-cpp-rust` as single startup project

3. Add reference -> choose `antlr4cpp-vs2022`

4. Build `antlr4cpp-vs2022`

5. Run `antlr4-cpp-rust`

### On earlier VS version

This project's name has "vs2022" but actually supports vs2019 or earlier version.

On both `antlr4cpp-vs2022` and `antlr4-cpp-rust` project , right click -> choose Properties -> General -> Platform Toolset, then choose the version according to Your Visual Studio:

- VS 2022: v143

- VS 2019: v142

- VS 2017: v141 (not tested yet)

- VS 2015: v140

## Reference

https://github.com/antlr/grammars-v4/tree/master/rust



## Test

<br/>

A record of testing result of inputs in ./examples/

<br/>


| Status | Test file     | Notes                                                                       |
| :-: | --------------------- | --------------------------------------------------------------- |
| ✅  | hello.rs             |                                                                             |
| ✅  | v1_46_0_split_float_literal.rs |                                                                             |
| - | place_holder  | not tested yet &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;|
| ❌  | place_holder            | test: FAIL                                                                  |
