#include <iostream>
using namespace std;
long int n, m;
long int a[1000010];
long long int b[1000010];
long int partition(long int low, long int high){
	long int pivot = a[high];
	long int i = low - 1;
	for(long int j = low; j < high; j++){
		if(a[j] <= pivot){
			i++;
			long int tmp = a[i]; a[i] = a[j]; a[j] = tmp;
		}
	}
	long int tmp = a[i+1]; a[i+1] = a[high]; a[high] = tmp;
	return i+1;
}
void quickSort(long int low, long int high){
	if(low < high){
		long int pi = partition(low, high);
		quickSort(low, pi - 1);
		quickSort(pi + 1, high);
	}
}
long int search(long int low, long int high){
	if(low == high){
		return a[low];
	}
	if(low == high - 1){
		return (b[n] - m - b[low])/(n-low);
	}
	long int mid = (high-low)/2+low;
	long long int k = b[n] - (n-mid)*a[mid] - b[mid];
	if(k < m) search(low, mid);
	else if(k > m) search(mid, high);
	else if(k == m) search(mid, mid);
}
int main(){
	cin>>n>>m;
	b[0] = 0;
	for(long int i = 1; i <= n; i++){
		cin>>a[i];
	}
	quickSort(1, n);
	for(long int i = 1; i <= n; i++){
		b[i] = b[i-1] + a[i];
	}
	cout<<search(1, n);
	return 0;
}