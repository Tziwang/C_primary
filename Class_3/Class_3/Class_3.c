#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//注意点：在整个工程中main函数有且只有一个

//作业讲解：
// www.cplusplus.com
// BC41
//scanf函数返回的是读取到数据的个数
//如果scanf函数读取失败会返回EOF
//EOF = end of file 文件结束标志
//#define EOF -1

#include<stdio.h>
//int main()
//{
//	//int IQ = 0;
//	//int n = scanf("%d", &IQ);  //输入123
//	//printf("%d\n", n);  //输出1
//
//	int a = 0;
//	int b = 0;
//	int c = scanf("%d %d", &a, &b);  //输入1 234
//	printf("%d\n", c);  //输出2
//
//	return 0;
//}

//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。
//输入一个整数表示一个人的智商。如果大于等于140，则表明他是一个天才，输出“Genius”。
//int main()
//{
//	int IQ = 0;
//	while (scanf("%d", &IQ) != EOF)
//	//while (scanf("%d", &IQ) == 1)
//	{
//		if (IQ >= 140)
//			printf("Genius\n");
//	}
//
//	return 0;
//}
//ctrl+z可以读取一个EOF让程序停止，这里需要按三次

//  / = 取余
//  % = 取整

//八、函数
//int Add(int x, int y)  //x和y是形式参数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);  //a和b是实际参数
//	printf("%d\n", c);
//
//	return 0;
//}


//九、数组 -- 可以保存一组相同类型的数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //整型数组
//	//     下标 =   0,1,2,3,4,5,6,7,8,9
//	//char ch[8]; //字符数组
//
//	printf("%d\n", arr[5]); //打印下标为5的数
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);  //把数组全部打印出来
//		i++;
//	}
//		
//	return 0;
//}


//十、操作符
//10.1 算术操作符：+ - * / %
//int main()
//{
//	int a = 7 / 2; // / -- 取整数
//	printf("%d\n", a);
//	 
//	printf("%lf\n", 7 / 2.0);
//	printf("%lf\n", 7.0 / 2);
//	printf("%lf\n", 7.0 / 2.0);
//
//	// % -- 取余数，两边必须都是整型
//	// 7 % 2.0 是不对的
//
//	return 0;
//}

//10.2 移位操作符：《 》
//10.3 位操作符：& ^ |

//10.4 赋值操作符：=   +=   -=   *=   /=   &=   ^=   |=    》=  《=
//int main()
//{
//	int a = 0;
//	a = 10; //赋值
//
//	a = a + 5;
//	a += 5; //复合赋值
//
//	a = a - 5;
//	a -= 5;
//
//	a = a * 5;
//	a *= 5;
//
//	a = a / 5;
//	a /= 5;
//
//	return 0;
//}

//10.5 单目操作符：!  -  +  &  sizeof  ~  ++  --  *  （类型）
//单目操作符：只有一个操作数
//双目操作符：有两个操作数
// 1. !
//C语言中如何表示真假呢？
//0为假，非0为真
//-1是真
//int main()
//{
//	int a = 1;
//	if (a) //a为真进入if
//	{
//		printf("hehe\n");
//	}
//	if (!a) //a为假进入if
//	{
//		printf("haha\n");
//	}
//	printf("%d\n", !a); //!a=0
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	if (a) //a为真进入if
//	{
//		printf("hehe\n");
//	}
//	if (!a) //a为假进入if
//	{
//		printf("haha\n");
//	}
//	printf("%d\n", !a); //!a=1
//
//	return 0;
//}

//2. -
//int main()
//{
//	int a = -5;
//	int b = -a;
//	printf("%d\n", b);
//
//	return 0;
//}

//3. sizeof
//int main()
//{
//	int a = 100;
//	//sizeof是一个操作数，不是函数
//	//sizeof计算的是变量占有内存的大小，单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a); //三种写法都可以
//	//sizeof后面括号省略说明它不是函数
//	//printf("%d\n", sizeof int); //错误示范
//	
//	return 0;
//}

//4. ++
//int main()
//{
//	int a = 1;
//	int b = ++a; //前置++，先++，后使用
//	/*a = a + 1;
//	b = a;*/
//	printf("a=%d b=%d\n", a, b); //打印a=2 b=2
//
//	int c = 1;
//	int d = c++; //后置++，先使用，后++
//	/*d = c;
//	c = c + 1;*/
//	printf("c=%d d=%d\n", c, d); //打印c=2 d=1
//
//	return 0;
//}

//5. --
//int main()
//{
//	int a = 1;
//	int b = --a; //前置--，先--，后使用
//	/*a = a - 1;
//	b = a;*/
//	printf("a=%d b=%d\n", a, b); //打印a=0 b=0
//
//	int c = 1;
//	int d = c--; //后置--，先使用，后--
//	/*d = c;
//	c = c - 1;*/
//	printf("c=%d d=%d\n", c, d); //打印c=0 d=1
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("%d\n", a--); //打印5，先输出再减
//	printf("%d\n", a); //打印4
//
//	int b = 5;
//	printf("%d\n", --b); //打印4，先减再输出
//	printf("%d\n", b); //打印4
//
//	return 0;
//}

//6. （类型）
//int main()
//{
//	//强制类型转换，少用
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}