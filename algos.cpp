// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int> v(n);
// 	for (int i=0;i<n;i++){
// 		cin>>v[i];
// 	}
// 	int min=*min_element(v.begin(),v.end());
// 	int max=*max_element(v.begin(),v.end());
// 	cout<<min<<" "<<max<<endl;
// 	int sum=accumulate(v.begin(),v.end(),0); //last arg is initial sum
// 	cout<<sum<<endl;
// 	int ct=count(v.begin(),v.end(),5);
// 	cout<<ct<<endl;
// 	auto it = v.begin();
// 	auto f= find(v.begin(),v.end(),7);//returns iterator
// 	cout<<*f<<endl;
// 	reverse(v.begin(),v.end()); //reverses the vector
// 	while(it!=v.end()){
// 		cout<<*it<<" ";
// 		it++;
// 	}
// 	string s = "raghav";
// 	auto i =s.begin();
// 	reverse(s.begin(),s.end());//reverses the string
// 	while(i!=s.end()){
// 		cout<<*i;
// 		i++;
// 	}
// 	//similar can be done for arrays


// }

//true false functions
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector <int>v={2,-4,6};
	cout<<all_of(v.begin(),v.end(),[](int x){return x>0;}); //using lambda functions

	return 0;
}