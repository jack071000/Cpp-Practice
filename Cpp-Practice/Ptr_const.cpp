#include<iostream>
using namespace std;

int main(void)
{
	int a = 10;
	int b = 20;

	const int * c = &a;

	c = &b; //Ok
	*c = 30; //Error

	cout << "C :" << *c;
}

int main(void)
{
	int a = 10;
	int b = 20;

	int * const c = &a;

	c = &b; //Error
	*c = 30; //Ok

	cout << "C :" << *c;

}
