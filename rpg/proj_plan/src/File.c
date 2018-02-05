#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "File.h"

int fileExist(char * path){
    FILE * lpFile = NULL;
    int exist = 0;

    lpFile = fopen(path, "r");
    exist = (lpFile)? 1 : 0;
    fclose(lpFile);

    return exist;
}

char * readFile2String(char * path){
	
	char * result = NULL;
	FILE * lpFile = NULL;
	const int SIZE = 512;
	char buffer[SIZE];
	int read = 0;
	int cursor = 0;

	lpFile = fopen(path, "r");
	if(!lpFile){
		// printf("[INFO]open file failed: %s\n", path);		
		return result;
	}// end if

	memset(buffer, 0, sizeof(buffer));
	fseek(lpFile, cursor, SEEK_SET);
	do{
		read = fread(buffer, sizeof(char), SIZE, lpFile);
		if(read > 0){
			result = malloc(sizeof(char) * read + 1);
			strcpy(result, buffer);
			// printf("[INFO]readFile2String's text: %s\n", result);
		}// end if
	}while(read > 0);

	return result;
}
