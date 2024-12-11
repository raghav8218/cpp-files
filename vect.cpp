#include<bits/stdc++.h>
using namespace std;
void printVec(vector <int> &v){
	cout<<"size "<<v.size()<<endl;
	for (int i=0;i<v.size();++i){
		cout<<v[i]<<" ";
	}
}
int main(){
	// vector <pair<int,int>> tree= {{1,34},{32,58},{36,43}};
	// printVec(tree);
	cout<<endl;
	vector <int> cat[2];
	for (int i=0;i<2;i++){
		int n;
		cin>>n;
		for (int j=0;j<n;j++){
			int x;
			cin>>x;
			cat[i].push_back(x);
		}
	}
	for (int i=0;i<2;i++){
		printVec(cat[i]);
	}
}