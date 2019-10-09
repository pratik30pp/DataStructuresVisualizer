#pragma once
const int max = 1000;

//-----------------------------------------------------------------------------
class Stack
{
private:
	int m_top;
public:
	double m_sArray[max];
	Stack() { m_top = -1; }
	~Stack() {}

	bool Push(double data);
	double Pop();
	double Peek();
	bool IsEmpty();
};
//-----------------------------------------------------------------------------
