#include"Node.h"
#include "StackLL.h"

//-----------------------------------------------------------------------------
void StackLL::Push(double data)
{
	Node* temp = new Node();
	temp->m_data = data;
	temp->m_nextNode = m_top;
	m_top = temp;
}

//-----------------------------------------------------------------------------
double StackLL::Peek()
{
	if (!IsEmpty())
		return m_top->m_data;
	else return 0.0;
}

//-----------------------------------------------------------------------------
void StackLL::Pop()
{
	if (m_top == nullptr)
		return;
	else
	{
		Node* temp = m_top;
		m_top = m_top->m_nextNode;
		temp->m_nextNode = nullptr;
		delete temp;
	}
}

//-----------------------------------------------------------------------------
double StackLL::IsEmpty()
{
	return m_top == nullptr;
}
