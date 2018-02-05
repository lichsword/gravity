#ifndef _A_
#define _A_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int total;
extern int succeedCount;
extern int failedCount;

#define ASSERT_EQUAL(A, B) do{\
    total ++;\
    if(A == B){\
    	succeedCount ++;\
        printf("[MACRO]Succeed: %s=>%s()\n", __FILE__, __func__);\
    }else {\
    	failedCount ++;\
        printf("[MACRO]Failed\n");\
        printf("[MACRO]context: in file %s\n", __FILE__);\
        printf("[MACRO]context: in file %s\n", __func__);\
        printf("[MACRO]context: in file %d\n", __LINE__);\
    }\
}while(0);

#define ASSERT_EQUAL_STR(A, B) do{\
    total ++;\
    if(NULL!=A && NULL!=B){\
        if(0 == strcmp(A, B)){\
    	    succeedCount ++;\
            printf("[MACRO]Succeed: %s=>%s()\n", __FILE__, __func__);\
        }else {\
    	   failedCount ++;\
            printf("[MACRO]Failed\n");\
            printf("[MACRO]context: in file %s\n", __FILE__);\
            printf("[MACRO]context: in file %s\n", __func__);\
            printf("[MACRO]context: in file %d\n", __LINE__);\
        }\
    }else{\
        failedCount ++;\
        printf("[MACRO]Failed\n");\
        printf("[MACRO]context: in file %s\n", __FILE__);\
        printf("[MACRO]context: in file %s\n", __func__);\
        printf("[MACRO]context: in file %d\n", __LINE__);\
    }\
}while(0);

#define ASSERT_TRUE(A) do{\
	total ++;\
    if(0 != A){\
    	succeedCount ++;\
        printf("[MACRO]Succeed: %s=>%s()\n", __FILE__, __func__);\
    }else {\
    	failedCount ++;\
        printf("[MACRO]Failed\n");\
        printf("[MACRO]context: in file %s\n", __FILE__);\
        printf("[MACRO]context: in file %s\n", __func__);\
        printf("[MACRO]context: in file %d\n", __LINE__);\
    }\
}while(0);

void report();

#endif