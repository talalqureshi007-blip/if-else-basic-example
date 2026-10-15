#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	cout<<"Enter number";
	cin>>num;
	if(num%5==0)
	{
		cout<<"Number is divisible by 5";
	}
	else
	{
		cout<<"Number is not divisible by 5";
	}
	return 0;
}
