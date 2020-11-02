/**
* 命名空间: MyVector
*
* 功 能： 矩阵运算
* 类 名： myVector
* 创建人：zty
* 创建时间：2020-11-1 17:16:21
* Ver 变更日期 负责人 变更内容
* ───────────────────────────────────
* V0.01 2020-11-1 zty 初版
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



double dot(vector<double> a, vector<double> b);//计算点积

double norm(vector<double> a);//计算2范数

#endif // !MYVECTOR_H


