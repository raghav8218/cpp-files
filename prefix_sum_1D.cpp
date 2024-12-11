#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];
int mus[N];
int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>arr[i];
		mus[i]=mus[i-1]+arr[i];
	}
	int t;
	cin>>t;
	while(t--){
		int l;
		int r;
		cin>>l>>r;
		cout<<mus[r]-mus[l-1]<<endl;
	}

	return 0;
}