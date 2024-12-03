#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//9th scenario
int num;
	cout<<"enter a positive integer:";
	cin>>num;
	if (num>0){
		cout<<"numbers\tsquares\tcubes\n";
		for(int i=1;i<=num;i++){
			cout<<i<<"\t"<<i*i<<"\t"<<i*i*i; 
			cout<<"\n";
		}
	}
	return 0;
}
