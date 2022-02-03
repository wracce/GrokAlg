#include "sort.h"

void grok::insertSort(int* arr, int N)
{
	int idMin;
	for (int i = 0; i < N; i++)
	{
		idMin = grok::getIdMin(arr, i, N - 1);
		if (i != idMin)
			grok::swap(arr, i, idMin);
	}
}
