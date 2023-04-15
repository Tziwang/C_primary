#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//作业讲解：
//1. 数组如果初始化可以不直接指定大小，会根据初始化的内容来确定大小
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int arr1[10] = { 1,2,3 };
//
//	return 0;
//}

//2. 数组的大小必须是常量（本编译器）
// 数组的大小是用变量指定的，存在一定的问题！
// C99标准之前数组的大小不能是变量的
// 在C99标准中引入了变长数组的概念，允许数组的大小是变量，但是这种数组不能直接初始化
// 有的编译器可以（gcc编译器支持C99中的变长数组），这个不行
//int main()
//{
//	int n = 10;
//	char arr[n];  //本编译器报错，C99之后正确
//  char arr1[n] = {0};  //初始化了，所有编译器都报错
//	return 0;
//}

//3. 取较大值
//int MAX(int x, int y)
//{
//    /*if (x > y)
//        return x;
//    else
//        return y;*/
//	int z = (x > y ? x : y);
//	return z;
//	//return(x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int m = MAX(a, b);
//		printf("%d\n", m);
//	}
//
//	return 0;
//}

//4. KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型
//题目有多组输入数据
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    //while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        //判断是否三角形
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            //判断三角形类型
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b && a != c || a == c && a != b || b == c && b != a)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}

//5. 整型最大值
//#include<limits.h>
//INT_MAX; //20亿多
//int main()
//{
//
//	return 0;
//}


//十四、指针
//程序运行起来，要加载到空间，也要申请内存空间使用
//int main()
//{
//	int a = 15;  //虽然a占有四个字节（一个字节8位，一共32位）
//	//但是当我们&a的时候，拿到的是4个字节中第一个字节的地址
//	//printf("%p\n", &a); //%p -- 专门用来打印地址的，是以16进制的形式表示地址的
//	//00000000 00000000 00000000 0000000F二进制（内存窗口00 00 00 0F，十六进制）
//	int* pa = &a; //pa是用来存放a的地址的，是一个指针变量，意思是存放指针的变量
//	//*是在说明pa是指针变量
//	//int -- pa指的是int类型（a）的变量
//	*pa  = 30; //解引用操作符，*pa就是a
//	printf("%d\n", a); //打印30
//
//	return 0;
//}

//编号 = 地址 = 指针
//指针变量 = 存放地址的变量
//口头语中说的指针，基本上都是指针变量

//举一反三
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	//double -- pd指的是int类型（d）的变量
//	*pd = 0;
//	printf("%lf\n", d);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%zd\n", sizeof(p)); //8 = 64/8位 = 8字节
//	printf("%zd\n", sizeof(int*)); //size_t
//
//	return 0;
//}

//补充结构体：结构访问操作符
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//void printf1(struct S t)
//{
//	printf("%s %d %f\n", t.name, t.age, t.score);
//}
//void printf2(struct S* ps)
//{
//	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score); //结构体变量.成员
//	printf("%s %d %f\n", ps->name, ps->age, ps->score); //结构指针->成员
//}
//int main()
//{
//	struct S s = { "zhangsan",20,55.5f };
//	printf1(s);
//	printf2(&s);
//	return 0;
//}