#include "search.h"
#include "sort.h"
using namespace std;

int main() 
{
	int* arr =  new int[] {12, 8, 4, 9, 13};
	int N = 5;

	grok::print(arr, N); cout << endl;
	grok::insertSort(arr, N);
	grok::print(arr, N); cout << endl;

	system("pause");
	return 0;
}