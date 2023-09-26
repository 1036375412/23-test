#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二分查找
int a(int n, int arr[], int t)
{
	/*int k;
	for (k = 0; k < 10; k++)
		printf("%d ", arr[k]);*/
	int left = 0;
	int right = t - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int key = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = a(key, arr, sz);
	if (-1 == ret )
	{
		printf("没找到\n");
	}
	else
	{
		printf("下标是：%d\n", ret);
	}
	return 0;
}