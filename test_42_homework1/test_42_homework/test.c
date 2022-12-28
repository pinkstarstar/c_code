#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
//²»¶®
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//	return 0;
//}

//void reverse(char ch[])
//{
//	assert(ch);
//	int len = strlen(ch);
//	char* left = ch;
//	char* right = ch + (len - 1);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char ch[256] = { 0 };
//	gets(ch);
//	reverse(ch);
//	printf("%s\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
//	printf("%p\n", &a[0][0]);
//	printf("%d\n", *(a[0]+1));
//	printf("%p\n", a);
//	printf("%p\n", a+1);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	unsigned long arr[] = { 6, 7, 8, 9, 10 };
//	unsigned long *p;
//	p = arr;
//	*(p + 3) += 3;
//	printf("%d,%d\n", *p, *(p + 3));
//	return 0;
//}
