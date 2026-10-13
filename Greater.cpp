#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y;
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Enter second number: ";
	cin>>y;
	if(x>y)
	cout<<"Result"<<x<<"is greater";
	else if(y>x)
	cout<<"Result"<<y<<" is greater";
	else
	cout<<"both numbers are equal";
	return 0;
}
