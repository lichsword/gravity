#include"a.h"
#include<stdio.h> 
#include<string.h>

//#define CUNIT_TRUE(X) (if(X>0) {printf("success");} else {printf("Failed");})

inline void assertEqual(int a, int b){
    if(a == b ){
        printf("[TEST]result(Success)\n");
    }else{
        printf("[TEST]result(Failed), hope %d, but was %d\n", a, b);
	printf("[TEST]context: in file:%s\n", __FILE__);
	printf("[TEST]context: in line:%d\n", __LINE__);
        printf("[TEST]context: at func:%s\n", __func__);
    }
}

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
