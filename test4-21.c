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
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回了一个0-32767之间的数字
	//时间-时间戳


	int ret = rand() % 100 + 1;//100的余数是0-99，然后加1，范围就是1-100
	//printf("%d\n",ret);

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);
	return 0;
}