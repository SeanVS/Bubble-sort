#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include "Bubblesort.h"

/*
	This class holds a dynamically allocated array and can sort its elements using bubbleSort()
	The function loops through all the elements, swapping them until they are sorted lowest to highest
*/

SortableArray::SortableArray(int length)
{
	m_data = new int[length];
	m_length = length;
}

SortableArray::~SortableArray()
{
	delete[] m_data;
}


void SortableArray::printElements()
{
	for (int i = 0; i < m_length; i++)
	{
		std::cout << m_data[i] << " ";
	}

	std::cout << std::endl;
}

int& SortableArray::operator[](int index)
{
	assert(index >= 0 && index < m_length);
	return m_data[index];
}

void SortableArray::bubbleSort()
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
};