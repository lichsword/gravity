#include "cunit.h"

// 测试总数
int total = 0;

// 测试成功数
int succeedCount = 0;

// 测试失败数
int failedCount = 0;

void report(){
	float complete = 0;
	complete = (float) succeedCount / (float)total * 100;

	printf("[INFO]Unit Test Report: total(%d), Succeed(%d), Failed(%d), Complete(%02.0f%%)\n", total, succeedCount, failedCount, complete);
}