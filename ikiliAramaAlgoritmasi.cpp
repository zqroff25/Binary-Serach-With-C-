
#include <iostream>
using namespace std;


int binarySearch(int[], int, int , int);

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << " Item Dizide Yok"
		: cout << " Aranan Elemanin Indexi : " << result;
	return 0;
}


int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// item ortancayi temsil ediyorsa

		if (arr[mid] == x)
			return mid;

		// otrancadan küçükse	
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);


		return binarySearch(arr, mid + 1, r, x);
	}


	return -1;
}