#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��֧��䣺if��switch
//if���
//1.����֧
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//		printf("����\n");
//
//	return 0;
//}

//2.˫��֧
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}

//3.���֧
//int main()
//{
//	/*int age = 0;
//	scanf("%d", &age);
//	if(age < 18)
//		printf("����\n");
//	else if(age >= 18 && age < 30) //��else if����if else
//		printf("����\n");
//	else if(age >= 30 && age < 50)
//		printf("����\n");
//	else if(age >= 50 && age < 80)
//		printf("����\n");
//	else
//		printf("������\n");*/
//
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("����\n");
//	else
//	{
//		if (age >= 18 && age < 30) //ע��������if
//			printf("����\n");
//		else if (age >= 30 && age < 50)
//			printf("����\n");
//		else if (age >= 50 && age < 80)
//			printf("����\n");
//		else
//			printf("������\n");
//	}
//
//	return 0;

// ע�⣺if��else���Ĭ�Ϻ���ֻ����һ�����
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//		//printf("����\n");
//		//printf("��Ů����\n"); //����15ֻ��ӡ��Ů����
//		//if���Ĭ�Ϻ���ֻ����һ�����
//		{
//			printf("����\n");
//			printf("��Ů����\n");
//		}
//
//	return 0;
//}
 
//4.����else
//int main()
//{
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//else 
//	//	printf("haha\n"); //����ӡ
//	//return 0;
//	//���������
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n"); //����ӡ
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
//		printf("haha\n"); //��ӡhaha
//	return 0;
//}

//��ϰ
//1.�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//		printf("%d", i);
//
//	return 0;
//}
//2.���1-100
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
//3.���1-100֮�������
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
//����
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

//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("����һ\n");
//	else if (day == 2)
//		printf("���ڶ�\n");
//	else if (day == 3)
//		printf("������\n");
//	else if (day == 4)
//		printf("������\n");
//	else if (day == 5)
//		printf("������\n");
//	else if (day == 6)
//		printf("������\n");
//	else if (day == 7)
//		printf("������\n");
//	else
//		printf("�������\n");
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
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break; //������
//		default:  //�������κεط�
//			printf("�������\n");
//			break; //������
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
//		break; //������
//	default:  //�������κεط�,Ҫ��switch��������
//		printf("�������\n");
//		break; //������
//	}
//
//	return 0;
//}


//ѭ����䣺while��for��do...while
// while
//int main()
//{
//	if (1)
//		printf("hehe\n"); //ֻ��ӡһ��hehe
//	return 0;
//}

 //int main()
//{
//	while (1)
//		printf("hehe\n"); //��ӡ������hehe
//	return 0;
//}
//
//getchar��putchar
//int main()
//{
//	int ch = getchar(); //���һ���ַ���int��cplusplus��վ��Ҫ���
//	printf("%c\n", ch);
//	putchar(ch); //��ӡһ���ַ�
//
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
// //EOF = end of file �ļ�������־ (-1)
// //�ں�����ȡʧ�ܵ�ʱ�򷵻���EOF
// //scanf������ȡ�ɹ������ص��Ƕ�ȡ�������ݵĸ���
// //��ȡʧ�ܷ���EOF
// //getchar��ȡ�ɹ������ַ���ASCII��ֵ
// //��ȡʧ�ܷ���EOF
// //crtl+Z������scanf��getchar����EOF
//	{
//		putchar(ch);  //һֱ��ӡֱ��crtl+Z
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>"); //123456
//	scanf("%s", password);  
//	printf("��ȷ������(Y/N):");
//	char ch = 0;
//	getchar(); //��\n�����
//	ch = getchar();
//	if ('Y' == ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//
//	return 0;
//}
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");  //123456 abc
//	scanf("%s", &password);
//	printf("��ȷ������(Y/N):");
//	char ch = 0;
//	//�������������ʣ�������
//	while (getchar() != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if ('Y' == ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//
//	return 0;
//}