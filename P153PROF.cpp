#include <iostream>
using namespace std;
int partition(int a[], int low, int high){
	int pivot = a[high];
	int i = low - 1;
	for(int j = low; j < high; j++){
		if(a[j] < pivot){
			i++;
			int tmp = a[i]; a[i] = a[j]; a[j] = tmp;
		}
	}
	int tmp = a[i+1]; a[i+1] = a[high]; a[high] = tmp;
	return i+1;
}
void quickSort(int a[], int low, int high){
	if(low < high){
		int pi = partition(a, low, high);
		quickSort(a, low, pi - 1);
		quickSort(a, pi + 1, high);
	}
}
int main(){
	int n; cin>>n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		cin>>b[i];
	}
	quickSort(a, 0, n-1);
	quickSort(b, 0, n-1);
	int count = 0, k = -1;
	for(int i = 0; i < n; i++){
		for(int j = k+1; j < n; j++){
			if(a[i] < b[j]){
				count++;
				k = j;
				break;
			}
		}
	}
	cout<<count;
	return 0;
}