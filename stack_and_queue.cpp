// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	stack <int> s;
// 	s.push(2);
// 	s.push(3);
// 	s.push(4);
// 	s.push(5);
// 	while(!s.empty()){
// 		cout<<s.top()<<endl; //lifo
// 		s.pop();
// 	}
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
	queue <string> q;
	q.push("abc");
	q.push("efg");
	q.push("jkl");
	q.push("xyz");
	while(!q.empty()){
		cout<<q.front()<<endl; //fifo
		q.pop();
	}
}