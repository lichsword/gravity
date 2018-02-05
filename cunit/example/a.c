#include"a.h"
#include<stdio.h> 
#include<string.h>

//int main(int argc, char * argv[]){
//    return 1;
//}

int acceptCmd(int argc, char * argv[]){
    switch(argc){
        case 1:
	    printf("execute default workflow\n");
	    break;
        case 2:
	    printf("param is %s\n", argv[1]);
	    if(0==strcmp(argv[1], "test")){
	        printf("execute test workflow\n");
	    }else if(0==strcmp(argv[1], "clean")){
	        printf("execute clean workflow\n");
	    }else if(0==strcmp(argv[1], "build")){
	        printf("execute build workflow\n");
	    }else if(0==strcmp(argv[1], "run")){
	        printf("execute run workflow\n");
	    }
	    break;
        case 3:
	    break;
        case 4:
	    break;
    }
    return 1;// TODO
}
