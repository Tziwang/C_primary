#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ġ�ת���ַ�������
//int main()
//{
//	//��ӡ(are you ok??)
//	printf("(are you ok\?\?)\n");
//	//�ڹ�ȥ��һЩ�������ϣ�֧������ĸ�ʣ����ӡ��(are you ok]
//	//??)  --- ]
//	//??(
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", '\''); //��ӡ'
//
//	printf("%s\n", "abcdef");
//	printf("%s\n", "a");
//	printf("%s\n", "\""); //��ӡ"
//
//  printf("c:\test\test.c"); //tab������ӡc:      est     est.c
//	printf("c:\\test\\test.c"); //��ӡ\
//
//	printf("\a"); //����
//	printf("abcdefghi\n"); //����
//	printf("abcde\bfghi\n");  //�˸񣬴�ӡacdfghi��e�����ǵ���
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	printf("%c\n", '\130'); //�˽���
//	printf("%c\n", '\x48'); //ʮ������
//
//	//strlen�����ַ������ȵĺ���- ͳ�Ƶ����ַ�����\0֮ǰ���ַ��ĸ�����������\0
//	//Ҫ����ͷ�ļ�string.h
//	printf("%zd\n", strlen("abc"));//abc\0����ӡ3
//	printf("%zd\n", strlen("c:\test\130\test.c"));//��ӡ13
//
//	return 0;
//}


//�塢���
//C������һ��һ������乹�ɵ�
//ʲô����䣿

//int main()
//{
//	;//�����
//	3 + 4;//���ʽ���
//	int a = 10;
//	int b = 20;
//	a + b;//���ʽ���
//	printf("hehe\n");//�����������
//
//	return 0;
//}


//����ע��
//C���Է���ע���ǲ���Ƕ��ע�͵�

//int main()
//{
//	//�������ͱ���a������ֵ10
//	int a = 10;/* �������ͱ���a������ֵ10 */
//	/*
//	int b = 0;
//	int c = 0;
//	*/
//	return 0;
//}

//int main()
//{
//	int a/*hehe*/b;
//
//	return 0;
//}

//int main()
//{
//	/*char ch = 'w';*/
//	return 0;
//}

//int main()
//{
//	// C������0��ʾ�٣���0��ʾ��
//	if (2 == 1+1) //Ϊ��
//		printf("hehe\n");
//
//	return 0;
//}



//��2����C�����������ͺͱ���
// һ����������
//bool����
//#include <stdbool.h>
//int main()
//{
//	//_Bool flag = false;
//	bool flag = true;
//	if (flag)
//		printf("hehe\n");
//
//	return 0;
//}

//sizeof ����Ľ����������size_t, size_t��һ���޷��ŵ���������������ֵ�ڴ�ӡ��ʱ��ʹ��%zd
//int   --- %d
//char  --- %c
//�ַ��� -- %s

//int main()
//{
//	printf("%zd\n", sizeof(char)); //1
//	printf("%zd\n", sizeof(_Bool)); //1
//	printf("%zd\n", sizeof(short)); //2
//	printf("%zd\n", sizeof(int)); //4
//	printf("%zd\n", sizeof(long)); //4
//	printf("%zd\n", sizeof(long long)); //8
//	printf("%zd\n", sizeof(float));//4
//	printf("%zd\n", sizeof(double)); //8
//	printf("%zd\n", sizeof(long double)); //8
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	printf("%zd\n", sizeof a); //a�Ǳ��ʽ�����ſ�ʡ�ԣ����ʹ�ӡ4
//	printf("%zd\n", sizeof(a)); //��ӡ4
//
//	printf("%zd\n", sizeof(int)); //���͵����Ų���ʡ�ԣ���ӡ4
//	printf("%zd\n", sizeof(3.14));//double 8
//	printf("%zd\n", sizeof(3.14f));//float 4
//
//	return 0;
//}

//int main()
//{
//    short s = 2;//s��ռ2���ֽ�
//    int b = 10;
//	  //sizeof�ǲ����м����
//    printf("%zd\n", sizeof(s = b + 1)); //��ӡ2
//    printf("s = %d\n", s); //��ӡs = 2
//
//    return 0;
//}


//��������
//int main()
//{
//	//���� ������
//	int    age;
//	char ch;
//	float f;
//	double weight;
//	_Bool num;
//
//	return 0;
//}

//int main()
//{
//	int age = 0;//��ʼ�� - �ڱ���������ͬʱ����һ��ֵ�г�ʼ��
//	char ch = 'q';
//
//	printf("%d\n", age);
//
//	return 0;
//}

//int main()
//{
//	int a;//����
//	a = 1;
//	printf("%d\n", a);
//
//	a = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//int b = 100;//ȫ�ֱ���
//int main()
//{
//	{
//		int a = 10;//�ֲ���������������Ч
//		printf("%d\n", a);
//	}
//	printf("%d\n", a); //��ӡ����
//
//	return 0;
//}

//int b = 100;//ȫ�ֱ���
//int main()
//{
//	{
//		int a = 10;//�ֲ�����
//		printf("%d\n", b); //��ӡ100
//	}
//	printf("%d\n", b); //��ӡ100
//
//	return 0;
//}

//int a = 100;//ȫ�ֱ���
//int main()
//{
//	{
//		int a = 10;//�ֲ�����
//		printf("%d\n", a);//10���ֲ���������
//	}
//
//	return 0;
//}