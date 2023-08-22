#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<map>
#include "speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<fstream>

//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ���� �������̿��ƺ���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�÷�
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ�����¼
	void showRecord(); 

	//����ļ�
	void clearRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	map<int, vector<string>>m_Record;

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ�ŵ�����
	vector<int>v1;
	//��һ�ֽ�����ѡ�ֱ������
	vector<int>v2;
	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;
	//��ű�źͶ�Ӧ����ѡ�ֵ�����
	map<int, Speaker>m_Speaker;

	//��ű�������
	int m_Index;

};