#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//������Ϊ��������

//�ݹ�

void bubble_sort(int arr[],int sz)//�β�arr������ָ��
{
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
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

//ð������
//�������ڵ�Ԫ�ؽ��бȽϣ����ҿ�����Ҫ����

int main()
{
	int arr[] = { 9,5,3,4,0,2,1,6,8,7 };

	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�ظ���
	//����Ϊ����
	bubble_sort(arr,sz);//���鴫�δ�����Ԫ�صĵ�ַ

	return 0;
}

//����������������Ԫ�صĵ�ַ
//��������������
//1.sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С ��λ���ֽ�
//2.&������ - ��������ʾ�������� - ȡ��������������ĵ�ַ

//int main()
//{
//	int arr[] = { 0 };
//	int sz = sizeof(arr);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//
//	printf("%p\n", &arr);// &arrȡ����������ĵ�ַ(��������Ԫ�ص�ַ��ͬ),����1Ϊ��40���ֽ�
//	
//	return 0;
//}