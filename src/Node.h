#pragma once
class Node
{
public:
	Node* m_nextNode;
	double m_data;

	Node() { m_nextNode = nullptr; m_data = 0; }
	~Node() { delete m_nextNode; }
	
};