#define _CRT_SECURE_NO_WARNINGS 1
//printf、scanf
//库函数 - C语言的编译器提供的现成的函数，直接可以使用
//scanf的作用是输入数据，数据从键盘读取到内存中
//printf的作用是输出数据，数据从内存打印到屏幕上
//使用的时候要包含头文件stdio.h

#include<stdio.h>
//int main()
//{
	//int a = 0;
	//scanf("%d", &a);
	//%d指定输入的格式，这里需要的是地址，表示存放在哪里，&a：取出a的地址
	//printf("%d", a);
	//输入w变成0，需要整型

	//char ch = 0;
	//scanf("%c", &ch);
	//打印字符
	//printf("%c", ch);
	//输入w输出w
	//return 0;
//}
//%c - 字符
//%d - 整型
//%s - 字符串
//%f - float
//%lf - double float
//%p - 地址的打印


//3.4 变量的作用域和生命周期
//局部变量 -- 作用域是局部范围
//int main()
//{
//	{
//		int a = 100;//变量a的局部范围
//		printf("%d", a);//能打印出100
//	}
//	//printf("%d", a);不能打印出100
//	return 0;
//}

//全局变量 -- 作用域是整个工程，尽量少使用，不安全
//int a = 2023;
//void test()
//{
//	printf("2-->%d\n", a);//能打印
//}
//int main()
//{
//	printf("1-->%d\n", a);//能打印
//	test();
//
//	return 0;
//}

//extern int g_val;
//不加这行和add.c打印不出来，需要声明外部符号
//int main()
//{
//	printf("%d", g_val); //打印2023
//	return 0;
//}

//int g_val = 2024;//冲突了，打印错误
//int main()
//{
//	printf("%d", g_val); 
//	return 0;
//}


//3.5 常量
//1. 字面常量：3、3.14、"a"、""、"avc"、'a'
//int main()
//{
//	int a = 3;
//	printf("%d\n", a); //打印3
//	a = 10;
//	printf("%d\n", a); //打印10
//
//	return 0;
//}

//2. const修饰的常变量
//int main()
//{
//	//常属性
//	//这里的a是具有常属性的，不能被改变，但是本质上还是变量
//	const int a = 3;
//	printf("%d\n", a); //程序报错
//	a = 10;
//	printf("%d\n", a); //程序报错
//
//	return 0;
//}

//int main()
//{
//	//数组
//	const int n = 10; //报错，本质还是变量，这里要求的是常量
//	int arr[n];
// 
//  return 0;
//}

//3. #define定义的标识符常量
//#define SIZE 10
//#define CH 'w'
//int main()
//{
//	//10;
//	int a = SIZE;
//	int arr[SIZE] = {0};
//	printf("%c", CH);
//	return 0;
//}

//4. 枚举常量
//枚举 -- 一一列举
//生活中有些值是可以一一列举的
//性别：男、女、保密
//三原色：red、green、blue

//enum SEX
//{
//	//列出了枚举类型enum SEX的可能取值
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	printf("%d\n", MALE); //0
//	printf("%d\n", FEMALE); //1
//	printf("%d\n", SECRET); //2
//
//	return 0;
//}

//enum SEX
//{
//	//列出了枚举类型enum SEX的可能取值
//	MALE = 4,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//MALE = 6;  //前面有初始值后面不能改了，报错
//	printf("%d\n", MALE); //4
//	printf("%d\n", FEMALE); //5
//	printf("%d\n", SECRET); //6
//
//	return 0;
//}

//enum SEX
//{
//	//列出了枚举类型enum SEX的可能取值
//	MALE = 4,
//	FEMALE = 6,
//	SECRET = 9
//};
//
//int main()
//{
//	printf("%d\n", MALE); //4
//	printf("%d\n", FEMALE); //6
//	printf("%d\n", SECRET); //9
//
//	return 0;
//}


//四、字符串
// 4.1 \0是结束标志
//int main()
//{
//	/*"abcdef";
//	char ch1 = 'a';
//	char ch2 = 'b';
//	char ch3 = 'c';*/
//	char ch[6] = { 'a','b','c','d','e','f' }; //监视有6个
//	char ch2[] = "abcdef"; //隐藏了字符串结束标志\0，监视有7个
//	char ch3[] = "\0abcdef"; 
//	char ch4[] = { 'a','b','c','d','e','f','\0'};
//	char ch5[] = { '\0' , 'a','b','c','d','e','f'};
//
//	printf("%s\n", ch);  //打印出错
//	printf("%s\n", ch2);  //打印abcdef
//	printf("%s\n", ch3);  //不打印
//	printf("%s\n", ch4);  //打印abcdef
//	printf("%s\n", ch5);  //不打印
//	//用%s打印字符串时，就从你给的地址开始打印，一直打印到遇到\0停止
//	return 0;
//}

//#include<string.h>
// int main()
//{
//	char ch1[] = { 'a','b','c' }; //[a][b][c]
//	char ch2[] = { 'a','b','c','\0'}; //[a][b][c][\0]
//	char ch3[] = "abc"; //[a][b][c][\0]
//
//	//strlen是库函数，用来求字符串长度的
//	//就是从给定的地址向后数字符，直到遇到\0结束，\0不统计在内
//	int len1 = strlen(ch1);
//	printf("%d\n", len1); //打印随机数
//
//	int len2 = strlen(ch2);
//	printf("%d\n", len2); //打印3
//
//	int len3 = strlen(ch3);
//	printf("%d\n", len3); //打印3
//
//	return 0;
//}


//4.2 转义字符：转变原来的意思
//int main()
//{
//	printf("(Are you ok??)");
//	//Are you ok]
//	//??) - 三字母词 --> ]
//	//
//	printf("(Are you ok\?\?)");
//	return 0;
//}

//int main()
//{
//	printf("abndef");
//	printf("ab\ndef"); 
//	printf("c:\test\tset.c"); // \t = tab
//	printf("c:\\test\\tset.c");
//	return 0;
//}

// \? -- 让问号不被解析为三字母词中的问号
// \' -- 打印单引号
// \" -- 打印双引号
// \t
// \a -- 警告字符，触发蜂鸣
// \a -- 往后退一格

//int main()
//{
//	printf("%c\n", '\''); // '
//	printf("%s\n", "\""); // "
//	printf("a\\tb"); // a\tb
//	printf("\a");
//	printf("abc\bdef\n"); // abdef
//	return 0;
//}

// \ddd：ddd表示1-3个八进制数字, \130 = 字符X
// \xdd：dd表示2个十六进制数字，\x30 = 字符0
//int main()
//{
//	printf("%c", '\130');
//	printf("%c", '\x30');
//	//字符不方便存储，我们就给字符编号ASCII
//	//'0'-'9' = 30H-39H、'A'-'Z'=41H-5AH、'a'-'z'=61H-7AH
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\x11\328\test.c")); //15
//	return 0;
//}


//五、注释
//C语言注释风格不支持嵌套：/*  */


//六：选择语句if、switch
//int main()
//{
//	printf("加入比特就业课学习\n");
//	printf("你愿意好好学习吗?(1/0)>:");
//	int flag = 0;
//	scanf("%d", &flag);
//
//	if (flag == 1)
//		printf("好offer\n");
//	else if (flag == 0)
//		printf("卖红薯\n");
//
//	return 0;
//}


//七、循环语句:while、for、do while
//50000行代码，就不错了
//int main()
//{
//	int line = 0;
//	while (line < 50000)
//	{
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//	if (line == 50000)
//		printf("好offer\n");
//	else
//		printf("差点意思\n");
//
//	return 0;
//}
