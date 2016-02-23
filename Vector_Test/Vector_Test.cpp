// Vector_Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <vector>
#include <windows.h>
#include "minidump.h"
#include <queue>


using namespace std;

int main()
{
	//NSDumpFile::RunCrashHandler();
	//vector<int> vecTest;
	//map<int, int>mapTest;
	//for (int i = 0; i < 10;i++)
	//{
	//	vecTest.push_back(i);
	//	mapTest[i] = i + 1;
	//}
	//for (vector<int>::iterator It = vecTest.begin(); It != vecTest.end(); )
	//{
	//	if ( *It != 5 )
	//	{
	//		/*It =*/ vecTest.erase(It++);
	//	}
	//	else
	//	{
	//		It++;
	//	}
	//}
	//for (map<int, int>::iterator It = mapTest.begin(); It != mapTest.end(); )
	//{
	//	if (It ->second != 5)
	//	{
	//		mapTest.erase(It++);
	//	}
	//	else
	//	{
	//		It++;
	//	}
	//}
	//int a = 100;

	//OutputDebugString(TEXT("测试信息."));
	queue<string> TestQueue;
	for (int i = 0; i < 10; i++)
	{
		char buff[64] = {0};
		sprintf_s(buff,"第%d条消息\n",i);
		TestQueue.push(string(buff));
	}
	while (!TestQueue.empty())
	{
		string a = TestQueue.front();
		std::cout << a.c_str() <<std::endl;
		TestQueue.pop();
		std::cout <<"TestQueue.size():"<< TestQueue.size() << std::endl;
	}
    return 0;
}

