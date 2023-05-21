#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//分支语句：if、switch
//if语句
//1.单分支
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//		printf("成年\n");
//
//	return 0;
//}

//2.双分支
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//
//	return 0;
//}

//3.多分支
//int main()
//{
//	/*int age = 0;
//	scanf("%d", &age);
//	if(age < 18)
//		printf("少年\n");
//	else if(age >= 18 && age < 30) //是else if不是if else
//		printf("青年\n");
//	else if(age >= 30 && age < 50)
//		printf("中年\n");
//	else if(age >= 50 && age < 80)
//		printf("老年\n");
//	else
//		printf("老寿星\n");*/
//
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else
//	{
//		if (age >= 18 && age < 30) //注意这里是if
//			printf("青年\n");
//		else if (age >= 30 && age < 50)
//			printf("中年\n");
//		else if (age >= 50 && age < 80)
//			printf("老年\n");
//		else
//			printf("老寿星\n");
//	}
//
//	return 0;

// 注意：if、else语句默认后面只控制一条语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//		//printf("成年\n");
//		//printf("交女朋友\n"); //输入15只打印交女朋友
//		//if语句默认后面只控制一条语句
//		{
//			printf("成年\n");
//			printf("交女朋友\n");
//		}
//
//	return 0;
//}
 
//4.悬空else
//int main()
//{
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//else 
//	//	printf("haha\n"); //不打印
//	//return 0;
//	//本代码等于
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n"); //不打印
//	}
//	return 0;
//}
// 
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n"); //打印haha
//	return 0;
//}

//练习
//1.判断一个数是否为奇数
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//		printf("%d", i);
//
//	return 0;
//}
//2.输出1-100
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		++i;
//	}
//	return 0;
//}
//3.输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		++i;
//	}
//	return 0;
//}
//或者
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i = i + 2;
//	}
//	return 0;
//}

//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("星期一\n");
//	else if (day == 2)
//		printf("星期二\n");
//	else if (day == 3)
//		printf("星期三\n");
//	else if (day == 4)
//		printf("星期四\n");
//	else if (day == 5)
//		printf("星期五\n");
//	else if (day == 6)
//		printf("星期六\n");
//	else if (day == 7)
//		printf("星期日\n");
//	else
//		printf("输入错误\n");
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break; //最后加上
//		default:  //可以在任何地方
//			printf("输入错误\n");
//			break; //最后加上
//	}
//		
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break; //最后加上
//	default:  //可以在任何地方,要在switch大括号内
//		printf("输入错误\n");
//		break; //最后加上
//	}
//
//	return 0;
//}


//循环语句：while、for、do...while
// while
//int main()
//{
//	if (1)
//		printf("hehe\n"); //只打印一个hehe
//	return 0;
//}

 //int main()
//{
//	while (1)
//		printf("hehe\n"); //打印无数个hehe
//	return 0;
//}
//
//getchar与putchar
//int main()
//{
//	int ch = getchar(); //获得一个字符，int是cplusplus网站上要求的
//	printf("%c\n", ch);
//	putchar(ch); //打印一个字符
//
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
// //EOF = end of file 文件结束标志 (-1)
// //在函数读取失败的时候返回了EOF
// //scanf函数读取成功，返回的是读取到的数据的个数
// //读取失败返回EOF
// //getchar读取成功返回字符的ASCII码值
// //读取失败返回EOF
// //crtl+Z可以让scanf和getchar返回EOF
//	{
//		putchar(ch);  //一直打印直到crtl+Z
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>"); //123456
//	scanf("%s", password);  
//	printf("请确认密码(Y/N):");
//	char ch = 0;
//	getchar(); //把\n处理掉
//	ch = getchar();
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//	return 0;
//}
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");  //123456 abc
//	scanf("%s", &password);
//	printf("请确认密码(Y/N):");
//	char ch = 0;
//	//清理掉缓冲区中剩余的数据
//	while (getchar() != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//	return 0;
//}