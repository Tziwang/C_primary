#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//10.7 ��ϵ��������>  >=  <  <=  !=  ==
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

//10.8 �߼���������&&  ||
//int main()
//{
//	// ����  &&  �߼��룬������������Ϊ�棬��Ϊ�棬ֻҪ��һ��Ϊ�٣���Ϊ��
//	// ����  ||  �߼�������������ֻҪ��һ��Ϊ�棬��Ϊ�棬����ͬʱΪ�٣���Ϊ��
//	int a = 3;
//	int b = 5;
//	if(a && b)
//		printf("hehe\n"); //��ӡ
//
//	int c = 0;
//	int d = 0;
//	if (c || d)
//		printf("haha\n"); //����ӡ
//	return 0;
//}

//10.9 ������������exp1 ? exp2 : exp3����Ŀ��������
//					��    ִ��   ��ִ��
//					��    ��ִ�� ִ��
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
//		int m = (a > b ? a : b); //һ��Ҫ������
//		printf("%d\n", m);
//	}
//	return 0;
//}

//10.10 ���ű��ʽ��exp1, exp2, exp3, ...expN
//���ű��ʽ�Ǵ����������μ���ģ����ű��ʽ�Ľ�������һ�����ʽ�Ľ��
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

//10.11 �±����ò������ͺ������ò�����
// 1. �±�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// �±�	 		0 1 2 3 4 5 6 7 8 9 
//	printf("%d\n", arr[5]);
//	// []��һ�����������±����ò�����
//
//	return 0;
//}

//2. ��������
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int z = ADD(3, 5); // ( )�������ò�����
//	printf("%d\n", z);
//
//	return 0;
//}


//ʮһ�������ؼ���
// �ؼ��������Ա���Ԥ���趨�õģ��ǲ����Լ������
//11.1 auto�Զ�
//int main()
//{
//	auto int m = 0; //�ֲ������ǽ��������򴴽����������������٣��Զ��������Զ����ٵ�
//	//ͨ��ʡ��auto
//	return 0;
//}

//11.2 typedef������������
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
//}Node; //��struct Node������Node

//11.3 static
//1. ���ξֲ�����
// C/C++����ѧϰ��ʱ����ڴ��Ż���Ϊ3������ջ���򡢾�̬��������
// ջ������ʱ���õı�����������ջ��
// ջ���������ص㣺���������򴴽��������������٣����ڴ滹������ϵͳ��
// ��������̬�ڴ���䣬malloc��calloc��realloc��free
// ��̬����ȫ�ֱ�������̬����
// ��̬�������ص㣺�����ú�ֱ��������������٣���������ϵͳ��
// ���ξֲ�����ʱ������һ���ֲ������Ǵ����ջ���ģ������static���ξʹ洢�ھ�̬����
// static���ξֲ������ı��˱����Ĵ洢���ͣ���ʵ�Ǹı�������λ��
// ʹ�������̬�������������ڱ䳤�ˣ�ֱ����������Ž���
// ���������򲻱䣨��ȫ�ֱ���������
//void test()
//{
//	int a = 5;
//	a++;
//	printf("%d ", a); //��ӡ6 6 6 6 6 6 6 6 6 6 ,a�뿪ʱ����
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
//	static int a = 5; //��̬����
//	a++;
//	printf("%d ", a); //��ӡ6 7 8 9 10 11 12 13 14 15 ��a�뿪������
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

//2. ����ȫ�ֱ���
// ȫ�ֱ��������ⲿ�������ԣ�����������Դ�ļ��ڲ���Ȼ����ʹ�ã�����Ҫ��ȷ,add��
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static����ȫ�ֱ������ı������ȫ�ֱ������������ԣ�add2��
//���ⲿ�������Ա�����ڲ���������
//�����̬����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ��
//���ھ�̬�����о������������С��
//extern int g_vel; //���򱨴��޷��������ⲿ���ţ�
//int main()
//{
//	printf("%d\n", g_vel);
//
//	return 0;
//}

//3. ���κ���
//static���κ���������ȫ�ֱ�����һ����
//�����ⲿ����
//extern int ADD(int, int); //add3
////extern int ADD(int x, int y);Ҳ����
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

//extern int Add(int, int); //�����޷��������ⲿ����,add4��
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
//	//register �����ǽ��������
//	//������ڼĴ����У����ǲ�����ķ��ڼĴ����У�ȡ���ڱ�����
//	register int num = 10;
//
//	return 0;
//}


//ʮ����#define���峣���ͺ�
//12.1 ���峣��
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

//12.2 �����
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


//ʮ�����ṹ��
//ѧ��
//struct Stu
//{
//	//ѧ�����������
//	char name[20]; //����--�ַ�����һ��������2���ַ�
//	int age; //����
//	char sex[5]; //�С�Ů������
//};
// �鱾
//struct Book
//{
//	char name[20];
//	char author[10];
//	float price;
//};
//int main()
//{
//	struct Stu s = { "����",20,"��" };
//	struct Book b = { "����C����","����",66.6f };
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	printf("%s %s %f\n", b.name, b.author, b.price);
//
//	return 0;
//}