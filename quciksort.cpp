#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
	int x = low -1;
	int y=low;
	int pivot =arr[high];
	for(y = low;y <= high-1;y++)
	{
		if(arr[y] <=pivot)
		{
			x++;
			swap(arr[x],arr[y]);
		}
	}
	swap(arr[x+1],arr[high]);
	return x + 1;
	
	
}
void quickSort(int arr[],int low,int high)
{
	if(low < high)
	{
	int pos = partition(arr,low,high);
	quickSort(arr,low,pos-1);
	quickSort(arr,pos+1,high);	
	}

}
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
	int arr[] = {12, 9, 7, 15, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);
}

