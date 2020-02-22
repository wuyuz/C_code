#define _CRT_SECURE_NO_WARNINGS   // 用于逃避编译器的安全检测功能，预编译知识
#include<stdio.h> // std标准，可以自动区别win、linux平台
#include<stdlib.h>

// 这个脚本用于接受cmd命令并执行
void main() {
	char str[100] = { 0 }; // 表示长度为100的空字符串，初始化为0，用于接受命令

	scanf("%s", str); // 初始化字符串，通过窗口输入字符串
	printf("你要执行的指令：%s", str);  // 打印提示
	system(str); // system是执行系统命令，可跨平台
	system("pause");
}