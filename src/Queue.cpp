#include "Queue.h"
#include "Node.h"

//-----------------------------------------------------------------------------
void Queue::EnQueue(double data)
{
	Node* newNode = new Node();
	newNode->m_data = data;
	if (m_front == nullptr)
		m_front = m_rear = newNode;
	else
	{
		m_rear->m_nextNode = newNode;
		m_rear = newNode;
	}
}
//-----------------------------------------------------------------------------
double Queue::DeQueue()
{
	if (m_front == nullptr && m_rear == nullptr)
		return -1;
	if (m_front->m_nextNode != nullptr)
	{
		Node* oldFront = m_front;
		double dQed = oldFront->m_data;
		m_front = m_front->m_nextNode;
		delete oldFront;
		return dQed;
	}
	else
	{
		Node* oldFront = m_front;
		double dQed = oldFront->m_data;
		m_front = m_rear = nullptr;
		delete oldFront;
		return dQed;
	}
}
//-----------------------------------------------------------------------------