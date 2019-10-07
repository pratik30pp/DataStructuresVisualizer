#include"Node.h"
#include"LinkedList.h"

void LinkedList::Push(double data)
{
	Node* newNode = new Node();
	newNode->m_data = data;
	newNode->m_nextNode = *m_head;
	if (*m_head = nullptr)
		*m_head = newNode;
	m_length++;
}

void LinkedList::Append(double data)
{
	Node* newNode = new Node();
	Node* last = *m_head;
	newNode->m_data = data;
	newNode->m_nextNode = *m_head;
	if (*m_head = nullptr)
	{
		*m_head = newNode;
		m_length++;
		return;
	}

	while (last->m_nextNode!= nullptr)
		last = last->m_nextNode;

	last->m_nextNode = newNode;
	m_length++;
}

void LinkedList::InsertAfter(Node* prevNodeRef, double data)
{
	Node* newNode = new Node();
	newNode->m_data = data;
	newNode->m_nextNode = prevNodeRef->m_nextNode;
	prevNodeRef->m_nextNode = newNode;
	m_length++;
}

void LinkedList::DeleteNode(double key)
{
	Node* temp = *m_head;
	Node* prev = nullptr;
	if (temp != nullptr && temp->m_data == key)
	{
		*m_head = temp->m_nextNode;
		delete temp;
		return;
	}
	while (temp != nullptr && temp->m_data != key)
	{
		prev = temp;
		temp = temp->m_nextNode;
	}

	// If key was not present in linked list
	// temp has traversed till the end
	if (temp == nullptr) 
		return;

	// Unlink the node from linked list 
	prev->m_nextNode = temp->m_nextNode;

	delete temp;
}

void LinkedList::Reverse()
{
	Node* current = *m_head;
	Node *prev = nullptr, *next = nullptr;

	while (current != nullptr) 
	{
		// Store next 
		next = current->m_nextNode;

		// Reverse current node's pointer 
		current->m_nextNode = prev;

		// Move pointers one position ahead. 
		prev = current;
		current = next;
	}
	*m_head = prev;
}

void LinkedList::DeleteList()
{
	Node* current = *m_head;
	Node* next;

	while (current != nullptr)
	{
		next = current->m_nextNode;
		delete current;
		current = next;
	}

	/* deref head_ref to affect the real head back
	in the caller. */
	*m_head = nullptr;
}