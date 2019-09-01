// 1061 Dating.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2, str3, str4;
	string Day;
	int Hour, Min;
	int j;
	cin >> str1 >> str2 >> str3 >> str4;
	for (int i = 0; i < str1.length() && i < str2.length(); i++)
	{
		if ((str1[i] >= 'A' && str1[i] <= 'G') && str1[i] == str2[i])
		{
			switch (str1[i])
			{
			case 'A':
				Day = "MON";
				break;
			case 'B':
				Day = "TUE";
				break;
			case 'C':
				Day = "WED";
				break;
			case 'D':
				Day = "THU";
				break;
			case 'E':
				Day = "FRI";
				break;
			case 'F':
				Day = "SAT";
				break;
			case 'G':
				Day = "SUN";
				break;
			default:
				break;
			}
			//找到日期就可以跳出循环，然后下一个循环接着找小时
			j = i + 1;
			break;
		}
	}
	for (; j < str1.length() && j < str2.length(); j++)
	{
		if ((str1[j] >= 'A' && str1[j] <= 'Z' || isdigit(str1[j])) && str1[j] == str2[j])
		{
			if (isdigit(str1[j]))
			{
				//特别注意，这里不能用int去强制转换，不然会出错，只能用-‘0’
				Hour = str1[j]-'0';
			}
			else
			{
				Hour = 10 + (str1[j] - 'A');
			}
			break;
		}
	}
	for (int i = 0; i < str3.length() && i < str4.length(); i++)
	{
		if (str3[i] == str4[i] && isalpha(str3[i]))
		{
			Min = i;
			break;
		}
	}
	cout << Day;
	printf(" %02d:%02d", Hour, Min);
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
