#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//第1讲：C语言常见概念
//一、第一个C语言程序
//stdio - standard input output
//标准输入输出头文件
//int main()
//{
//	printf("Hello C\n");
//	//printf是一个库函数，作用就是在屏幕上打印信息
//
//	return 0;
//}

//编译+链接+运行 ctrl+F5
//可以使用Fn+ctrl+F5
//Fn 是一个辅助功能键
//Fn+F1 - F1原来的意思
//Fn+F2 - F2原来的意思
//...

//旧式的写法 - 不推荐
//void main()
//{
//		...
//}

//void是表示main函数不接受参数
//int main(void)
//{
//	...
//	return 0;
//}

//其实main函数也是可以有参数，参数是有特殊的意义的
//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}

//注释选中行：ctrl+k+c
//取消注释：ctrl+k+u


//二、占位符
//int main()
//{
//	//%d - 整型
//	//%c  - 字符
//	//%f  - 浮点数（小数）
//
//	printf("%d\n", 100);
//	printf("%c\n", 'q');
//	printf("%f\n", 3.14f); //3.140000
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	//int char;//err
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 'A');  //A
//	printf("%c\n", 65);  //A
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//产生32~127的数值
//	for (i=32; i<=127; i++)
//	{
//		printf("%c ", i);//将i中的数值当做ASCII码值，直接打印对应的字符
//	}
//
//	return 0;
//}


//三、字符串和\0
//%s - 字符串
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//	printf("%s\n", "hello");
//
//	return 0;
//}

//字符串中有一个结束标志叫：\0
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr1); //打印abc
//	printf("%s\n", arr2); //打印出错
//	printf("abc\0def");  //打印abc
//
//	return 0;
//}


//四、转义字符
//\n \0 是转义字符
//int main()
//{
//	// \n
//	// \0
//
//	return 0;
//}

//int main()
//{
//	printf("abc\ndef");
//
//	return 0;
//}