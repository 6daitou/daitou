#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void menu()
{
	printf("*******************************\n");
	printf("*******  1. play      *********\n");
	printf("*******  0. exit      *********\n");

}
void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0-32767֮�������
	//ʱ��-ʱ���


	int ret = rand() % 100 + 1;//100��������0-99��Ȼ���1����Χ����1-100
	//printf("%d\n",ret);

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}