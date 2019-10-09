#include "Stack.h"
//Push: Adds an item in the stack.If the stack is full, then it is said to be an Overflow condition.
//Pop : Removes an item from the stack.The items are popped in the reversed order in which they are pushed.If the stack is empty, then it is said to be an Underflow condition.
//Peek or Top : Returns top element of stack.
//isEmpty : Returns true if stack is empty, else false
//-----------------------------------------------------------------------------
bool Stack::Push(double data)
{
	if (m_top >= (max - 1))
		return false;
	else
	{
		m_sArray[++m_top] = data;
		return true;
	}
}

//-----------------------------------------------------------------------------
double Stack::Pop()
{
	if (m_top < 0)
		return 0.0;
	else
	{
		double poppedData = m_sArray[--m_top];
		return poppedData;
	}
}

//-----------------------------------------------------------------------------
double Stack::Peek()
{
	if (m_top < 0)
		return 0.0;
	else
	{
		double peekElmnt = m_sArray[m_top];
		return peekElmnt;
	}
}

//-----------------------------------------------------------------------------
bool Stack::IsEmpty()
{
	return (m_top < 0);
}
//-----------------------------------------------------------------------------