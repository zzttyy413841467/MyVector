/**
* �����ռ�: MyVector
*
* �� �ܣ� ��������
* �� ���� myVector
* �����ˣ�zty
* ����ʱ�䣺2020-11-1 17:16:21
* Ver ������� ������ �������
* ����������������������������������������������������������������������
* V0.01 2020-11-1 zty ����
*
* Copyright (c) 2020 zty Corporation. All rights reserved.
*/
#ifndef MYVECTOR_H
#define MYVECTOR_H

//#define NDEBUG
#include<iostream>
#include<vector>

#include <cassert>
using namespace std;

class MyVector
{
public:
	MyVector();
	~MyVector();
	friend double dot(vector<double> a, vector<double> b);
	friend double norm(vector<double> a);
private:

};



double dot(vector<double> a, vector<double> b);//������

double norm(vector<double> a);//����2����

#endif // !MYVECTOR_H


