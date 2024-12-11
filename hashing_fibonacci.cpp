#include <bits/stdc++.h>
using namespace std;
const int n= 1e7+10;
long long arr[n];
int main(){

	arr[0]=arr[1]=1;
	for (int i=2;i<n;i++){
		arr[i]=arr[i-1]+arr[i-2];
}
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<arr[x]<<endl;
	}
	return 0;
}