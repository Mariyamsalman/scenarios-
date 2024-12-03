#include<iostream>
using namespace std;
int main()
{
	//scenario 7
	int num;
	cout<<"enter a positive integer:";
	cin>>num;
	for(int i=1;i<=num;i++){
		if (num%i==0){
			cout<<i;
			cout<<"\n";	
		}
	}
	return 0;	
}
