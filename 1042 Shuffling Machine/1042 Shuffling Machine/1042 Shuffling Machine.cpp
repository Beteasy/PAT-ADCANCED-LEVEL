// 1042 Shuffling Machine.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//定义符号数组
	char symbol[] = { 'S', 'H', 'C', 'D', 'J' };
	//original为初始数组，order为输入的顺序数组,temp为original按照order修改后的暂存数组
	//题目要求从1-54，所以还是要声明55
	int original[55], order[55], temp[55];
	//洗牌次数
	int N , t;
	
	scanf_s("%d", &N);
	//初始化original中的元素，从1到54
	for (int i = 1; i <= 54; i++)
	{
		original[i] = i;
	}

	//读取顺序数组
	for (int i = 1; i <= 54; i++)
	{
		scanf_s("%d", &order[i]);
	}

	//交换顺序
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= 54; j++)
		{
			//original按照order放入temp
			temp[order[j]] = original[j];
		}
		//将变换完后的temp中的数据放入original中，未下一次变换做准备，然后最后循环完次数后里面就是最终结果
		for (int k = 1; k <= 54; k++)
		{
			original[k] = temp[k];
		}
	}

	for (int i = 1; i <= 54; i++)
	{
		if (i == 1)
		{
			printf("%c%d", symbol[(original[i]-1) / 13], ((original[i] - 1) % 13 + 1));
		}
		else
		{
			printf(" %c%d", symbol[(original[i] - 1) / 13], ((original[i] - 1) % 13 + 1));
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
