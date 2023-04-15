#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//10.7 关系操作符：>  >=  <  <=  !=  ==
//int main()
//{
//	int a = 4;
//	int b = 5;
//	if (a <= b)
//	//if(a != b)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//10.8 逻辑操作符：&&  ||
//int main()
//{
//	// 并且  &&  逻辑与，两个操作数都为真，才为真，只要有一个为假，则为假
//	// 或者  ||  逻辑或，两个操作数只要有一个为真，则为真，两个同时为假，才为假
//	int a = 3;
//	int b = 5;
//	if(a && b)
//		printf("hehe\n"); //打印
//
//	int c = 0;
//	int d = 0;
//	if (c || d)
//		printf("haha\n"); //不打印
//	return 0;
//}

//10.9 条件操作符：exp1 ? exp2 : exp3（三目操作符）
//					真    执行   不执行
//					假    不执行 执行
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int m = 0;
//	/*
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a > b)
//			m = a;
//		else
//			m = b;
//		printf("%d\n", m);
//	}
//	*/
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int m = (a > b ? a : b); //一定要加括号
//		printf("%d\n", m);
//	}
//	return 0;
//}

//10.10 逗号表达式：exp1, exp2, exp3, ...expN
//逗号表达式是从左向右依次计算的，逗号表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 3;
//	int b = 2;
//	int c = 5;
//	int d = (a += 3, b = 5, c = a + b, c - 4);
//	printf("d = %d\n", d);  // d = 7
//
//	return 0;
//}

//10.11 下标引用操作符和函数调用操作符
// 1. 下标引用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 下标	 		0 1 2 3 4 5 6 7 8 9 
//	printf("%d\n", arr[5]);
//	// []是一个操作符，下标引用操作符
//
//	return 0;
//}

//2. 函数调用
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int z = ADD(3, 5); // ( )函数调用操作符
//	printf("%d\n", z);
//
//	return 0;
//}


//十一、常见关键字
// 关键字是语言本身预先设定好的，是不能自己创造的
//11.1 auto自动
//int main()
//{
//	auto int m = 0; //局部变量是进入作用域创建，出了作用域销毁，自动创建、自动销毁的
//	//通常省略auto
//	return 0;
//}

//11.2 typedef：类型重命名
//typedef unsigned int u_int;
//typedef unsigned long long ull;
//int main()
//{
//	unsigned int num = 0;
//	u_int num2 = 0;
//	ull num3 = 0;
//
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node; //把struct Node改名成Node

//11.3 static
//1. 修饰局部变量
// C/C++代码学习的时候把内存大概划分为3个区域：栈区域、静态区、堆区
// 栈区：临时作用的变量，都是在栈区
// 栈区变量的特点：进入作用域创建，出作用域销毁（把内存还给操作系统）
// 堆区：动态内存分配，malloc、calloc、realloc、free
// 静态区：全局变量、静态变量
// 静态区变量特点：创建好后直到程序结束才销毁（还给操作系统）
// 修饰局部变量时，本来一个局部变量是存放在栈区的，如果被static修饰就存储在静态区了
// static修饰局部变量改变了变量的存储类型，其实是改变了它的位置
// 使得这个静态变量的生命周期变长了，直到程序结束才结束
// 但是作用域不变（和全局变量的区别）
//void test()
//{
//	int a = 5;
//	a++;
//	printf("%d ", a); //打印6 6 6 6 6 6 6 6 6 6 ,a离开时销毁
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//void test()
//{
//	static int a = 5; //静态变量
//	a++;
//	printf("%d ", a); //打印6 7 8 9 10 11 12 13 14 15 ，a离开不销毁
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//2. 修饰全局变量
// 全局变量具有外部链接属性，所以在其他源文件内部依然可以使用（方法要正确,add）
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static修饰全局变量，改变了这个全局变量的链接属性（add2）
//由外部链接属性变成了内部链接属性
//这个静态变量只能在自己所在的源文件内部使用，不能在其他源文件内部使用
//都在静态区，感觉像是作用域变小了
//extern int g_vel; //程序报错（无法解析的外部符号）
//int main()
//{
//	printf("%d\n", g_vel);
//
//	return 0;
//}

//3. 修饰函数
//static修饰函数和修饰全局变量是一样的
//声明外部符号
//extern int ADD(int, int); //add3
////extern int ADD(int x, int y);也可以
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = ADD(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//extern int Add(int, int); //报错（无法解析的外部符号,add4）
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Add(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//11.4 register
//int main()
//{
//	//register 仅仅是建议的作用
//	//建议放在寄存器中，但是不是真的放在寄存器中，取决于编译器
//	register int num = 10;
//
//	return 0;
//}


//十二、#define定义常量和宏
//12.1 定义常量
//#define M 100
//int main()
//{
//	int arr[M] = { 0 };
//	int m = M;
//	printf("%d\n", sizeof(arr)); //400
//	printf("%d\n", M);
//	printf("%d\n", m);
//
//	return 0;
//}

//12.2 定义宏
//#define Add(x,y)((x)+(y))
//extern int ADD(int x, int y); //add3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	//int c = (a)+(b);
//	printf("%d\n", c);
//	int d = ADD(a, b); //add3
//	printf("%d\n", d);
//
//	return 0;
//}


//十三、结构体
//学生
//struct Stu
//{
//	//学生的相关属性
//	char name[20]; //名字--字符串，一个汉字是2个字符
//	int age; //年龄
//	char sex[5]; //男、女、保密
//};
// 书本
//struct Book
//{
//	char name[20];
//	char author[10];
//	float price;
//};
//int main()
//{
//	struct Stu s = { "张三",20,"男" };
//	struct Book b = { "鹏哥C语言","鹏哥",66.6f };
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	printf("%s %s %f\n", b.name, b.author, b.price);
//
//	return 0;
//}