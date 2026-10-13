#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	cout<<"Enter number";
	cin>>number;
	if(number%2==0)
	{
		cout<<"Even number";
	}
	else
	{
		cout<<"Odd number";
	}
	return 0;
}
