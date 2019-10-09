#pragma once

//-----------------------------------------------------------------------------
class Node;

class LinkedList
{
private:
	Node** m_head;
	int m_length;

public:
	LinkedList() { m_head = nullptr; m_length = 0; }
	~LinkedList() { delete m_head; m_head = nullptr; }
	int GetLength() { return m_length; }

	void Push(double data);
	void Append(double data);
	void InsertAfter(Node* prevNoderef, double data);
	void DeleteNode(double key);
	void Reverse();
	void DeleteList();
};
//-----------------------------------------------------------------------------