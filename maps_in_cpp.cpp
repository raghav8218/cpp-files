//most operations are O(logn) in maps
//but for unordered maps, these operations become O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	map <int,string> m={{2,"Ant"},{4,"elephant"},{3,"lion"}};
// 	m.insert({1,"crow"});
// 	m[9]="sparrow";
// 	// while(it!=m.end()){
// 	// 	cout<<it->first<<" "<<it->second<<endl;
// 	// 	it++;
// 	// }
// 	for (auto pr:m){
// 		cout<<pr.first<<" "<<pr.second<<endl; 
// 	}
// 	// cout<<m.size();
// 	//empty value is 0 for maps 
// 	auto it = m.find(69);
// 	if (it ==m.end()){ //condition used to safely use functions such as erase in  map
// 		cout<<"not found"<<endl;
// 	}
// 	else{
// 		cout<<it->first<<" "<<it->second<<endl;
// 	}
// 	// cout<<it->first<<" "<<it->second;
// 	// m.erase(m.end());//generally gives error (segmentation fault)
// 	// m.erase(3); //takes both iterator and key as input
// 	// m.erase(it);
// 	for (auto pr:m){
// 		cout<<pr.first<<" "<<pr.second<<endl; 
// 	}
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	unordered_map<int,string>mp={{2,"Ant"},{4,"elephant"},{3,"lion"}};
// 	auto it = mp.begin();
// 	for (auto pr:mp){
// 		cout<<pr.first<<" "<<pr.second<<endl;
// 	}
// }