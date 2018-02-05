#ifndef _A_
#define _A_

#define ASSERT_EQUAL(A, B) do{\
    if(A==B){\
        printf("[MACRO]Success\n");\
    }else {\
        printf("[MACRO]Failed\n");\
	printf("[MACRO]context: in file %s\n", __FILE__);\
	printf("[MACRO]context: in file %s\n", __func__);\
	printf("[MACRO]context: in file %d\n", __LINE__);\
    }\
}while(0);
    
int acceptCmd(int argc, char * argv[]);

#endif
