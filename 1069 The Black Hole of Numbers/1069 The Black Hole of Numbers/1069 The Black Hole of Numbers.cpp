// 1069 The Black Hole of Numbers.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>

using namespace std;

void toArray(int n, int array[])
{
	for (int i = 0; i < 4; i++)
	{
		array[i] = n % 10;
		n /= 10;
	}
}

int toNumber(int array[])
{
	int num = 0;
	for (int i = 0; i < 4; i++)
	{
		num = num * 10 + array[i];
	}
	return num;
}

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int n, array[4];
	scanf_s("%d", &n);
	int min, max;
	while (1)
	{
		toArray(n, array);
		sort(array, array + 4);
		min = toNumber(array);
		sort(array, array+4, cmp);
		max = toNumber(array);
		n = max - min;
		printf("%04d - %04d = %04d\n", max, min, n);
		if (n == 6174 || n == 0)
		{
			break;
		}
		
	}
	system("pause");
	return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
