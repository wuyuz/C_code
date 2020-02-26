#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void main() {
	printf("hello！ Wang");
	MessageBox(0, TEXT("Nice"), TEXT("helloworld"), 0);  // 如果出现乱码，使用TEXT函数包含
	// 第一个参数设置为0（依赖的窗口编号，表示是谁弹出来的：0 表示系统弹出来；），第二个参数是对话框的内容，第三个参数是对话框的标题，第四个参数是对话框的类型

	// ShellExecute 可以打开文件、网页、应用等
	ShellExecute(0,"print","D:\\BaiduNetdiskDownload\\1.txt",NULL,NULL,1); /* C语言里\\表示\ */
	
	ShellExecute(0, "open", "https://www.baidu.com", 0, 0, 1);
	
	ShellExecute(0, "open", "D:\\QQ\\Bin\\QQScLauncher.exe", 0, 0, 1);
	// ShellExecute函数用于操作所处平台操作，如果使用vs调试没有效果，可以右键项目修改属性的字符集：选择多字符集
	
	getchar();  // 等待
	return;
}

/*
 弹出对话框的流程：
	1、首先调用windows.h这个头文件：#include<windows.h>
	2、接下来调用MessageBox()

ShellExecut函数是windows系统里面进行操作的函数可以打开文件、网页、应用等；同时提供不同函数如：open、pirnt等
如：ShellExecute(0,"print","D:\\BaiduNetdiskDownload\\1.txt",NULL,NULL,1)
	1、参数说明:指示窗口是谁执行的，0表示系统
	2、第二个参数表示什么操作，一般：open、print
	3、第三个参数是执行的文件/路径/网站
	4、第四、五个，都是系统保留的一些参数，都0
	5、最后一个是控制打开的窗口显示，隐藏的参数，1是最大化，6是最小等
*/