#include<stdlib.h> // 包含就基本函数如：printf()
#include<Windows.h>  // 使用了win的sleep

// 同步异步问题？
void main() {
	/*
	system("notepad");
	Sleep(5000); // 停止5s钟后无动作，因为存在同步和异步问题，因为notepad没有推出所以不能5s后自动执行下面的语句（同步）
	system("taskkill /f /im notepad.exe");
	*/

	/*
	system("start notepad");
	system("tasklist & pause"); // 这种方式是异步打开两个功能，属于异步
	*/

	system("start notepad");
	Sleep(5000);
	system("taskkill /f /im notepad.exe"); // 这种方式是异步打开两个功能，属于异步,5s后自动关闭
	
	while (1) {  // 值为非0，出现死循环
		system("notepad"); // 此为同步，关一个开一个不会卡死，如果异步会爆满
		// system("start notepad")  // 此时表示异步，会卡死
	}
}