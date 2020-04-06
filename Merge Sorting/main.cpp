#include <iostream>

using namespace std;

int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

int main() {


}

void divide(int first, int last) {
	if (first < last) {
		int mid = (first + last) / 2;

		divide(first, mid);
		divide(mid + 1, last);
		marge(first, mid, last);
	}
}

void marge(int first, int mid, int last) {
	int arr1[mid - first + 1], arr2[last - mid];
}