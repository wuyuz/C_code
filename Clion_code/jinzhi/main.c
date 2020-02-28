#include <stdio.h>

int main() {
    int a = -5;
    printf("数值：%d \n",a);
    printf("十六进制：%x",a);
}

/*
 数据类型相关的关键字： char short int long float double struct union enum signed unsigned void
    char 字符型，用char定义的变量是字符型变量，占1个字符
        如： char ch1 = '1' （正确）； char ch2 = '123' （错误）

    short 短整型，使用short定义的变量是短整型变量，占2个字节
        如： short int a=11;

    int 整型，用int定义的变量是整型变量，在32位系统下占4个字节
        如： int a = 44

    float 单浮点型
        如：float b=3.8f;
    double 双浮点型
        如：double b = 3.8
 存储型相关的关键字： register  static  const  auto extern
    register 是寄存器的意思，用register修饰的变量是寄存器变量，即：在编译的时候告诉编译器这个变量是寄存器变量，尽量将其存储空间
            分配到寄存器中
            1、定义的变量不一定真的存在寄存器中
            2、cpu取数据在寄存器中拿比在内存中要快
            3、register只能修饰字符型和整型，不能修饰浮点型
 控制语句关键字： if else break continue for while do switch case goto default
 其他关键字： sizeof typedef volatile
 */

/*
 反码/补码/原码：
 5：
 原码=补码=反码：0000 0000 0000 0000 0000 0000 0000 0000 0000 0101
 -5：
 原码：1000 0000 0000 0000 0000 0000 0000 0101
 反码：1111 1111 1111 1111 1111 1111 1111 1010
 补码：反码+1
 1111 1111 1111 1111 1111 1111 1111 1011
 f     f     f    f    f    f    f    b  (内存中数据）
 */