#include <iostream>
#include "search.h"
using namespace std;

int main() 
{
	int arr[] = {1,2,5,9,12};
	int N = sizeof(arr)/sizeof(arr[0]);

	cout << grok::simpleSearch(arr, N, 12) << endl;
	cout << grok::binarySearch(arr,N,12) << endl;

	system("pause");
	return 0;
}