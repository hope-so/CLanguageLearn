//#include
#include <stdio.h>
//包含一个叫 stdio.h 的文件
//std - 标准 standard input output
//库函数-C语言本身提供给我们使用的函数
/*自定义函数需要写在main函数之前*/
int g_val = 2021;
/*
%d - 打印整型
%c - 打印字符
%f - 打印小数
%lf - 打印双精度小数
%p - 以地址的形式打印
%x - 打印16进制数字
%o
*/
int main(){
	basicType();
	sizeTest();
	statementSize();
	statementUse();
	externStatement();

	return 0;//返回 0
}