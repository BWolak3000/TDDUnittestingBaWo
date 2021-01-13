#pragma once
#include <iostream>

template<typename T>
class LinkedList
{
public:
	LinkedList() :_head(nullptr), _size(0) {}

	void pushFront(const T& newValue)
	{
		_size++;
		if (_head == nullptr) {
			_head = new Node(newValue); return;
		}
		else {
			Node* node = new Node(newValue);
			node->next = _head;
			_head = node;
		}
	}

	void pushBack(const T& newValue)
	{
		pushFront(newValue);
		// to implement
	}
	[[nodiscard]]  T popFront()
	{
		
		T val = _head->value;
		Node* temp = _head->next;
		_head->next = nullptr;
		_head = temp;
		return val;
		// to implement
	}
	[[nodiscard]]  T popBack()
	{
		return popFront();
	}
	[[nodiscard]] unsigned getSize() const
	{
		return _size;
	}
	[[nodiscard]] bool isEmpty() const
	{
		return(_head == nullptr);
	}

private:
	struct Node
	{
		Node(const T& newValue) : value{ newValue } {}
		Node* next = nullptr;
		T value;
	};
	Node* _head;
	int _size;
};

