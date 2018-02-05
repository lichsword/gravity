#include"a.h"
#include<stdio.h> 

int main(){
    int a = 1;
    int b = 2;
    int c = myadd(a, b); 
    printf("a=%d, b=%d\n", a, b);
    printf("a+b=%d\n", c);
    printf("func loop invoke: %d\n", myadd(a, b));

    scan_proj();

    assertEqual(1, 1);
    assertEqual(1, 2);
    assertEqual(myadd(1, 3), 3);
    
    ASSERT_EQUAL(myadd(1, 2), 3);
    ASSERT_EQUAL(myadd(1, 3), 3);
}
