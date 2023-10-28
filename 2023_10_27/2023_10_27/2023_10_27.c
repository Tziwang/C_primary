#define _CRT_SECURE_NO_WARNINGS 1
//vs        --- MSVC
//小熊猫C++  --- gcc -- 开源

// 函数

// 库函数的使用方法
//#include <math.h>
#include <stdio.h>
//
//int main()
//{
//	double ret = sqrt(16.0);
//	printf("%lf\n", ret);
//
//	return 0;
//}


//加法函数
//逐步调试：形参和实参各自是独立的内存空间
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//或
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//
//	int sum = Add(a, b); //用sum来接收
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//如果n是奇数就返回1
//如果n是偶数就返回0
//int test(int n)
//{
//	if (n % 2 == 1)
//		return 1;
//	else
//		return 0;
//}


//写一个函数打印1~n的数字
//void Print(int n)
//{
//	if (n < 1)
//		return;//函数提前返回，提前结束
//
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//return返回的值和函数返回类型不一致，系统会自动将返回的值隐式转换为函数的返回类型。
//int test()
//{
//	//....
//	return 3.5;
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//	return 0;
//}

// warning C4715: “test”: 不是所有的控件路径都返回值
//if语句情况考虑不周
//int test()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//		return 1;
//}
//
//int main()
//{
//
//	return 0;
//}


//打印菜单
//*************************
//*****  1. play    *******
//*****  0. exit    *******
//*************************

//void menu(void)
//{
//	printf("************************\n");
//	printf("*****   1. play    *****\n");
//	printf("*****   0. exit    *****\n");
//	printf("************************\n");
//}
//
//int main()
//{
//	menu();
//
//	return 0;
//}


//无参数
//不建议这么写
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	test(1);
//	test(100);
//	test(100,200); //都打印hehe
//
//	return 0;
//}

// warning C4087: “test”: 用“void”参数列表声明
//不需要参数还给我参数，报警告！
//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	test(1);
//	test(100);
//	test(100,200); //都打印hehe
//
//	return 0;
//}


//函数的返回类型如果什么都不写，默认函数的返回类型是int
//不建议什么都不写
//test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret); //打印5
//
//	return 0;
//}


//1. 实参和形参的名字可以相同
//2. 数组传参写的是数组名
//3. 形参写的也是数组的形式，并且在形参书写的时候可以省略元素个数（针对一维数组）
//4. 数组传参后，形式的数组和实参的数组是同一块空间，改变形参的数组就是在修改实参数组（为什么呢？）


//写一个函数，对一个整型数组的内容全部置为-1，再写一个函数打印数组的内容。
//自己写
//void Set_arr(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void Print_arr(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	Set_arr(arr1);
//	Print_arr(arr1);
//
//	return 0;
//}

//改进
//void Set_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void Print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//
//	Set_arr(arr1,sz1); //将数组的元素全部设置为-1
//	Print_arr(arr1,sz1); //打印数组的所有内容
//
//	return 0;
//}


//计算某年某月有多少天
//自己写1
//int is_leap_year(int y,int arr[])
//{
//	if (y % 4 == 0 && y % 400 != 0 || y % 400 == 0)
//	{
//		arr[2] = 29;
//	}
//	
//}
//void get_days_of_month(int arr[], int m)
//{
//	printf("%d\n", arr[m]);
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	scanf("%d %d", &y, &m);
//	is_leap_year(y,arr);
//	get_days_of_month(arr,m);
//
//	return 0;
//}

//自己写2
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 400 != 0 || y % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//void get_days_of_month(int y, int m)
//{
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (is_leap_year(y) == 1)
//	{
//		arr[2] = 29;
//	}
//	printf("%d\n", arr[m]);
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d %d", &y, &m);
//	is_leap_year(y);
//	get_days_of_month(y, m);
//
//	return 0;
//}

//改进：嵌套调用
//是闰年返回1
//不是闰年返回0
//闰年的判断：
//1. 能被4整除，并且不能被100整除
//2. 能被400整除
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int get_days_of_month(int y, int m)//2020 3
//{
//	int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	//               1   2   3   4   5   6   7   8    9  10  11  12
//	int day = days[m];
//	//闰年的2月是需要特殊调整 - 29天
//	if (is_leap_year(y) && m == 2)
//	{
//		day++;
//	}
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);//2020 2
//	int d = get_days_of_month(year, month);
//	printf("%d\n", d);
//
//	return 0;
//}


//嵌套访问：将一个函数的返回值作为另一个函数的参数
//#include <string.h>
//
//int main()
//{
//	//size_t len = strlen("abcdef");//a b c d e f \0
//	//printf("%zd\n", len);  /6
//
//	printf("%zd\n", strlen("abcdef")); //6
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d ", printf("%d ", 43))); //打印43 3 2
//	return 0;
//}


//函数声明 - 就是在告诉编译器函数的名字，参数，返回类型
//当函数定义在main函数后面时要在main函数前进行函数声明
//int is_leap_year(int y);
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);//函数调用
//	if (ret == 1)
//		printf("闰年\n");
//	else
//		printf("不是闰年\n");
//
//	return 0;
//}
//函数定义
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

//函数定义 - 是一种特殊的声明
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);//函数调用
//	if (ret == 1)
//		printf("闰年\n");
//	else
//		printf("不是闰年\n");
//
//	return 0;
//}


//include是包含的意思，这里就是要包含add.h这个文件
//#include "add.h"//包含自己创建的头文件使用""

//事实上，在我们企业中写代码的时候，函数的声明和定义又是怎么样使用的？
//int main()
//{
//	int a = 30;
//	int b = 20;
//
//	//函数调用
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}