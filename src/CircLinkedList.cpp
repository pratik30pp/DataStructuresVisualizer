#include "CircLinkedList.h"
#include "Node.h"

//-----------------------------------------------------------------------------
void CircLinkedList::InsertInEmpty(double data)
{
	if (m_last != nullptr)
		return;

	//allocate memory for node
	Node *temp = new Node();

	//Assign the data.
	temp->m_data = data;
	m_last = temp;

	// Create the link.
	m_last->m_nextNode = m_last;
}

//-----------------------------------------------------------------------------
void CircLinkedList::InsertAtBegin(double data)
{
	Node *temp = new Node();

	//set new data to node
	temp->m_data = data;
	temp->m_nextNode = m_last->m_nextNode;
	m_last->m_nextNode = temp;
}

//-----------------------------------------------------------------------------
void CircLinkedList::InsertAtEnd(double data)
{
	Node *temp = new Node();

	//assign data to new node
	temp->m_data = data;
	temp->m_nextNode = m_last->m_nextNode;
	m_last->m_nextNode = temp;
	m_last = temp;
}
//-----------------------------------------------------------------------------