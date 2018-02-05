#ifndef _RPG_H_
#define _RPG_H_

// RPG game
struct RPG{
    char * name;
};

// story file path
struct Story{
    char * filePath;
};

// world view 
struct WorldView{
    char * map;
    char * history;
    char * party;
};

// life view
struct LifeView{
    char * lifeview;
};

// value view
struct ValueView{
    char * forRelax;
    char * forFriend;
    char * forDream;
    char * forInterest;
    char * forBenefit;
    char * forSex;
};

// Character settings
struct Character{
    char * name;
    int sexual;// 0-girl; 1-boy
    int age;
    char * address;// address fo living.
    char * birthplace;// address of birth.
    char * nature;// nature of person.
    char * relationship;
};

// main story
struct MainStory{
    int count;// count of main story.
    char * list[];// all story file name of main story.
};

// branch story
struct BranchStory{
    int count;// count of branch story.
    char * list[];// all story file name of branch story.
};

// scene
struct Scene{
    char * name;
    char * desc;
    char * event;// event happend in this scene.
    char * characters;// the characters in this scene.
    char * nextScene;// point to next scene.
    char * costTime;
};

// CG
struct CG{
    int count;// count of CGs
    char * list[];// list CG file.
};

// RPG functions
struct RPG * createRPG();
void destroyRPG(struct RPG *);
void setRPGName(struct RPG *, char *);
void getRPGName(struct RPG *, char *);
int loadRPG(struct RPG *);

// Story functions
struct Story * createStory();
void destroyStory(struct Story *);
void setStoryFilePath(struct Story *, char *);
void getStoryFilePath(struct Story *, char *);

#endif
