#include "cunit.h"
#include <stdio.h>

void assertEqualInt(int a, int b){
	if(a==b){
		printf("%s\n", "Success: ");
	}else{
		printf("%s except %d, but was %d\n", "Failed: ", a, b);
	}
}