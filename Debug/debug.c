#include<stdio.h>

void main() {
	int num = 3;
	printf("%p", &num); // 查看内存地址

	// 如果想查看此时的内存数据，需要在此使用断点，然后通过调试窗口的内存，输入对应的内存地址即可
	system("pause");
}