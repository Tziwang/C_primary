#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ҵ���⣺
//1. ���������ʼ�����Բ�ֱ��ָ����С������ݳ�ʼ����������ȷ����С
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int arr1[10] = { 1,2,3 };
//
//	return 0;
//}

//2. ����Ĵ�С�����ǳ���������������
// ����Ĵ�С���ñ���ָ���ģ�����һ�������⣡
// C99��׼֮ǰ����Ĵ�С�����Ǳ�����
// ��C99��׼�������˱䳤����ĸ����������Ĵ�С�Ǳ����������������鲻��ֱ�ӳ�ʼ��
// �еı��������ԣ�gcc������֧��C99�еı䳤���飩���������
//int main()
//{
//	int n = 10;
//	char arr[n];  //������������C99֮����ȷ
//  char arr1[n] = {0};  //��ʼ���ˣ����б�����������
//	return 0;
//}

//3. ȡ�ϴ�ֵ
//int MAX(int x, int y)
//{
//    /*if (x > y)
//        return x;
//    else
//        return y;*/
//	int z = (x > y ? x : y);
//	return z;
//	//return(x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int m = MAX(a, b);
//		printf("%d\n", m);
//	}
//
//	return 0;
//}

//4. KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε�����
//��Ŀ�ж�����������
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    //while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        //�ж��Ƿ�������
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            //�ж�����������
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b && a != c || a == c && a != b || b == c && b != a)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}

//5. �������ֵ
//#include<limits.h>
//INT_MAX; //20�ڶ�
//int main()
//{
//
//	return 0;
//}


//ʮ�ġ�ָ��
//��������������Ҫ���ص��ռ䣬ҲҪ�����ڴ�ռ�ʹ��
//int main()
//{
//	int a = 15;  //��Ȼaռ���ĸ��ֽڣ�һ���ֽ�8λ��һ��32λ��
//	//���ǵ�����&a��ʱ���õ�����4���ֽ��е�һ���ֽڵĵ�ַ
//	//printf("%p\n", &a); //%p -- ר��������ӡ��ַ�ģ�����16���Ƶ���ʽ��ʾ��ַ��
//	//00000000 00000000 00000000 0000000F�����ƣ��ڴ洰��00 00 00 0F��ʮ�����ƣ�
//	int* pa = &a; //pa���������a�ĵ�ַ�ģ���һ��ָ���������˼�Ǵ��ָ��ı���
//	//*����˵��pa��ָ�����
//	//int -- paָ����int���ͣ�a���ı���
//	*pa  = 30; //�����ò�������*pa����a
//	printf("%d\n", a); //��ӡ30
//
//	return 0;
//}

//��� = ��ַ = ָ��
//ָ����� = ��ŵ�ַ�ı���
//��ͷ����˵��ָ�룬�����϶���ָ�����

//��һ����
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	//double -- pdָ����int���ͣ�d���ı���
//	*pd = 0;
//	printf("%lf\n", d);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%zd\n", sizeof(p)); //8 = 64/8λ = 8�ֽ�
//	printf("%zd\n", sizeof(int*)); //size_t
//
//	return 0;
//}

//����ṹ�壺�ṹ���ʲ�����
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//void printf1(struct S t)
//{
//	printf("%s %d %f\n", t.name, t.age, t.score);
//}
//void printf2(struct S* ps)
//{
//	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score); //�ṹ�����.��Ա
//	printf("%s %d %f\n", ps->name, ps->age, ps->score); //�ṹָ��->��Ա
//}
//int main()
//{
//	struct S s = { "zhangsan",20,55.5f };
//	printf1(s);
//	printf2(&s);
//	return 0;
//}