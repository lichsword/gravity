#include "TestRPG.h"
#include "cunit.h"

#include "../src/RPG.h"
#include "../src/File.h"

void test_createRPG(){
	struct RPG * lpRPG = createRPG();
    ASSERT_TRUE(lpRPG);
    destroyRPG(lpRPG);
}

void test_destroyRPG(){
	// TODO
}

void test_setRPGName(){
	struct RPG * lpRPG = createRPG();
	setRPGName(lpRPG, "rpg's name");
	ASSERT_EQUAL_STR(lpRPG->name, "rpg's name");
}

void test_getRPGName(){

}

void test_loadRPG(){
	struct RPG * lpRPG = createRPG();
	ASSERT_TRUE(loadRPG(lpRPG));
}

void test_createStory(){
	struct Story * lpStory = createStory();
	ASSERT_TRUE(lpStory);
	destroyStory(lpStory);
}

void test_destroyStory(){
	// TODO
}

void test_loadStory(){
	
}