#include <iostream>
#include "search.h"
using namespace std;

int main() 
{
	int arr[] = {1,2,5,9,12};
	int N = sizeof(arr)/sizeof(arr[0]);

	cout << grok::binarySearch(arr,N,13) << endl;

	system("pause");
	return 0;
}