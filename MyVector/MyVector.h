
#ifndef MYVECTOR_H
#define MYVECTOR_H

#include<iostream>
#include<vector>
using namespace std;

class MyVector
{
public:
	MyVector();
	~MyVector();
	friend double dot(vector<double> a, vector<double> b);
private:

};



double dot(vector<double> a, vector<double> b);


#endif // !MYVECTOR_H


