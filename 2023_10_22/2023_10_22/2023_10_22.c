#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����Ļ�ϴ�ӡ1~10��ֵ
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


//����Ļ�ϴ�ӡ 1~10 ��ֵ - while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//break�����þ�������ѭ��������ѭ�����ڻ��ж��ٴΣ�ֻҪbreak��ִ�У���ֱ��ֹͣ
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
//			continue;//���� - continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ���
//
//		printf("%d ", i); //1 2 3 4 ��ѭ��
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


//����Ļ�ϴ�ӡ 1~10 ��ֵ - for
//forѭ���ĳ�ʼ�����жϣ�ѭ���������ʽ������ʡ��
//�����жϲ���ʡ�ԣ�Ҫע�⣺���ʡ���˱�ʾ�жϲ��ֺ�Ϊ��

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
//		printf("%d ", i); //1 2 3 4 ��ѭ��
//		i++;
//	} while (i<=10);
//
//	return 0;
//}


//��ӡ100~200������
//int main()
//{
//	//����100~200֮�����
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����i������
//
//		//������i����100��200֮�������
//		//ÿ��ѭ����������һ��i�����ʱ���ж�i�Ƿ�������
//		//�����ǣ�����2~i-1֮������֣�ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��ʾi��������
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

//�Ľ�
//int main()
//{
//	//����100~200֮�����
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//����i������
//
//		//������i����100��200֮�������
//		//ÿ��ѭ����������һ��i�����ʱ���ж�i�Ƿ�������
//		//�����ǣ�����2~i-1֮������֣�ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��ʾi��������
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
//sqrt- �⺯��- ��ƽ����
// 
//int main()
//{
//	//����100~200֮�����
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;//����i������
//
//		//������i����100��200֮�������
//		//ÿ��ѭ����������һ��i�����ʱ���ж�i�Ƿ�������
//		//�����ǣ�����2~i-1֮������֣�ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��ʾi��������
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


//goto���
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
//	int r = rand();//���ɵ�������ķ�Χ��0~RAND_MAX(32767)
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

//��������Ϸ
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
//	//n%100 ������ȡֵ�ķ�Χ 0~99
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("�㻹��%d�λ��ᡣ\n", count);
//		printf("Guess-->");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("��С�ˡ�\n");
//		}
//		else if (guess > r)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��¶��ˣ�\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//		printf("���������꣡��ȷ��Ϊ%d��\n", r);
//}
//int main()
//{
//	menu();
//	srand((unsigned int)time(NULL));
//	printf("������ѡ�1/0����");
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//		case 1:
//			printf("������Ϸ��\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("����������������롣\n");
//			break;
//	}
//
//	return 0;
//}

//���������������������������Լ��
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