// //in vectors
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	vector <int> a(n);
// 	for (int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	sort(a.begin(),a.end());
// 	for (int i=0;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}
// 	cout<<endl;
// 	auto it =upper_bound(a.begin(),a.end(),5);
// 	cout<<*it<<endl;
// 	auto it1=lower_bound(a.begin(),a.end(),2);
// 	cout<<*it1<<endl;
// }


//for sets
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	set <int>s;
	for (int i =0; i<(int) 1e6;i++){
		// int x;
		// cin>>x;
		s.insert(rand());
	}
	for (int i=0; i<(int) 1e5;i++){
		// auto it =lower_bound(s.begin(),s.end(),rand()); //this will give TLE //this will be O(N) not O(logN)
		auto it =s.lower_bound(rand()); //this will work without TLE //this is O(logN)
	}
	// cout<<*it<<endl;
}