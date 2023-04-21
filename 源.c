#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//
//	} while (i <= 10);
//	return 0;
//}//do while 循环示例
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//
//	} while (i<=10);
//
//	return 0;
//}
// 
// 
//n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
	//1!+2!+3! =1+2+6 =9
	//for (n = 1; n <= 3; n++)
	//{
	//	ret = 1;//计算n的阶乘之前，把ret初始为1
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret *= i;
	//	}
	//	sum += ret;
	//}
//	//改为精简版
//	/*for (n =1;n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}*/
//

//有序数组中查找x
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序数组中查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}

//
//	return 0;
//}

//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to she wai!!!!!!";
//	char arr2[] = "########################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//
//	
//
//
//int main()
//{
//	int i = 0;
//	//假设正确密码是字符串 "123456"
//	char password[20] = { 0 };
//	for (i = 0;i<3;i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456") //err - 两个字符串比较，不能使用==，应该使用strcmp
//		if (strcmp(password,"123456") == 0)
//		{
//
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}


//#include<stdlib.h>
//#include<time.h>
//
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("*******  1. play      *********\n");
//	printf("*******  0. exit      *********\n");
//
//}
//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//	//rand函数返回了一个0-32767之间的数字
//	//时间-时间戳
//
//
//	int ret = rand() % 100 + 1;//100的余数是0-99，然后加1，范围就是1-100
//	//printf("%d\n",ret);
//
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}