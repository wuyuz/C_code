/*
变量是程序执行的过程中，其值可以改变的量，变量有一个名字，称为变量名，用标识符表示

变量的定义格式：
	类型名   变量名，变量名....；
	如：int  a,b,c;
		float x,y,x;
		char ch;
	所有的变量在使用前必须先定义
*/

#include<stdlib.h>
#include<stdio.h>

void main1() {
	// 变量定义方式1
	int x;
	int a, b, c;
	x = 1;
	a = 2;
	b = 4;
	c = 5;

	// 变量定义方式2
	int y = 5;
	int a1 = 4, b1 = 6;
}

/*
void main2() {
	int x; // 使用前必须先定义,且初始化，未初始化会报错
	printf("%d", x);
}
*/


void main3() {
	const int x = 10; // const固定恒定，叫做常量,只读
	//x = 4; // x 不能再次赋值，所以x不是左值

	printf("我的目标是%d", x);
	getchar();
}


void main() {
	// 常量定义的第二种方式，使用define；注意define没有;
	#define x 100
	printf("我是第%d个备胎", x);
	getchar();
}

/*
define和const定义常量的区别：
	1、使用define是将符合替换成一个特定的数字，通过一个有意义的单词符号，修改一个值便可以修改全局数据
	2、const一般表示该数据是不能被改变的
	3、还有个区别在于，define只是单纯的替换不需要指定数据类型，而const需要，我们可以使用define来定义许多的变量，做一个中文编程：
		如： #define 给老夫跑起来  main
			 #define 四大皆空  void
			 #define 打印 printf
*/