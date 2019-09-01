// 1073 Scientific Notation.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, M;
	int exp, posE;
	cin >> str;
	posE = str.find("E");
	M = str.substr(1, posE-1);
	exp = stoi(str.substr(posE + 1));
	if (str[0] == '-')
	{
		printf("-");
	}
	if (exp < 0)
	{ 
		printf("0.");
		for (int i = 0; i < abs(exp) - 1; i++)
		{
			printf("0");
		}
		for (int i = 0; i < M.length(); i++)
		{
			if (M[i] != '.')
			{
				printf("%c", M[i]);
			}
			
		}
	}
	else
	{
		
		/*for (int i = 0; i < M.length(); i++)
		{
			if (M[i] != '.')
			{
				printf("%c", M[i]);
			}
		}
		for (int i = 0; i < exp - (M.length()-2); i++)
		{
			printf("0");
		}*/
		printf("%c", M[0]);
		int cnt, j;
		for (j = 2, cnt = 0; j < M.length() && cnt < exp; j++, cnt++)
		{
			printf("%c", M[j]);
		}
		//指数比尾数的位数多
		if (j == M.length())
		{
			for (int k = 0; k < exp - cnt; k++)
			{
				printf("0");
			}
		}
		else
		{
			//指数比尾数的位数少
			printf(".");
			for (int k = j; k < M.length(); k++)
			{
				printf("%c", M[k);
			}
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
