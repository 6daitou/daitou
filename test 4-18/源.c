#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	//��whileѭ���У�break�������õ���ֹѭ��
//	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ���
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//����һ��������x���Ա�5���������YES���������NO
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
//�ṹ�崴��������
//����һ��ѧ��
struct stu
{
	char name[20];//��Ա����
	int age;
	double score;
};
//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];

};
int main()
{
	struct stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ���������Ա����

	struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//���ֲ�ͬ��ʽ�Ľṹ�������ʽ���������ͬ

	return 0;
}