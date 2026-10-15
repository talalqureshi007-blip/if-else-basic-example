#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float bill, discount, amount;
	cout<<"Enter bill amount : ";
	cin>>bill;
	if(bill>=1000)
	{
		discount=bill*10/100;
		amount= bill-discount;
	}
	else
	{
		amount= bill;
	}
	cout<<"amount to pay : "<<amount;
	return 0;
}
