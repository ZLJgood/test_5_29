#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left<right)&&(arr[left] % 2==1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2==0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			right--;
//			left++;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//调整数组使奇数全部都位于偶数前面。
//#include <stdio.h>
//
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[10000];
//    int arr2[10000];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    while (j < n && k < m)
//    {
//        if (arr1[j] < arr2[k])
//        {
//            printf("%d ", arr1[j]);
//            j++;
//        }
//        else
//        {
//            printf("%d ", arr2[k]);
//            k++;
//        }
//    }
//    if (j < n)
//    {
//        for (; j < n; j++)
//        {
//            printf("%d ", arr1[j]);
//        }
//    }
//    else
//    {
//        for (; k < m; k++)
//        {
//            printf("%d ", arr2[k]);
//        }
//    }
//    return 0;
//}
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。

//#include <stdio.h>
//
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[100];
//    int arr2[100];
//    int arr3[100];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    int r = 0;
//    while (j < n && k < m)
//    {
//        if (arr1[j] < arr2[k])
//        {
//            arr3[r++] = arr1[j];
//            j++;
//        }
//        else
//        {
//            arr3[r++] = arr2[k];
//            k++;
//        }
//    }
//    if (j < n)
//    {
//        for (; j < n; j++)
//        {
//            arr3[r++] = arr1[j];
//
//        }
//    }
//    else
//    {
//        for (; k < m; k++)
//        {
//            arr3[r++] = arr2[k];
//        }
//    }
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = 0;
//    int i = 0;
//    while (n)
//    {
//        int w = n % 10;
//        if (0 == w % 2)
//        {
//            w = 0;
//        }
//        else
//        {
//            w = 1;
//        }
//        ret += w * pow(10, i++);
//        n /= 10;
//    }
//
//    printf("%d\n", ret);
//
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//    int n;
//    int a[9];//定义一个数组用于存放每位数字上是奇数还是偶数
//    int count = 0;//定义一个count，用于对位数进行计数
//    int result = 0;
//    scanf("%d", &n);
//    while (n != 0)//从最后一位开始检查每一位上是奇数还是偶数，注意a[0]存放的是最后一位，得出数组后需要从数组最后一位开始计算
//    {
//        int m = n % 10;
//        if (m % 2 == 0)
//            a[count++] = 0;
//        else
//            a[count++] = 1;
//        n = n / 10;
//    }
//    for (int i = count - 1; i >= 0; i--)//从数组最后一位开始计算得出的数，也就是原数的顺序来算
//        result = result * 10 + a[i];
//    printf("%d", result);
//    return 0;
//}

//int main()
//{	
//	int a = 0;
//	int b = 0;
//	for()
//	
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a=%d b=%d\n", a, b);
//	 a = a + b;
//	 b = a - b;
//	 a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int arr[5][6] = { 0 };
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int max = 0;
//	for (a = 0; a < 4; a++)
//	{
//		for (b = 0; b < 6; b++)
//		{
//			scanf("%d ", &arr[a][b]);
//		}
//	}
//	max = arr[0][0];
//	for (a = 0; a < 5; a++)
//	{
//		for (b = 0; b < 6; b++)
//		{
//			if (arr[a][b] > max)
//			{  
//				
//				max = arr[a][b];
//				 c = a;
//				 d = b;
//			}
//		}
//	}
//	printf("%d\n", max);
//	printf("下标为arr[%d][%d]", c, d);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[6] = { 0 };
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 3 == 0) && (i % 5 == 0))
//		{
//			printf("%d ", i);
//			arr[n] = i;
//			n++;
//		}
//	}
//	printf("\n");
//	printf("%d,%d,%d\n", arr[3], arr[4], arr[5]);
//	return 0;
//}
//void nub(int x,int y,int n)
//{
//	for (x = 1; x < 10; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			  n=y * x;
//			printf("%d*%d%=%d ", y , x,n);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0; 
//	int a = 0;
//	int tmp = 0;
//	nub(i, a, tmp);
//	return 0;
//}

float add(float x,float y)
{
	return  x + y;
	
}
int main()
{
	float a = 3.0;
	float b = 5.0;
	float tmp= add(a, b);
	printf("%f", tmp);
}