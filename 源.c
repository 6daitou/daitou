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
//}//do while ѭ��ʾ��
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
//n�Ľ׳�
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
	//	ret = 1;//����n�Ľ׳�֮ǰ����ret��ʼΪ1
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret *= i;
	//	}
	//	sum += ret;
	//}
//	//��Ϊ�����
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

//���������в���x
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr������������в���k(7)��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
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
//		Sleep(1000);//˯��1��
//		system("cls");//�����Ļ
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
//	//������ȷ�������ַ��� "123456"
//	char password[20] = { 0 };
//	for (i = 0;i<3;i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "123456") //err - �����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
//		if (strcmp(password,"123456") == 0)
//		{
//
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
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
//	//��������Ϸ��ʵ��
//	//1.���������
//	//rand����������һ��0-32767֮�������
//	//ʱ��-ʱ���
//
//
//	int ret = rand() % 100 + 1;//100��������0-99��Ȼ���1����Χ����1-100
//	//printf("%d\n",ret);
//
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}