
#include <bits/stdc++.h> // contains all header files of c++14

using namespace std;

//parameters are bnary_search(array address, size of array, key to find)
int binary_search(int arr[], int n , int key) {
	if(is_sorted(arr,arr+n)!=true)
		return ;
	else
	{
	int start=0; // first index of array
	int end=n-1; // last index of array
	
	while(start<=end)
	{
		int mid = start + (end - start) / 2; 
		
		if(arr[mid]==key) // if the element is present at the middle itself
		return mid;
		
		else if(arr[mid]>key) // if element is smaller than mid , then it can be present in the left subarray only
		end=mid-1;
		
		else // else the element can only be present in the right subarray
		start=mid+1;
	}

	return -1;

	}
}
int main() {

	//example
	int arr[] = {1 , 2 , 5 , 7 , 9 , 11};
	//Note : Make sure the array is in sorted order before performing binary search

	/*binary_search function returns the index of the element if the element is found
	otherwise it returns -1 */
	cout << binary_search(arr, 6, 7) << '\n';
	cout << binary_search(arr, 6, 3) << '\n';

	return 0;
}
