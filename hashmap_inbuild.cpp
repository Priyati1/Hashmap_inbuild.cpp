#include<iostream>
#include<unordered_map>
using namespace std;
int main(){//unordered_map<key,value>h
	unordered_map<string,int>h;
	h["Apple"]=100;
	h["banana"]=150;
	// h.insert({"papaya",160});
	pair<string,int>p("mango",80);
	h.insert(p);
	h.insert(make_pair("grapes",500));
	//print hashmap
	// yaha humko malum nhi hain kab tak print karna 
	// hain that is why we will use for each.
	for(pair<string,int>fruit:h){//for each pair of fruit in the hashmap h
		cout<<fruit.first<<"->"<<fruit.second;
	}
	cout<<endl;
	for(auto fruit:h){//auto->apne ap pair consider kar dega
		cout<<fruit.first<<"->"<<fruit.second;
	}
	cout<<endl;
	h.erase("mango");
	for(auto fruit:h){//auto->apne ap pair consider kar dega
		cout<<fruit.first<<"->"<<fruit.second;
	}
	cout<<endl;
	return 0;
}