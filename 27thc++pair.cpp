#include<iostream>
using namespace std;
int main(){
	pair<int,string> p;
	cout<<"------------------ pair ------------------"<<endl;
	cout<<"enter the values of int and string ";
	cin>>p.first>>p.second;
	//p={2,"abc"};
	cout<<"in first pair p  "<<p.first<<" "<<p.second<<endl;
	pair<int,string> p1=p;//copy
	cout<<"in second pair p1  "<<p1.first<<" "<<p1.second<<endl;
	pair<int,string> &p2=p;
	cout<<"in third pair p2  "<<p2.first<<" "<<p2.second<<endl;
	p1.first=3;
	cout<<"after modify in second pair p1  "<<p1.first<<" "<<p1.second<<endl;
}
