// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/?purpose=login&source=problem-page&update=google
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int arr[26];
		for(int i=0;i<26;++i){
			arr[i]=0;
		}
		bool can=false;
		for (int i=0;i<s.size();++i){
			arr[s[i]-'a']++;
			if (arr[s[i]-'a']==2){
				can=true;
				break;
			}
		}
		if (can){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}