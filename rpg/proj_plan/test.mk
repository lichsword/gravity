#makefile文件
PROJ = run_test
CC = gcc
OUT = -o

# TestPlan.c + TestFile

A:
	gcc -o exe_test test/main.c test/cunit.c test/TestPlan.c test/TestFile.c test/TestRPG.c src/File.c src/RPG.c
