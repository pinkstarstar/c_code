#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>

//strlen的三种方法
//1. 计数器的方法
//2. 递归
//3. 指针-指针

#include<stdio.h>
#include<windows.h>
//2. 递归
int mystrlen(char *str)
{
	if ((*str) == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + mystrlen(++str);
	}
}

int main()
{
	char *p = "abcdefg";
	printf("%d\n", mystrlen(p));
	return 0;
}
//1. 计数器的方法
//int my_strlen(const char* p)
//{
//	int count = 0;
//	assert(p != NULL);
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	/*int len = my_strlen("abcdef");
//	printf("%d\n", len);*/
//	if (strlen("abc") - strlen("abcd") > 0)
//		printf("haha\n");
//	else
//		printf("hehe\n");
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest!=NULL);
//	assert(src != NULL);
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcd";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[]= "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[] = "xyzw";
//	strncpy(arr1, arr2, 4);
//	return 0
//}

//int main()
//{
//	char arr1[30] = "abcdefg\0hhhhhhhhhhh";
//	char arr2[] = "xyzw";
//	strncat(arr1, arr2, 4);
//	return 0;
//}
