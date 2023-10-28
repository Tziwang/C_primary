#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//三、操作符
//int main()
//{
//	int a = 2 + 10;
//	int b = 2 - 10;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	//printf("%d\n", 2+10);
//
//	return 0;
//}

//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);
//
//	return 0;
//}

//%f   -- float
//%lf  -- double

//int main()
//{
//	printf("%d\n", 8 / 2); //4
//	printf("%d\n", 7 / 2); //3
//	printf("%d\n", 7 % 2); //1
//
//	printf("%lf\n", 7.0 / 2.0); //3.500000
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//初始化
//	int b = 0;//初始化
//
//	a = 100;//赋值
//
//	b = a = a + 3;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;//初始化
//	int b = 0;//初始化
//	
//	a = a + 3;
//	a += 3;
//
//	b = b - 2;
//	b -= 2;
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = ++a;//前置++
//	//先+1，后使用
//	//a=a+1, b=a;
//	printf("a=%d b=%d\n", a, b);//3 3
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a++;//后置++
//	//先使用，后+1
//	//b=a, a=a+1
//	printf("a=%d b=%d\n", a, b);//3 2
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = --a;//前置--， 先-1，再使用
//	//a=a-1, b=a
//
//	int b = a--;//后置--， 先使用，后-1
//	//b=a, a=a-1
//	printf("a=%d b=%d\n", a, b);// 9 10 
//
//	return 0;
//}

//int main()
//{
//	int a = -+10;
//	printf("a=%d\n", a); //a=-10
//	int b = -a;//- -10
//	printf("b=%d\n", b); //b=10
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	int a = (int)3.14; //类型转换
//	printf("%d\n", a); //3
//	return 0;
//}


//四、printf和scanf
//int main()
//{
//	//printf("hello C语言\n");
//	//printf("hello\n");
//	//printf("world\n");
//
//	//printf("hello\nworld");
//
//	printf("there are 3 apples\n");
//	printf("there are %d apples\n", 3);
//	printf("there are %d apples\n", 5);
//	printf("there are %d apples\n", 15);
//
//	printf("%s will come tonight\n", "zhangsan");
//	printf("%s will come tonight\n", "lisi");
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a=%d b=%d\n", a, b);
//	//a=10 b=20
//	return 0;
//}

//int main()
//{
//	printf("%-d\n", 123); //123
//	printf("%-5d\n", 123); //123  
//	printf("%8d", 123);
//	printf("%d", 111);//123     111
//
//	return 0;
//}

//int main()
//{
//    printf("%12f\n", 123.45); //  123.450000
//    printf("%+d\n", 12); //+12
//    printf("%+d\n", -12); //-12
//
//    return 0;
//}

//int main()
//{
//    printf("Number is %.2f\n", 0.5);//0.50
//    printf("Number is %f\n", 0.5);//0.50
//    printf("Number is %6.2f\n", 0.5);//  0.50
//    printf("Number is %*.*f\n", 6, 2, 0.5);//  0.50
//
//    return 0;
//}

//int main()
//{
//	  //打印字符的最大长度
//    printf("%s\n", "hello world");
//    printf("%.5s\n", "hello world"); //hello
//    printf("%.7s\n", "hello world"); //hello w
//    return 0;
//}

//int main()
//{
//	int score = 0;//成绩
//	printf("请输入成绩:"); 
//	//输入
//	scanf("%d", &score);//& - 取地址操作符
//	printf("score = %d\n", score);
//
//	return 0;
//}
//

//int main()
//{
//	char arr[5] = {0};
//	scanf("%s", arr); //字符串不需要&
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0;
//	double d = 0.0;
//	scanf("%d%d%f%lf", &a, &b, &f, &d); //输入时中间必须有空格或者换行，逗号不行
//	printf("%d %d %f %lf\n", a, b, f, d);
//
//	return 0;
//}

//用户输入 "    -13.45e12# 0"
//int main()
//{
//    int x;
//    float y;
//
//    scanf("%d%f", &x, &y);
//    printf("%d\n", x); //提取小数点前，-13
//    printf("%f\n", y); //提取小数点后，449999994880.000000
//
//    return 0;
//}

//scanf的返回值是成功读取的变量个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int r = scanf("%d %d %d", &a, &b, &c);
//	printf("r = %d\n", r);
//
//	return 0;
//}


//五、占位符
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d-%d-%d", &a, &b, &c); //保持格式一致
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	//scanf("%c", &ch); //%c不会自动忽略空白字符
//	scanf(" %c", &ch);  // %c表示忽略空白字符
//	printf("%c------", ch);
//
//	char arr[20] = { 0 };
//	scanf("%19s", arr);  //读取字符的最大长度
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    //*为赋值忽略符，加在占位符的%后面，该占位符则不会返回
//    scanf("%d%*c%d%*c%d", &year, &month, &day);//2023-10-12   2023/10/12
//
//    printf("%d %d %d\n", year, month, day);
//    return 0;
//}



//第3讲：分支和循环（上）
//一、if语句
//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("%d 是奇数\n", num);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("%d 是奇数\n", num);
//	else
//		printf("%d 是偶数\n", num);
//
//	return 0;
//}

//int main()
//{
//	int age = 0;//年龄
//	//输入
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 0;//年龄
//	//输入
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("谈恋爱\n");
//	}
//	else
//  //默认if和else语句都只控制一条语句，所以要加{ }
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//
//	return 0;
//}