/**
 * 游戏名称
 */
int hasGameName();

/**
 * 剧本
 */
int hasStory();

/**
 * 世界观
 */
int hasStoryWorldView();
int hasStoryWorldViewOfParty();
int hasStoryWorldViewOfMap();
int hasStoryWorldViewOfHistory();

/**
 * 人生观
 */
int hasStoryLifeView();

/**
 * 价值观
 */
int hasStoryValueView();
int hasStoryValueViewOfRelax();
int hasStoryValueViewOfFriend();
int hasStoryValueViewOfDream();
int hasStoryValueViewOfInterest();
int hasStoryValueViewOfBenefit();
int hasStoryValueViewOfSex();

/**
 * 人设
 */
int hasCharacter();
int hasCharacterName();
int hasCharacterSexual();
int hasCharacterAge();
int hasCharacterHome();
int hasCharacterNature();
int hasCharacterRelationship();

/**
 * 主线故事 
 */
int hasMainStory();
int hasMainStoryTimeEnough();

/**
 * 支线故事
 */
int hasBranchStory();
int hasBranchStoryTimeEnough();

/**
 * 场景
 */
int hasScene();
int hasSceneName();
int hasSceneDesc();
int hasSceneEvent();
int hasSceneCharacter();
int hasSceneNextscene();
int hasSceneTimeEnough();

/**
 * CG动画
 */
int hasVideoCG();
int hasVideoCGCountEnough();


// ----------------------------
void test_createRPG();
void test_destroyRPG();
void test_setRPGName();
void test_getRPGName();
void test_loadRPG();
//
void test_createStory();
void test_destroyStory();
void test_loadStory();

