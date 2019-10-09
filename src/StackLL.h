#pragma once
class Node;

//-----------------------------------------------------------------------------
class StackLL
{
private:
	Node* m_top;
public:
	StackLL() { m_top = nullptr; }
	~StackLL() { if (m_top) { delete m_top; } }

	void Push(double data);
	double Peek();
	void Pop();
	double IsEmpty();
};
//-----------------------------------------------------------------------------