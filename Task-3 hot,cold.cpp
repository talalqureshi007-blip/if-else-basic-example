#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int temp;
	cout<<"Enter temperature: ";
	cin>>temp;
	if(temp>30)
	{
		cout<<"HOT"<<endl;
	}
	else
	{
		cout<<"Cold"<<endl;
	}
	return 0;
}
