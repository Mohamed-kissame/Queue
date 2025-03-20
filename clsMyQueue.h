#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template<class T>

class clsMyQueue
{

protected:

	clsDblLinkedList <T> _MyList;

public:

	void push(T item) {

		_MyList.InsertAtEnd(item);
	}

	void pop() {

		_MyList.DeleteFirstNode();
	}

	void Print() {

		_MyList.PrintList();

	}

	int Size() {

		return _MyList.Size();
	}

	bool IsEmpty() {

		return _MyList.IsEmpty();
	}

	T front() {

		return _MyList.GetItem(0);

	}

	T back() {

		return _MyList.GetItem(Size() - 1);
	}

	T GetItem(T value) {

		return _MyList.GetItem(value);
	}

	void Reverse() {

		_MyList.Reverse();
	}

	bool UpdateItem(int index, T value) {

		return _MyList.UpdateItem(index, value);
	}

	bool InsertAfter(int index, T value) {

		return _MyList.InsertAfter(index, value);
	}

	void InsertAtFront(T value) {

		_MyList.InsertAtBeginning(value);
	}

	void InsertAtBack(T value) {

		_MyList.InsertAtEnd(value);
	}

	void Clear() {

		_MyList.Clear();
	}
};

