#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h> 

void show_time(){
    time_t lt;
    struct tm * lpTM;

    lt=time(NULL);
    lpTM = localtime(&lt);    
    printf("%02d:%02d:%02d[INFO]", lpTM->tm_hour, lpTM->tm_min, lpTM->tm_sec);
}


void show_welcome(){
    show_time();
    printf("cbuild start run...\n");
}

void show_sleep(){
    show_time();
    printf("sleep\n");
}

void show_cmd_args(int argc, char * argv[]){
    printf("cmd args's count=%d, list below:\n", argc);
    for(int i=0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
}

void exe_scan_proj(){
    printf("begin scan project...\n");

}

void exe_build(){
    system("gcc -o ../../cunit/example/lich ../../cunit/example/main.c ../../cunit/example/a.c");
}


int main(int argc, char * argv[]){
    show_welcome();
    show_cmd_args(argc, argv);
    while(1){
        show_sleep();
	// sleep 3 seconds
        usleep(5000000);
        //show_aweak();
	exe_scan_proj();
	exe_build();
    }

}
