#include<stdlib.h>
#include<Windows.h>  // ʹ����win��sleep

// ͬ���첽���⣿
void main() {
	/*
	system("notepad");
	Sleep(5000); // ֹͣ5s�Ӻ��޶�������Ϊ����ͬ�����첽���⣬��Ϊnotepadû���Ƴ����Բ���5s���Զ�ִ���������䣨ͬ����
	system("taskkill /f /im notepad.exe");
	*/

	/*
	system("start notepad");
	system("tasklist & pause"); // ���ַ�ʽ���첽���������ܣ������첽
	*/

	system("start notepad");
	Sleep(5000);
	system("taskkill /f /im notepad.exe"); // ���ַ�ʽ���첽���������ܣ������첽,5s���Զ��ر�
	
}