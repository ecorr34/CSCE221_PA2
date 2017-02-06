//============================================================================
// Name        : insertion-sort.cpp
// Author      : Edgar Corral
// Date        : 2/6/17
// Copyright   :
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
    resetNumCmps();
	for (int i = 1; i < size; i++)
	{
		int swap = A[i];
		for(int j = i; j > 0 && A[j-1] > A[j]; j--)
		{
			A[j] = A[j-1];
			A[j-1] = swap;
			num_cmps++;
		}
	}
}
