#pragma once
//-----------------------------------------------------------------------------
class Node;

class CircLinkedList
{
private:
	Node* m_last;
public:
	CircLinkedList() { m_last = nullptr; }
	~CircLinkedList(){}

	void InsertInEmpty(double data);
	void InsertAtBegin(double data);
	void InsertAtEnd(double data);
};
//-----------------------------------------------------------------------------