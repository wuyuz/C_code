#define _CRT_SECURE_NO_WARNINGS   // �����ӱܱ������İ�ȫ��⹦�ܣ�Ԥ����֪ʶ
#include<stdio.h> // std��׼�������Զ�����win��linuxƽ̨
#include<stdlib.h>

// ����ű����ڽ���cmd���ִ��
void main() {
	char str[100] = { 0 }; // ��ʾ����Ϊ100�Ŀ��ַ�������ʼ��Ϊ0�����ڽ�������

	scanf("%s", str); // ��ʼ���ַ�����ͨ�����������ַ���
	printf("��Ҫִ�е�ָ�%s", str);  // ��ӡ��ʾ
	system(str); // system��ִ��ϵͳ����ɿ�ƽ̨
	system("pause");
}