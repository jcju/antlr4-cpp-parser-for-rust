#!/bin/bash
set -o errexit

# CLASSPATH=../../../tool/resources/:ST-4.0.8.jar:../../../tool/target/classes:../../../runtime/Java/target/classes:../../../../antlr3/runtime/Java/target/classes

java -cp $CLASSPATH org.antlr.v4.Tool -Dlanguage=Cpp -listener -visitor -o generated/ -package antlrcpptest RustLexer.g4 RustParser.g4

