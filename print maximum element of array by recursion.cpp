#include <iostream>
#include <vector>
using namespace std;
void printmax(int arr[], int n, int index,int max){
	if(index==n){
		cout<<max;
		return;
	}
	if(max<arr[index]) max = arr[index];
	printmax(arr,n,index+1,max);
}
int main(){
	int arr[] = {2,1,6,3,9,0,20};
	int n = sizeof(arr)/sizeof(arr[0]);
	printmax(arr,n,0,INT_MIN);
}

