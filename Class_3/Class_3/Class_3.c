#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//ע��㣺������������main��������ֻ��һ��

//��ҵ���⣺
// www.cplusplus.com
// BC41
//scanf�������ص��Ƕ�ȡ�����ݵĸ���
//���scanf������ȡʧ�ܻ᷵��EOF
//EOF = end of file �ļ�������־
//#define EOF -1

#include<stdio.h>
//int main()
//{
//	//int IQ = 0;
//	//int n = scanf("%d", &IQ);  //����123
//	//printf("%d\n", n);  //���1
//
//	int a = 0;
//	int b = 0;
//	int c = scanf("%d %d", &a, &b);  //����1 234
//	printf("%d\n", c);  //���2
//
//	return 0;
//}

//��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�
//����һ��������ʾһ���˵����̡�������ڵ���140�����������һ����ţ������Genius����
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
//ctrl+z���Զ�ȡһ��EOF�ó���ֹͣ��������Ҫ������

//  / = ȡ��
//  % = ȡ��

//�ˡ�����
//int Add(int x, int y)  //x��y����ʽ����
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);  //a��b��ʵ�ʲ���
//	printf("%d\n", c);
//
//	return 0;
//}


//�š����� -- ���Ա���һ����ͬ���͵���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //��������
//	//     �±� =   0,1,2,3,4,5,6,7,8,9
//	//char ch[8]; //�ַ�����
//
//	printf("%d\n", arr[5]); //��ӡ�±�Ϊ5����
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);  //������ȫ����ӡ����
//		i++;
//	}
//		
//	return 0;
//}


//ʮ��������
//10.1 ������������+ - * / %
//int main()
//{
//	int a = 7 / 2; // / -- ȡ����
//	printf("%d\n", a);
//	 
//	printf("%lf\n", 7 / 2.0);
//	printf("%lf\n", 7.0 / 2);
//	printf("%lf\n", 7.0 / 2.0);
//
//	// % -- ȡ���������߱��붼������
//	// 7 % 2.0 �ǲ��Ե�
//
//	return 0;
//}

//10.2 ��λ���������� ��
//10.3 λ��������& ^ |

//10.4 ��ֵ��������=   +=   -=   *=   /=   &=   ^=   |=    ��=  ��=
//int main()
//{
//	int a = 0;
//	a = 10; //��ֵ
//
//	a = a + 5;
//	a += 5; //���ϸ�ֵ
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

//10.5 ��Ŀ��������!  -  +  &  sizeof  ~  ++  --  *  �����ͣ�
//��Ŀ��������ֻ��һ��������
//˫Ŀ��������������������
// 1. !
//C��������α�ʾ����أ�
//0Ϊ�٣���0Ϊ��
//-1����
//int main()
//{
//	int a = 1;
//	if (a) //aΪ�����if
//	{
//		printf("hehe\n");
//	}
//	if (!a) //aΪ�ٽ���if
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
//	if (a) //aΪ�����if
//	{
//		printf("hehe\n");
//	}
//	if (!a) //aΪ�ٽ���if
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
//	//sizeof��һ�������������Ǻ���
//	//sizeof������Ǳ���ռ���ڴ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a); //����д��������
//	//sizeof��������ʡ��˵�������Ǻ���
//	//printf("%d\n", sizeof int); //����ʾ��
//	
//	return 0;
//}

//4. ++
//int main()
//{
//	int a = 1;
//	int b = ++a; //ǰ��++����++����ʹ��
//	/*a = a + 1;
//	b = a;*/
//	printf("a=%d b=%d\n", a, b); //��ӡa=2 b=2
//
//	int c = 1;
//	int d = c++; //����++����ʹ�ã���++
//	/*d = c;
//	c = c + 1;*/
//	printf("c=%d d=%d\n", c, d); //��ӡc=2 d=1
//
//	return 0;
//}

//5. --
//int main()
//{
//	int a = 1;
//	int b = --a; //ǰ��--����--����ʹ��
//	/*a = a - 1;
//	b = a;*/
//	printf("a=%d b=%d\n", a, b); //��ӡa=0 b=0
//
//	int c = 1;
//	int d = c--; //����--����ʹ�ã���--
//	/*d = c;
//	c = c - 1;*/
//	printf("c=%d d=%d\n", c, d); //��ӡc=0 d=1
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("%d\n", a--); //��ӡ5��������ټ�
//	printf("%d\n", a); //��ӡ4
//
//	int b = 5;
//	printf("%d\n", --b); //��ӡ4���ȼ������
//	printf("%d\n", b); //��ӡ4
//
//	return 0;
//}

//6. �����ͣ�
//int main()
//{
//	//ǿ������ת��������
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}