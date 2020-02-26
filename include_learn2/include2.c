#include<stdio.h>
#include"data.h"  // 将一些常量定义在头文件中

void main() {
#include"str.txt"  // 引用文件打印
	/*c = a + b;  // 这里的a,b,c变量都是在头文件中定义
	//printf("\n");
	printf("%d", c);*/

	add();

	int d = 20;
	// int d = 54; // 不能重定义变量在一个局部作用域中，include包含也不可以
	getchar();
}

/*
头文件：
	1、头文件可以将源文件的有效信息提取出来
	2、避免导入头文件时重复包含变量，C++文件兼容C语言
*/