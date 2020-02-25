#include<iostream>
#include<string>
using namespace std;

int main(){
	int a=5;
	string b="A";
	string &c=b;
	int *x= &a;
	string *y= &b;
	int **z=&x;

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<"&a = "<<&a<<endl;
	cout<<"&b = "<<&b<<endl;
	cout<<"&c = "<<&c<<endl;
	cout<<"&x = "<<&x<<endl;
	cout<<"&y = "<<&y<<endl;
	cout<<"&z = "<<&z<<endl;
	
	 c="F";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;

	*y="W";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;

	*x=6;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;


	**z=7;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;



	



	
	
	
	return 0;
}
