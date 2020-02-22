#include<stdlib.h> // C++需要自己include,如果在c++文件编译时出现，未定义的函数则需要自己手动的include库

//  void 表示函数的返回值为空， int 返回值Linux
// () 参数，默认为空void
// C 编译器会自动查找，所涉及到的库
// C++ 编译器不会自动去查找库，需要自己include<stdlib.h>

void main() {  // main(void) 和 main() 是一样的
	system("tasklist"); //查看进程
	system("echo hello world"); // 输出字符
	system("pause");   // 暂停

	return; // 返回为空，对应的void main
}
