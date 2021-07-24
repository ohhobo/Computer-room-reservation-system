#include"identity.h"
#include<vector>
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
#pragma once
#include<iostream>
using namespace std;



class Manager:public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������
	void initVector();

	//����ظ�
	bool checkReport(int id, int type);

	//ѧ������
	vector <Student> vStu;

	//��ʦ����
	vector <Teacher> vTea;

	//��������
	vector<ComputerRoom>vCom;
};