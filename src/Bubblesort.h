#ifndef BUBBLESORT_H
#define BUBBLESORT_H

class SortableArray
{
private:
	int *m_data;  //m_data will point to an array
	int m_length; //m_length stores the length of that array

public:
	SortableArray(int length);

	~SortableArray();

	int& operator[](int index);

	int getLength() { return m_length; }
	void printElements();
	void bubbleSort();
};
#endif