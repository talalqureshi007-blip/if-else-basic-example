#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int speed;
	cout<<"Enter speed limit: ";
	cin>>speed;
	if(speed<=60)
	{
		cout<<"Speed is safe";
	}
	else
	{
		cout<<"Speed is over the limit";
	}
	return 0;
}
