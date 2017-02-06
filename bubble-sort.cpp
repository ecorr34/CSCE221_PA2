//============================================================================
// Name        : bubble-sort.cpp
// Author      : Edgar Corral
// Date        : 2/6/17
// Copyright   :
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void
BubbleSort::sort(int A[], int size)			// main entry point
{
    resetNumCmps();
	for (int i = 0; i < size - 1; i++)
	{
	    for (int j = 0; j < size - i - 1; j++)
		{
			num_cmps++;
			if (A[j] > A[j+1])
			{
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
			}
		}
	}
}
