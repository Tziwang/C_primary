#define _CRT_SECURE_NO_WARNINGS 1
//΢��ı�������Ϊscanf��������ȫ������ʹ��scanf_s
//����scanf_s������vs�ṩ�ģ�ֻ��vs�ı�������ʶ�������ı���������ʶ
//����취����Դ�ļ��ĵ�һ�м���#define _CRT_SECURE_NO_WARNINGS 1

//һ����һ��C���Գ���
//#include<stdio.h>
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}

//����һ���Ǵ�main������ʼд
//C������main�����ǳ�������
//�����Ǵ�main�����ĵ�һ�п�ʼִ�е�
//main��������ֻ��һ��
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");//����F10������Crl+F5
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	return 0;
//}
//int main() //��ʾint main()��������
//{
//	printf("hehe\n");
//	return 0;
//}
//
//void main()--̫���ϣ����Ƽ�
//int main(void)--��ʾmain�����������κβ���
//int main(int argc, char* argv[])--�Ժ����о�
// 
//printf�ǿ⺯��--C���Ա������ṩ��һ���ֳɵĺ���
//ֱ�ӿ���ʹ�ã�������ʹ��֮ǰҪ����ͷ�ļ�#include<stdio.h>
//���ܾ�������Ļ�ϴ�ӡ����
//"hehe"--��һ���ַ���
//˫�����������ľ����ַ���


//������������
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));		 //1�ֽ� = 8����λ
//	printf("%d\n", sizeof(short));		 //2�ֽ�
//	printf("%d\n", sizeof(int));		 //4�ֽ�
//	printf("%d\n", sizeof(long));		 //4�ֽ�
//	printf("%d\n", sizeof(long long));	 //8�ֽ�
//	printf("%d\n", sizeof(float));		 //4�ֽ�
//	printf("%d\n", sizeof(double));		 //8�ֽ�
//	return 0;
//}
//%d - ��10���Ƶ���ʽ��ӡһ������
//�����ʶ����Ƕ�����
//������еĵ�λ��bit��Byte��KB��MB��GB....
//1Byte=8bit��1KB=1024Byte��1MB=1024KB��1GB=1024MB
//�ֽ����� ByteDance
//sizeof(long)>=sizeof(int)


//��������/����
//�����������ֵ
//�����������仯��ֵ

//3.1 ��������ķ���
//#include<stdio.h>
//int main()
//{
	//����	  ������;
	//����	  ������ = ��ʼֵ;

	//int age1;
	//int age2 = 20;

	//float weight = 55.5f;
	//55.5 С��ֱ��д������������Ĭ����double����
	//55.5f ���ʱ�����float����
	//int num = 10;
	//printf("%d\n", num);
	//num = 20;
	//printf("%d\n", num);
	//return 0;
//}
//�������������ֿ�ͷ������ʹ�ùؼ��֣�Ҫ���������


//3.2 �����ķ���
//ȫ�ֱ����������������
//�ֲ������������������

//#include<stdio.h>
//ԭ���ϱ�����������Ҫ��ͻ
//��ȫ�ֱ����;ֲ��������ֳ�ͻ������¾ֲ�����
//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//3.3 ������ʹ��
//дһ�����������������ĺ�
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2); //10��20
	//��������������ֵ
	//&num1 - ȡ��num1�ĵ�ַ
	//& ȡ��ַ������
//	sum = num1 + num2;
//	printf("%d\n",sum);
//	return 0;
//}