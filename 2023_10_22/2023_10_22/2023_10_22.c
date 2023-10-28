#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//在屏幕上打印1~10的值
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//
//	int cnt = 0;
//	do
//	{
//		cnt++;
//		num = num / 10;//num/=10
//	} while (num);
//
//	printf("%d\n", cnt);
//
//	return 0;
//}


//在屏幕上打印 1~10 的值 - while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//break的作用就是跳过循环，不管循环后期还有多少次，只要break被执行，就直接停止
//		printf("%d ", i); //1 2 3 4
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//继续 - continue的作用是跳过本次循环continue后边的代码，直接去判断部分
//
//		printf("%d ", i); //1 2 3 4 死循环
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i); //2 3 4 6 7 8 9 10 11
//	}
//
//	return 0;
//}


//在屏幕上打印 1~10 的值 - for
//for循环的初始化，判断，循环三个表达式都可以省略
//但是判断部分省略，要注意：如果省略了表示判断部分恒为真

//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (; i<=10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i); //1 2 3 4 6 7 8 9 10
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i); //1 2 3 4 死循环
//		i++;
//	} while (i<=10);
//
//	return 0;
//}


//打印100~200的素数
//int main()
//{
//	//产生100~200之间的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设i是素数
//
//		//产生的i就是100到200之间的数字
//		//每次循环进来产生一个i，这个时候判断i是否是素数
//		//方法是：产生2~i-1之间的数字，去试除i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//表示i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//改进
//int main()
//{
//	//产生100~200之间的数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//假设i是素数
//
//		//产生的i就是100到200之间的数字
//		//每次循环进来产生一个i，这个时候判断i是否是素数
//		//方法是：产生2~i-1之间的数字，去试除i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//表示i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//

#include <math.h>
//sqrt- 库函数- 开平方的
// 
//int main()
//{
//	//产生100~200之间的数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;//假设i是素数
//
//		//产生的i就是100到200之间的数字
//		//每次循环进来产生一个i，这个时候判断i是否是素数
//		//方法是：产生2~i-1之间的数字，去试除i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//表示i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//


//goto语句
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//zhangsan:
//	printf("heihei\n");
//	goto zhangsan;
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 5; i++)
//	{
//		for (j=0; j < 5; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}


//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int r = rand();//生成的随机数的范围是0~RAND_MAX(32767)
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//
//	return 0;
//}

//猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("******   1:PLAY   ******\n");
//	printf("******   2:EXIT   ******\n");
//	printf("************************\n");
//}
//void game()
//{
//	int r = rand() % 100 + 1;//1~100
//	//n%100 余数的取值的范围 0~99
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("你还有%d次机会。\n", count);
//		printf("Guess-->");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了。\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了！\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//		printf("次数已用完！正确答案为%d。\n", r);
//}
//int main()
//{
//	menu();
//	srand((unsigned int)time(NULL));
//	printf("请输入选项（1/0）：");
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//		case 1:
//			printf("进入游戏。\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏。\n");
//			break;
//		default:
//			printf("输入错误，请重新输入。\n");
//			break;
//	}
//
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
#include<stdio.h>
int main()
{
	int a, b = 0;
	scanf("%d %d", &a, &b);
	int i = 0;
	int r = 0;
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
			{
				r = i;
			}
		}

	}
	printf("%d", r);

	return 0;
}