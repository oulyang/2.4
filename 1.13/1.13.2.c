#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //4  1
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1  6
//	return 0;
//}


//实现一个函数可以左旋字符串中k个字符。例如ABCD左旋一个字符得到BCDA,左旋两个得到CDAB

//void left_move(char arr[],int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}


//三部翻转  ab cd->ba cd->ba dc->cdab

//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
//}
//
////int is_left_move(char* s1, char* s2)
////{
////	int len = strlen(s1);
////	int i = 0;
////	for (i = 0; i < len; i++)
////	{
////		left_move(s1, 1);
////		int t=strcmp(s1, s2);
////		if (t == 0)
////			return 1;
////	}
////	return 0;
////}
//
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int len2 = strlen(str2);
//	if (len != len2)
//		return 0;
//	//在str1字符串中追加一个str1，不能用strcat，应用strncat
//	strncat(str1, str1, 6);
//	//判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr-找子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
////int main()
////{
////	char arr[] = "abcdef";
////	left_move(arr, 2);
////	printf("%s\n", arr);
////	return 0;
////}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=is_left_move(arr1,arr2);
//	if (ret == 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}


//int findnum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//			//printf("%d,%d", x, y);
//			return 1;
//	}
//	return 0;
//}

//int findnum(int arr[3][3], int k, int*px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//				//printf("%d,%d", x, y);
//				return 1;
//		}
//	}
//	*px = -1;
//	*py = -3;
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6}, {7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = findnum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}