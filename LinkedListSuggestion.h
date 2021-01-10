#pragma once
#include <initializer_list>

template<typename T>
// feel free to add/delete methods of LinkedList class, this file is suggestion rather than requirement
class LinkedList
{
public:
	LinkedList()
	{
		// to implement
	}
	LinkedList(const std::initializer_list<T>& newValues)
	{
		// to implement
	}
	void pushFront(const T& newValue)
	{
		// to implement
	}
	void pushBack(const T& newValue)
	{
		// to implement
	}
	[[nodiscard]]  T popFront()
	{
		// to implement
	}
	[[nodiscard]]  T popBack()
	{
		// to implement
	}
	[[nodiscard]] unsigned getSize() const
	{
		// to implement
	}
	[[nodiscard]] bool isEmpty() const
	{
		// to implement
	}
	void clear()
	{
		// to implement
	}

private:
	Node* _head;
	struct Node
	{
		Node(const T& newValue) : value{ newValue } {}
		Node* next = nullptr;
		T value;
	};

};

