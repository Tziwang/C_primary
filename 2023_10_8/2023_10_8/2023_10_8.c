#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��1����C���Գ�������
//һ����һ��C���Գ���
//stdio - standard input output
//��׼�������ͷ�ļ�
//int main()
//{
//	printf("Hello C\n");
//	//printf��һ���⺯�������þ�������Ļ�ϴ�ӡ��Ϣ
//
//	return 0;
//}

//����+����+���� ctrl+F5
//����ʹ��Fn+ctrl+F5
//Fn ��һ���������ܼ�
//Fn+F1 - F1ԭ������˼
//Fn+F2 - F2ԭ������˼
//...

//��ʽ��д�� - ���Ƽ�
//void main()
//{
//		...
//}

//void�Ǳ�ʾmain���������ܲ���
//int main(void)
//{
//	...
//	return 0;
//}

//��ʵmain����Ҳ�ǿ����в�����������������������
//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}

//ע��ѡ���У�ctrl+k+c
//ȡ��ע�ͣ�ctrl+k+u


//����ռλ��
//int main()
//{
//	//%d - ����
//	//%c  - �ַ�
//	//%f  - ��������С����
//
//	printf("%d\n", 100);
//	printf("%c\n", 'q');
//	printf("%f\n", 3.14f); //3.140000
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	//int char;//err
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 'A');  //A
//	printf("%c\n", 65);  //A
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//����32~127����ֵ
//	for (i=32; i<=127; i++)
//	{
//		printf("%c ", i);//��i�е���ֵ����ASCII��ֵ��ֱ�Ӵ�ӡ��Ӧ���ַ�
//	}
//
//	return 0;
//}


//�����ַ�����\0
//%s - �ַ���
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//	printf("%s\n", "hello");
//
//	return 0;
//}

//�ַ�������һ��������־�У�\0
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr1); //��ӡabc
//	printf("%s\n", arr2); //��ӡ����
//	printf("abc\0def");  //��ӡabc
//
//	return 0;
//}


//�ġ�ת���ַ�
//\n \0 ��ת���ַ�
//int main()
//{
//	// \n
//	// \0
//
//	return 0;
//}

//int main()
//{
//	printf("abc\ndef");
//
//	return 0;
//}