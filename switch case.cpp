#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	int x;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"the operation to perform\n";
	cout<<"1.Addition\n";
	cout<<"2.Subtraction\n";
	cout<<"3.Multiplication\n";
	cout<<"4.Division\n";
	cout<<"\nSelect one:";
	cin>>x;
	
	switch(x)
	{
		case 1: c=a+b;
		cout<<"The addition is:"<<c<<endl;
		break;
		
		case 2: c=a-b;
		cout<<"The subtraction is:"<<c<<endl;
		break;
		
		case 3: c= a*b;
		cout<<"The product is:"<<c<<endl;
		break;
		
		case 4: c=a/b;
		cout<<"The quotient is:"<<c<<endl;
		
   }

return 0;
}