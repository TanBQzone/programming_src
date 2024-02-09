/*
 * @Author: 谭必清
 * @Date: 2024-02-09 04:42:48
 * @LastEditors: 谭必清
 * @LastEditTime: 2024-02-09 14:26:23
 * @FilePath: /程序设计/chapter_001/avgLen.c
 * Copyright (c) 2020 - 2024 by TanBQ., All Rights Reserved.
 */
// 获取英语句子的平均词长

#include <stdio.h>
#include <string.h>

#define BIG (ptr[i] >= 'A' && ptr[i] <= 'Z')
#define SMALL (ptr[i] >= 'a' && ptr[i] <= 'z')
#define DIGIT (ptr[i] >= '0' && ptr[i] <= '9')

typedef struct{
	char *str;
	int len;
	int number;
	double avg_len;
} String;

// 初始化String
String setString(char *ptr) {
	// 最好是添加一个判断，如果是空的就直接返回

	String localStr;
	strcpy(localStr.str, ptr);

	// 获取长度
	int len = 0;
	int space = 0;
	for (int i = 0; ptr[i]; i++) {
		if (BIG || SMALL || DIGIT) {
			len++;
		}
		if (ptr[i] == ' ') {
			space++;
		}
	}
	localStr.len = len;
	localStr.number = space += 1;
	localStr.avg_len = len / 1.0 / space ;

	return localStr;
}


void printString(String tmp) {
	printf("%s\n", tmp.str);
}

int main(int argc, char *argv[]) {
	String str1 = setString("This is a demo.");
	printString(str1);
	printf("len: %d\n", str1.len);
	printf("cnt: %d\n", str1.number);
	printf("cnt: %.2lf\n", str1.avg_len);
	return 0;
}
