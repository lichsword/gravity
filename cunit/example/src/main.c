#include"a.h"
#include<stdio.h> 

int main(int argc, char * argv[]){
    
    acceptCmd(argc, argv);

    ASSERT_EQUAL(1, 2);
    ASSERT_EQUAL(1, 1);
}
