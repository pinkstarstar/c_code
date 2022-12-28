#define _CRT_SECURE_NO_WARNINGS 1

//1-100000的自幂数
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
      //1.判断是几位数
		int n = 1;
		int tmp = i;
		while (tmp /= 10)
		{
			n++;
		}
	  //2.算出这个数的对应位置的对位幂，算出总和
		int sum = 0;

	  //3.比较是否与原数相等，就可判断结果了

	}
	return 0;
}






















