#include"globalFile.h"
#pragma once
#include<iostream>
using namespace std;
#include<map>
#include<string>

class OrderFile
{
public:
	//���캯��
	OrderFile();

	//����ԤԼ����
	void updateOrder();

	//��¼������
	map<int, map<string, string>>m_orderData;//map<string,string> key���� valueʵֵ
	//map<int,map<string,string>> key����ԤԼ���� value�����һ����Ϣ

	//ԤԼ��¼����
	int m_Size;
};