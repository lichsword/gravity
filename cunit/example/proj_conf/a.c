#include"a.h"
#include<stdio.h> 
#include<string.h>

//#define CUNIT_TRUE(X) (if(X>0) {printf("success");} else {printf("Failed");})

int myadd(int a, int b){
    return a + b;
}

void scan_proj(){
    FILE * lpFile;
    const int SIZE = 512;
    char buffer[SIZE];
    int count;

    printf("[INFO]begin scan project...\n");	

    lpFile = fopen("a.xml", "r");

    if(!lpFile){
	// open file failed.
        printf("[ERROR]can't open a.xml\n"); 
	return;
    }// end if
    
    int cursor = 0;
    memset(buffer, 0, sizeof(buffer));
    fseek(lpFile, cursor, SEEK_SET);
    do{
        count = fread(buffer, sizeof(char), SIZE, lpFile);
	//cursor += count;
        //fseek(lpFile, cursor, SEEK_SET);
	//printf("count=%d\n", count);
	if(count > 0){
            printf("%s", buffer);
	}// end if
    }while(count > 0);

    printf("[INFO]scan project done.\n");

    //CUNIT_TRUE(1);


}
