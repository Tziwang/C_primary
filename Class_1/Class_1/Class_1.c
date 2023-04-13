#define _CRT_SECURE_NO_WARNINGS 1
//微软的编译器认为scanf函数不安全，建议使用scanf_s
//但是scanf_s函数是vs提供的，只有vs的编译器认识，其他的编译器不认识
//解决办法：在源文件的第一行加上#define _CRT_SECURE_NO_WARNINGS 1

//一、第一个C语言程序
//#include<stdio.h>
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}

//代码一般是从main函数开始写
//C语言中main函数是程序的入口
//程序是从main函数的第一行开始执行的
//main函数有且只有一个
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");//单步F10，运行Crl+F5
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	return 0;
//}
//int main() //显示int main()已有主体
//{
//	printf("hehe\n");
//	return 0;
//}
//
//void main()--太古老，不推荐
//int main(void)--表示main函数不接收任何参数
//int main(int argc, char* argv[])--以后再研究
// 
//printf是库函数--C语言编译器提供的一个现成的函数
//直接可以使用，但是在使用之前要包含头文件#include<stdio.h>
//功能就是在屏幕上打印数据
//"hehe"--是一个字符串
//双引号引起来的就是字符串


//二、数据类型
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));		 //1字节 = 8比特位
//	printf("%d\n", sizeof(short));		 //2字节
//	printf("%d\n", sizeof(int));		 //4字节
//	printf("%d\n", sizeof(long));		 //4字节
//	printf("%d\n", sizeof(long long));	 //8字节
//	printf("%d\n", sizeof(float));		 //4字节
//	printf("%d\n", sizeof(double));		 //8字节
//	return 0;
//}
//%d - 以10进制的形式打印一个整数
//计算机识别的是二进制
//计算机中的单位：bit、Byte、KB、MB、GB....
//1Byte=8bit、1KB=1024Byte、1MB=1024KB、1GB=1024MB
//字节跳动 ByteDance
//sizeof(long)>=sizeof(int)


//三、常量/变量
//常量：不变的值
//变量：经常变化的值

//3.1 定义变量的方法
//#include<stdio.h>
//int main()
//{
	//类型	  变量名;
	//类型	  变量名 = 初始值;

	//int age1;
	//int age2 = 20;

	//float weight = 55.5f;
	//55.5 小数直接写出来，编译器默认是double类型
	//55.5f 这个时候就是float类型
	//int num = 10;
	//printf("%d\n", num);
	//num = 20;
	//printf("%d\n", num);
	//return 0;
//}
//变量不能由数字开头，不能使用关键字，要起的有意义


//3.2 变量的分类
//全局变量：大括号外面的
//局部变量：大括号里面的

//#include<stdio.h>
//原则上变量名尽量不要冲突
//当全局变量和局部变量名字冲突的情况下局部优先
//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//3.3 变量的使用
//写一个代码求两个整数的和
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2); //10、20
	//输入两个整数的值
	//&num1 - 取出num1的地址
	//& 取地址操作符
//	sum = num1 + num2;
//	printf("%d\n",sum);
//	return 0;
//}