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

	void PrintXY(void) const //const ����Լ������� ��������� �� ���� �Ұ�
	{
		x = 5; //Error
		y = 7; //Error
		cout << "x :" << x << "y :" << y;
	}
};

int main(void)
{
	const Person person; //const ��ü�� const ��� �Լ��� ȣ�� ����
	person.PrintXY(); //const ��� �Լ�
}