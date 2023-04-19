#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//因为k赋值为0，所以输出结果为0
//		k++;
//	{
//		printf("%d %d\n", i, k);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//初始化；判断；调整
//	{
//		printf("%d ", i);
//
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//	printf("请确认密码(Y/N) :>");
//	//清理缓冲区
//	getchar();//处理\n
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//
//	return 0;
//}
int main()
{
	char password[10] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//123456 abcdef
	printf("请确认密码(Y/N):>");
	//清理缓冲区的多个字符
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");

	}
	else
	{
		printf("确认失败\n");
	}

	return 0;
}