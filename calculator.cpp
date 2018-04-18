#include<iostream>
using namespace std;
void sum();//headed by Shraddha
void diff();
            
//Headed by vedansh
void div(int,int);//headed by valli
void mul();//Headed by Vanshika
int main()
{
	int a ,b;
	cout<<"Enter the values of the numbers";
	cin>>a>>b;
	
return 0;
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

