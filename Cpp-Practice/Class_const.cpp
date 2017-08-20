#include<iostream>
using namespace std;

class Person
{
private:
	int x, y;

public:
	Person();
	~Person();

	void PrintXY()
	{
		x = 5;
		y = 7;
		cout << "x :" << x << "y :" << y;
	}

	void PrintXY(void) const //const 멤버함수에서는 멤버변수의 값 변경 불가
	{
		x = 5; //Error
		y = 7; //Error
		cout << "x :" << x << "y :" << y;
	}
};

int main(void)
{
	const Person person; //const 객체는 const 멤버 함수만 호출 가능
	person.PrintXY(); //const 멤버 함수
}