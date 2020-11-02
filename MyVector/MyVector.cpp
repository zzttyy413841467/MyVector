#include "MyVector.h"

MyVector::MyVector()
{
}

MyVector::~MyVector()
{
}

// 求向量点积
double dot(vector<double> a, vector<double> b)
{
	int n1 = a.size();
	int n2 = b.size();
	double c = 0;
	assert(n1 == n2);
	for (int i = 0; i < n1; i++)
	{
		c += a[i] * b[i];
	}
	return c;
}

// 求向量长度(2范数)
double norm(vector<double> a)
{
	int n = a.size();
	double c = 0;
	for (int i = 0; i < n; i++)
	{
		c += a[i] * a[i];
	}
	return sqrt(c);
}