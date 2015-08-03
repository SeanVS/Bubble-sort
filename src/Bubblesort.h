#ifndef BUBBLESORT_H
#define BUBBLESORT_H

class SortableArray
{
private:
	//m_data will point to an array
	//m_length stores the length of that array
	int *m_data;
	int m_length;

	//SortableArray();

public:
	SortableArray(int length);

	~SortableArray();

	int& operator[](int index);

	int getLength() { return m_length; }
	void printElements();
	void bubbleSort();
};
#endif