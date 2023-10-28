#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//四、转义字符（续）
//int main()
//{
//	//打印(are you ok??)
//	printf("(are you ok\?\?)\n");
//	//在过去的一些编译器上，支持三字母词，会打印成(are you ok]
//	//??)  --- ]
//	//??(
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", '\''); //打印'
//
//	printf("%s\n", "abcdef");
//	printf("%s\n", "a");
//	printf("%s\n", "\""); //打印"
//
//  printf("c:\test\test.c"); //tab键，打印c:      est     est.c
//	printf("c:\\test\\test.c"); //打印\
//
//	printf("\a"); //警报
//	printf("abcdefghi\n"); //换行
//	printf("abcde\bfghi\n");  //退格，打印acdfghi，e被覆盖掉了
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	printf("%c\n", '\130'); //八进制
//	printf("%c\n", '\x48'); //十六进制
//
//	//strlen是求字符串长度的函数- 统计的是字符串中\0之前的字符的个数，不包含\0
//	//要包含头文件string.h
//	printf("%zd\n", strlen("abc"));//abc\0，打印3
//	printf("%zd\n", strlen("c:\test\130\test.c"));//打印13
//
//	return 0;
//}


//五、语句
//C语言是一条一条的语句构成的
//什么是语句？

//int main()
//{
//	;//空语句
//	3 + 4;//表达式语句
//	int a = 10;
//	int b = 20;
//	a + b;//表达式语句
//	printf("hehe\n");//函数调用语句
//
//	return 0;
//}


//六、注释
//C语言风格的注释是不能嵌套注释的

//int main()
//{
//	//创建整型变量a，并赋值10
//	int a = 10;/* 创建整型变量a，并赋值10 */
//	/*
//	int b = 0;
//	int c = 0;
//	*/
//	return 0;
//}

//int main()
//{
//	int a/*hehe*/b;
//
//	return 0;
//}

//int main()
//{
//	/*char ch = 'w';*/
//	return 0;
//}

//int main()
//{
//	// C语言中0表示假，非0表示真
//	if (2 == 1+1) //为真
//		printf("hehe\n");
//
//	return 0;
//}



//第2讲：C语言数据类型和变量
// 一、数据类型
//bool类型
//#include <stdbool.h>
//int main()
//{
//	//_Bool flag = false;
//	bool flag = true;
//	if (flag)
//		printf("hehe\n");
//
//	return 0;
//}

//sizeof 计算的结果的类型是size_t, size_t是一种无符号的整数，这种整数值在打印的时候，使用%zd
//int   --- %d
//char  --- %c
//字符串 -- %s

//int main()
//{
//	printf("%zd\n", sizeof(char)); //1
//	printf("%zd\n", sizeof(_Bool)); //1
//	printf("%zd\n", sizeof(short)); //2
//	printf("%zd\n", sizeof(int)); //4
//	printf("%zd\n", sizeof(long)); //4
//	printf("%zd\n", sizeof(long long)); //8
//	printf("%zd\n", sizeof(float));//4
//	printf("%zd\n", sizeof(double)); //8
//	printf("%zd\n", sizeof(long double)); //8
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	printf("%zd\n", sizeof a); //a是表达式，括号可省略，整型打印4
//	printf("%zd\n", sizeof(a)); //打印4
//
//	printf("%zd\n", sizeof(int)); //类型的括号不可省略，打印4
//	printf("%zd\n", sizeof(3.14));//double 8
//	printf("%zd\n", sizeof(3.14f));//float 4
//
//	return 0;
//}

//int main()
//{
//    short s = 2;//s是占2个字节
//    int b = 10;
//	  //sizeof是不进行计算的
//    printf("%zd\n", sizeof(s = b + 1)); //打印2
//    printf("s = %d\n", s); //打印s = 2
//
//    return 0;
//}


//二、变量
//int main()
//{
//	//类型 变量名
//	int    age;
//	char ch;
//	float f;
//	double weight;
//	_Bool num;
//
//	return 0;
//}

//int main()
//{
//	int age = 0;//初始化 - 在变量创建的同时，给一个值叫初始化
//	char ch = 'q';
//
//	printf("%d\n", age);
//
//	return 0;
//}

//int main()
//{
//	int a;//变量
//	a = 1;
//	printf("%d\n", a);
//
//	a = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//int b = 100;//全局变量
//int main()
//{
//	{
//		int a = 10;//局部变量，括号内有效
//		printf("%d\n", a);
//	}
//	printf("%d\n", a); //打印出错
//
//	return 0;
//}

//int b = 100;//全局变量
//int main()
//{
//	{
//		int a = 10;//局部变量
//		printf("%d\n", b); //打印100
//	}
//	printf("%d\n", b); //打印100
//
//	return 0;
//}

//int a = 100;//全局变量
//int main()
//{
//	{
//		int a = 10;//局部变量
//		printf("%d\n", a);//10，局部变量优先
//	}
//
//	return 0;
//}