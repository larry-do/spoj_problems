#include <iostream>
using namespace std;
long int partition(long int a[], long int low, long int high){
	long int pivot = a[high];
	long int i = low - 1;
	for(int j = low; j < high; j++){
		if(a[j] > pivot){
			i++;
			long int tmp = a[j]; a[j] = a[i]; a[i] = tmp;
		}
	}
	long int tmp = a[i+1]; a[i+1] = a[high]; a[high] = tmp;
	return i+1;
}
void quickSort(long int a[], long int low, long int high){
	if(low < high){
		long int pi = partition(a, low, high);
		quickSort(a, low, pi - 1);
		quickSort(a, pi+1, high);
	}
}
long int find(long int coins[], long int n, long int s){
	quickSort(coins, 0, n-1);
	long int res = 0;
	long int i = 0;
	while(s > 0 && i <= n-1){
		res+=(s/coins[i]);
		s = s % coins[i];
		i++;
	}
	if(s != 0) return -1;
	return res;
}
int main(){
	long int n, s; cin>>n>>s;
	long int coins[n];
	for(int i = 0; i < n; i++){
		cin>>coins[i];
	}
	cout<<find(coins, n, s);
	return 0;
}