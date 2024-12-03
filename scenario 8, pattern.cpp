#include<iostream>
using namespace std;
int main()
{
//8th scenario
int num;
	cout<<"enter a positive integer:";
	cin>>num;
	if (num>0){
	for(int i=1;i<=num;i++){
		for(int j=num;j>=i;j--){
			cout<<" "<<j;
		}
		cout<<"\n";
	}
}
	return 0;
	}
	
