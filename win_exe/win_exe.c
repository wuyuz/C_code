#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void main() {
	printf("hello�� Wang");
	MessageBox(0, TEXT("Nice"), TEXT("helloworld"), 0);  // ����������룬ʹ��TEXT��������
	// ��һ����������Ϊ0�������Ĵ��ڱ�ţ���ʾ��˭�������ģ�0 ��ʾϵͳ�������������ڶ��������ǶԻ�������ݣ������������ǶԻ���ı��⣬���ĸ������ǶԻ��������

	// ShellExecute ���Դ��ļ�����ҳ��Ӧ�õ�
	ShellExecute(0,"print","D:\\BaiduNetdiskDownload\\1.txt",NULL,NULL,1); /* C������\\��ʾ\ */
	
	ShellExecute(0, "open", "https://www.baidu.com", 0, 0, 1);
	
	ShellExecute(0, "open", "D:\\QQ\\Bin\\QQScLauncher.exe", 0, 0, 1);
	// ShellExecute�������ڲ�������ƽ̨���������ʹ��vs����û��Ч���������Ҽ���Ŀ�޸����Ե��ַ�����ѡ����ַ���
	
	getchar();  // �ȴ�
	return;
}

/*
 �����Ի�������̣�
	1�����ȵ���windows.h���ͷ�ļ���#include<windows.h>
	2������������MessageBox()

ShellExecut������windowsϵͳ������в����ĺ������Դ��ļ�����ҳ��Ӧ�õȣ�ͬʱ�ṩ��ͬ�����磺open��pirnt��
�磺ShellExecute(0,"print","D:\\BaiduNetdiskDownload\\1.txt",NULL,NULL,1)
	1������˵��:ָʾ������˭ִ�еģ�0��ʾϵͳ
	2���ڶ���������ʾʲô������һ�㣺open��print
	3��������������ִ�е��ļ�/·��/��վ
	4�����ġ����������ϵͳ������һЩ��������0
	5�����һ���ǿ��ƴ򿪵Ĵ�����ʾ�����صĲ�����1����󻯣�6����С��
*/