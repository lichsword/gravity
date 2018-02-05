#include "cunit.h"

#include "TestFile.h"
#include "../src/File.h"

void test_fileExist(){
    ASSERT_EQUAL(fileExist("doc"), 1);
}

void test_readFile2String(){
	char * text = NULL;
	text = readFile2String("a.txt");
	ASSERT_EQUAL_STR(text, "abcdef\n");
}