#include "RPG.h"
#include "File.h"
#include <stdlib.h>

struct RPG * createRPG(){
    struct RPG * lpRPG = malloc(sizeof(struct RPG));
    return lpRPG;
}

void destroyRPG(struct RPG * lpRPG){
    free(lpRPG);
    lpRPG = NULL;
}

void setRPGName(struct RPG * lpRPG, char * name){
	lpRPG->name = name;
}

void getRPGName(struct RPG * lpRPG, char * name){
    name = lpRPG->name;
}

int loadRPG(struct RPG * lpRPG){
    if(!lpRPG){
    	return 0;
    }// end if

	char * name = readFile2String("a.txt");
	setRPGName(lpRPG, name);

    return 1;
}

struct Story * createStory(){
	struct Story * lpStory = malloc(sizeof(struct Story));
	return lpStory;
}

void destroyStory(struct Story * lpStory){
    free(lpStory);
    lpStory = NULL;
}