#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &m){
	auto it = m.begin();
	while(it!=m.end()){
		cout<<*it<<endl;
		it++;
	}
}
int main(){
	// set<string> s; //set is ordered
	// s.insert("abc"); //log(n)
	// s.insert("zsdf");
	// s.insert("bcd");
	// s.insert("abc"); //wont insert as set contains unique elements
	// auto it = s.find("abc"); //iterator of abc //O(logn)
	// // s.erase("abc");
	// // s.erase(it); //erase can take both iterator and element
	// print(s);

	//in unordered set all functions are O(1)
	//it is generally used to check the presence of an element
	//s.find(str)==s.end; this will point to the iterator
	//we cannot make set of pairs or set
	//it can take just basic datatypes
	//because hash functions are not defined for complex types


	//multisets //O(logn) functions
	multiset <string> s;
	s.insert("abc");
	s.insert("bcd");
	s.insert("fhh");
	s.insert("abc"); //this will create duplicate in multisets
	print(s);
	auto it =s.find("abc"); //this will point to the first appearance
	// if (it!=s.end()){
	// 	s.erase(it);//only one abc will be erased

	// }
	// print(s); 
	//but
	s.erase("abc"); // this will delete all values
	print(s);



}