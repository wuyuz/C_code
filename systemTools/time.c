#include<stdlib.h>
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
	
}