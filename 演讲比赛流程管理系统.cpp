#include<iostream>
using namespace std;
#include "speechManager.h"
#include<ctime>

int main()
{
	srand((unsigned int)time(NULL));
	//创建管理类对象
	SpeechManager sm;

	int choice = 0; //接受用户输入

	while (true)
	{
		sm.show_Menu();
		cout << "请输入您的选择: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: { //开始比赛
			sm.startSpeech();
			break;
		}
		case 2: { //查看往届记录
			sm.showRecord();
			break;
		}
		case 3: { //清空比赛记录
			sm.clearRecord();
			break; 
		}
		case 0: { //退出系统
			sm.exitSystem();
			break;
		}
		default:
			system("cls"); //清屏
			break;
		}
	}

	system("pause");
	return 0;
}