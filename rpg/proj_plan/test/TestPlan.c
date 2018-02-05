#include "TestPlan.h"

#include "cunit.h"
#include "TestFile.h"
#include "TestRPG.h"

void test_plan(){
    test_fileExist();

    test_readFile2String();

    test_createRPG();

    test_destroyRPG();

    test_setRPGName();

    test_getRPGName();

    test_loadRPG();

    test_createStory();

    test_destroyStory();

    report();
}
