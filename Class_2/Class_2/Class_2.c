#define _CRT_SECURE_NO_WARNINGS 1
//printf��scanf
//�⺯�� - C���Եı������ṩ���ֳɵĺ�����ֱ�ӿ���ʹ��
//scanf���������������ݣ����ݴӼ��̶�ȡ���ڴ���
//printf��������������ݣ����ݴ��ڴ��ӡ����Ļ��
//ʹ�õ�ʱ��Ҫ����ͷ�ļ�stdio.h

#include<stdio.h>
//int main()
//{
	//int a = 0;
	//scanf("%d", &a);
	//%dָ������ĸ�ʽ��������Ҫ���ǵ�ַ����ʾ��������&a��ȡ��a�ĵ�ַ
	//printf("%d", a);
	//����w���0����Ҫ����

	//char ch = 0;
	//scanf("%c", &ch);
	//��ӡ�ַ�
	//printf("%c", ch);
	//����w���w
	//return 0;
//}
//%c - �ַ�
//%d - ����
//%s - �ַ���
//%f - float
//%lf - double float
//%p - ��ַ�Ĵ�ӡ


//3.4 ���������������������
//�ֲ����� -- �������Ǿֲ���Χ
//int main()
//{
//	{
//		int a = 100;//����a�ľֲ���Χ
//		printf("%d", a);//�ܴ�ӡ��100
//	}
//	//printf("%d", a);���ܴ�ӡ��100
//	return 0;
//}

//ȫ�ֱ��� -- ���������������̣�������ʹ�ã�����ȫ
//int a = 2023;
//void test()
//{
//	printf("2-->%d\n", a);//�ܴ�ӡ
//}
//int main()
//{
//	printf("1-->%d\n", a);//�ܴ�ӡ
//	test();
//
//	return 0;
//}

//extern int g_val;
//�������к�add.c��ӡ����������Ҫ�����ⲿ����
//int main()
//{
//	printf("%d", g_val); //��ӡ2023
//	return 0;
//}

//int g_val = 2024;//��ͻ�ˣ���ӡ����
//int main()
//{
//	printf("%d", g_val); 
//	return 0;
//}


//3.5 ����
//1. ���泣����3��3.14��"a"��""��"avc"��'a'
//int main()
//{
//	int a = 3;
//	printf("%d\n", a); //��ӡ3
//	a = 10;
//	printf("%d\n", a); //��ӡ10
//
//	return 0;
//}

//2. const���εĳ�����
//int main()
//{
//	//������
//	//�����a�Ǿ��г����Եģ����ܱ��ı䣬���Ǳ����ϻ��Ǳ���
//	const int a = 3;
//	printf("%d\n", a); //���򱨴�
//	a = 10;
//	printf("%d\n", a); //���򱨴�
//
//	return 0;
//}

//int main()
//{
//	//����
//	const int n = 10; //�������ʻ��Ǳ���������Ҫ����ǳ���
//	int arr[n];
// 
//  return 0;
//}

//3. #define����ı�ʶ������
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

//4. ö�ٳ���
//ö�� -- һһ�о�
//��������Щֵ�ǿ���һһ�оٵ�
//�Ա��С�Ů������
//��ԭɫ��red��green��blue

//enum SEX
//{
//	//�г���ö������enum SEX�Ŀ���ȡֵ
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
//	//�г���ö������enum SEX�Ŀ���ȡֵ
//	MALE = 4,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//MALE = 6;  //ǰ���г�ʼֵ���治�ܸ��ˣ�����
//	printf("%d\n", MALE); //4
//	printf("%d\n", FEMALE); //5
//	printf("%d\n", SECRET); //6
//
//	return 0;
//}

//enum SEX
//{
//	//�г���ö������enum SEX�Ŀ���ȡֵ
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


//�ġ��ַ���
// 4.1 \0�ǽ�����־
//int main()
//{
//	/*"abcdef";
//	char ch1 = 'a';
//	char ch2 = 'b';
//	char ch3 = 'c';*/
//	char ch[6] = { 'a','b','c','d','e','f' }; //������6��
//	char ch2[] = "abcdef"; //�������ַ���������־\0��������7��
//	char ch3[] = "\0abcdef"; 
//	char ch4[] = { 'a','b','c','d','e','f','\0'};
//	char ch5[] = { '\0' , 'a','b','c','d','e','f'};
//
//	printf("%s\n", ch);  //��ӡ����
//	printf("%s\n", ch2);  //��ӡabcdef
//	printf("%s\n", ch3);  //����ӡ
//	printf("%s\n", ch4);  //��ӡabcdef
//	printf("%s\n", ch5);  //����ӡ
//	//��%s��ӡ�ַ���ʱ���ʹ�����ĵ�ַ��ʼ��ӡ��һֱ��ӡ������\0ֹͣ
//	return 0;
//}

//#include<string.h>
// int main()
//{
//	char ch1[] = { 'a','b','c' }; //[a][b][c]
//	char ch2[] = { 'a','b','c','\0'}; //[a][b][c][\0]
//	char ch3[] = "abc"; //[a][b][c][\0]
//
//	//strlen�ǿ⺯�����������ַ������ȵ�
//	//���ǴӸ����ĵ�ַ������ַ���ֱ������\0������\0��ͳ������
//	int len1 = strlen(ch1);
//	printf("%d\n", len1); //��ӡ�����
//
//	int len2 = strlen(ch2);
//	printf("%d\n", len2); //��ӡ3
//
//	int len3 = strlen(ch3);
//	printf("%d\n", len3); //��ӡ3
//
//	return 0;
//}


//4.2 ת���ַ���ת��ԭ������˼
//int main()
//{
//	printf("(Are you ok??)");
//	//Are you ok]
//	//??) - ����ĸ�� --> ]
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

// \? -- ���ʺŲ�������Ϊ����ĸ���е��ʺ�
// \' -- ��ӡ������
// \" -- ��ӡ˫����
// \t
// \a -- �����ַ�����������
// \a -- ������һ��

//int main()
//{
//	printf("%c\n", '\''); // '
//	printf("%s\n", "\""); // "
//	printf("a\\tb"); // a\tb
//	printf("\a");
//	printf("abc\bdef\n"); // abdef
//	return 0;
//}

// \ddd��ddd��ʾ1-3���˽�������, \130 = �ַ�X
// \xdd��dd��ʾ2��ʮ���������֣�\x30 = �ַ�0
//int main()
//{
//	printf("%c", '\130');
//	printf("%c", '\x30');
//	//�ַ�������洢�����Ǿ͸��ַ����ASCII
//	//'0'-'9' = 30H-39H��'A'-'Z'=41H-5AH��'a'-'z'=61H-7AH
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\x11\328\test.c")); //15
//	return 0;
//}


//�塢ע��
//C����ע�ͷ��֧��Ƕ�ף�/*  */


//����ѡ�����if��switch
//int main()
//{
//	printf("������ؾ�ҵ��ѧϰ\n");
//	printf("��Ը��ú�ѧϰ��?(1/0)>:");
//	int flag = 0;
//	scanf("%d", &flag);
//
//	if (flag == 1)
//		printf("��offer\n");
//	else if (flag == 0)
//		printf("������\n");
//
//	return 0;
//}


//�ߡ�ѭ�����:while��for��do while
//50000�д��룬�Ͳ�����
//int main()
//{
//	int line = 0;
//	while (line < 50000)
//	{
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//	if (line == 50000)
//		printf("��offer\n");
//	else
//		printf("�����˼\n");
//
//	return 0;
//}
