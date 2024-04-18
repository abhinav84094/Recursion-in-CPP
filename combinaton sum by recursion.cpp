#include <iostream>
#include <vector>
using namespace std;
void combination(vector<int>v,int arr[], int n, int target, int idx){
	if(target==0){
		for(int i=0; i<v.size(); i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		return;
	}
	if(target < 0) return;
	for(int i=idx; i<n; i++){
		v.push_back(arr[i]);
		combination(v, arr, n, target-arr[i], i);
		v.pop_back();
	}
}
int main(){
	int n;
	cout<<"enter size of array : ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cout<<"enter element of array : ";
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int sum;
	cout<<"enter sum that you wnat : ";
	cin>>sum;
	vector<int>v;
	combination(v,arr,n,sum,0);
}
