#include"identity.h"
#pragma once
#include<iostream>
using namespace std;

//老师类
class Teacher :public Identity
{
public:
	//默认构造
	Teacher();

	//有参构造
	Teacher(int empid, string name, string pwd);

	//菜单界面
	virtual void operMenu();

	//查看所有预约
	void showAllOrder();

	//审核预约
	void validOrder();

	//职工号
	int m_EmpId;


};