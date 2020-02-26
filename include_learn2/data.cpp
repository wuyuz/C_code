#include<stdio.h>
//#include"data.h"  
// 去掉data.h的包含，避免重复包含

int a = 10;
int b = 20;
int c;

void add() {
	c = a + b;
	printf("\n");
	printf("%d", c);
}