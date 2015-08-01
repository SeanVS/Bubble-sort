#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
#include <assert.h> // for assert()
#include <ctime> // for time()

class SortableArray
{
private:
	int m_length;
	int *m_data;

public:
	SortableArray(int length)
	{
		m_data = new int[length];
		m_length = length;
	}

	~SortableArray()
	{
		delete[] m_data;
	}

	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int GetLength() { return m_length; }

	void printElements()
	{
		for (int i = 0; i < m_length; i++)
		{
			std::cout << m_data[i] << " ";
		}

		std::cout << std::endl;
	}

	void Bubblesort()
	{
		for (int sortedElement = m_length; sortedElement > 0; sortedElement--)
		{
			for (int i = 0; i < sortedElement; i++)
			{
				int nextElement = i + 1;
				if (nextElement < sortedElement)
				{
					if (m_data[i] > m_data[nextElement])
					{
						int storedElement = m_data[nextElement];
						m_data[nextElement] = m_data[i];
						m_data[i] = storedElement;
					}
				}
			}
		}
	}
};
#endif