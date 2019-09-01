// shortestDistance.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;
const int maxN = 100001;
int D[maxN];

int main()
{
	//方法一
	//D[i]记录从第i个出口到i+1个出口的距离
	/*int N, sum = 0, M, disForward , disBackward;
	int start, end, temp;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &D[i]);
		sum += D[i];
	}
	scanf_s("%d", &M);
	for (int i = 0; i < M; i++)
	{
		disForward = 0;
		c
		for (int j = start-1; j < end-1; j++)
		{
			disForward += D[j];
		}
		disBackward = sum - disForward;
		if (disForward < disBackward)
		{
			printf("%d\n", disForward);
		}
		else
		{
			printf("%d\n", disBackward);
		}
	}*/

	//方法二
	//D[i]记录从第一个出口到i个出口的距离
	int N, sum = 0, M, disForward, disBackward, d;
	int start, end, temp;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &d);
		sum += d;
		D[i+1] = sum;
	}
	scanf_s("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf_s("%d %d", &start, &end);
		if (start > end)
		{
			temp = start;
			start = end;
			end = temp;
		}
		disForward = D[end - 1] - D[start - 1];
		disBackward = sum - disForward;

		if (disForward < disBackward)
		{
			printf("%d\n", disForward);
		}
		else
		{
			printf("%d\n", disBackward);
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
