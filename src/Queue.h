#pragma once
class Node;
//-----------------------------------------------------------------------------
class Queue
{
private:
	Node* m_front;
	Node* m_rear;
public:
	Queue() { m_front = m_rear = nullptr; }
	~Queue() {}

	void EnQueue(double data);
	double DeQueue();
};
//-----------------------------------------------------------------------------