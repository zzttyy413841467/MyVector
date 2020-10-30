#include "MyVector.h"

double dot(vector<double> a, vector<double> b)
{
	int n1 = a.size();
	int n2 = b.size();
	double c = 0;
	if (n1!=n2)
	{
		throw(0);
	}
	else
	{
		for (int i = 0; i < n1; i++)
		{
			c += a[i] * b[i];
		}
	}
	return c;
}

MyVector::MyVector()
{
}

MyVector::~MyVector()
{
}