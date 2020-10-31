
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



double dot(vector<double> a, vector<double> b);

double norm(vector<double> a);

#endif // !MYVECTOR_H


