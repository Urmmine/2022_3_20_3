#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//数组作为函数参数

//递归

void bubble_sort(int arr[],int sz)//形参arr本质是指针
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz -1 -i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//冒泡排序
//两两相邻的元素进行比较，并且可能需要交换

int main()
{
	int arr[] = { 9,5,3,4,0,2,1,6,8,7 };

	int sz = sizeof(arr) / sizeof(arr[0]);//函数体外求元素个数
	//排序为升序
	bubble_sort(arr,sz);//数组传参传递首元素的地址

	return 0;
}

//数组名就是数组首元素的地址
//但是有两个例外
//1.sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小 单位是字节
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址

//int main()
//{
//	int arr[] = { 0 };
//	int sz = sizeof(arr);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//
//	printf("%p\n", &arr);// &arr取出的是数组的地址(与数组首元素地址相同),但加1为加40个字节
//	
//	return 0;
//}