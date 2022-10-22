#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	int n,x;
	cout<<"enter the number of elements : "<<endl;
	cin>>n;
	cout<<"the capacity of the vector before input the elements "<<endl;
	cout<<"enter the values of vector"<<endl;
	//push_back() function
	//.size() function
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"the values of the vector : ";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<", ";
	}
	cout<<"\n\nthe size of the vector after input the elements : "<<v.size()<<endl;
	cout<<"the capacity of the vector after input the elements : "<<v.capacity()<<endl<<endl;//v.capacity function
	for(int i=0;i<v.size();i++)
	{
		cout<<"the value of the vector at position "<<i<<" is : "<<v.at(i)<<endl;
	}
	cout<<"\nthe value at 3 index : ";//v.at() function
	cout<<v.at(3)<<endl;
	cout<<"the value at first possition : ";//v.front() function
	cout<<v.front()<<endl;
	cout<<"the value at last position : ";//v.back function
	cout<<v.back()<<endl;
	
	
	//pop_back() function
	v.pop_back();
	cout<<"\nafter the pop_back() the last element of the vector deleted from the vector."<<endl;
	cout<<"now the vector is "<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<", ";
	}
	
	return 0;
}
