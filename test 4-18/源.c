#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久的终止循环
//	//在while循环中，continue的作用是跳过本次循环continue后边的代码
//	//直接去判断部分，看是否进行下一次循环
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//	}
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//输入一个整数，x可以被5整除就输出YES，否则输出NO
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//
//	return 0;
//
//
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d\n", &a, &b);
//	int m = MAX(a, b);
//	printf("%d\n", m);
//
//
//	return 0;
//}
//结构体创建新类型
//创建一个学生
struct stu
{
	char name[20];//成员变量
	int age;
	double score;
};
//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];

};
int main()
{
	struct stu s = { "张三",20,85.5 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量，成员变量

	struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//三种不同形式的结构体输出形式，但结果相同

	return 0;
}