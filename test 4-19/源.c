#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//��Ϊk��ֵΪ0������������Ϊ0
//		k++;
//	{
//		printf("%d %d\n", i, k);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//��ʼ�����жϣ�����
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
//	printf("����������:>");
//	scanf("%s", password);//123456
//	printf("��ȷ������(Y/N) :>");
//	//��������
//	getchar();//����\n
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//
//	return 0;
//}
int main()
{
	char password[10] = { 0 };
	printf("����������:>");
	scanf("%s", password);//123456 abcdef
	printf("��ȷ������(Y/N):>");
	//���������Ķ���ַ�
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");

	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}