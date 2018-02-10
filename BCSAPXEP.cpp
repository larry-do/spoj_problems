#include <iostream>
using namespace std;
void swap(int &a, int &b){
	int tmp = a; a = b; b = tmp;
}
int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low - 1;
	for(int j = low; j < high; j++){
		if(arr[j] <= pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
void quickSort(int arr[], int low, int high){
	if(low < high){
		int partition_index = partition(arr, low, high);
		quickSort(arr, low, partition_index - 1);
		quickSort(arr, partition_index + 1, high);
	}
}
int main(){
	int n; cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	quickSort(arr, 0, n - 1);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}