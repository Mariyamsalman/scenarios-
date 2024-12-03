#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	//scenario 6
	int marks,num;
	do{
	cout<<"enter your marks:";
	cin>>marks;
	if(marks>=90)
	{
	cout<<"\nyour grade is:A";
	break;
	}
	if(marks>=80&&marks<=90)
	{
cout<<"\nyour grade is:B";
}
 if(marks>=70&&marks<=80)
{
	cout<<"\nyour grade is:C";
}if(marks>=60&&marks<=70){
    cout<<"\nyour grade is:D";

}if(marks<60){
	cout<<"\nyour grade is:F";
}
else{
	cout<<"\n bye";
}
cout<<"\nenter 0 if when you want to stop or press any key if you want to continue";
cin>>num;
}while(num!=0);
	return 0;
	}
