#include"globalFile.h"
#pragma once
#include<iostream>
using namespace std;
#include<map>
#include<string>

class OrderFile
{
public:
	//构造函数
	OrderFile();

	//更新预约内容
	void updateOrder();

	//记录的容器
	map<int, map<string, string>>m_orderData;//map<string,string> key属性 value实值
	//map<int,map<string,string>> key代表预约条数 value代表第一条信息

	//预约记录条数
	int m_Size;
};