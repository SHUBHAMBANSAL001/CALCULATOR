#include<iostream>
using namespace std;
void sum( int , int );//headed by Shraddha
void diff(int,int);//Headed by vedansh
void div(int,int);//headed by valli
void mul(int,int);//Headed by Vanshika
int main()
{
	int a ,b;
	cout<<"Enter the values of the numbers";
	cin>>a>>b;
}
void diff(int a,int  b)
{
	int c;
	if(a>=b)
	c=a-b;
	else
		c=b-a;
        cout<<"The differenc of the entered number is "<<endl<<c;
}
void div(int a,int b)
{
	int c;
	c=a/b;
	cout<<"The result of division is"<<c;
}
void sum(int a , int b)
{
	int c;
	c=a+b;
	cout<<"sum of two numbers is "<<c;
}
void mul(int a,int b)
{
	int c;
	c=a*b;
	cout<<"The multiply of the numbers is "<<c;
}
