#include < iostream >
using namespace std;

//���������� ref�� �������� ����.


int& function()
{
	int val = 10; // ���������� ������ �Ǿ���
	return val;
}

int& function2() // ���Ƿ� �߰��� �ι� ° �Լ�
{
	int val2 = 20;
	return val2;
}

void main()
{
	int &ref = function(); // ���۷��� ���� ref�� ������ function()�� ���������̴�
	int &ref2 = function2();

	cout << ref << endl;
}

//����� 20�� �ȴ�.
/*
ref�� val�� ����Ű�� �־��µ�
val�� �������� function2 �� ����Ǿ��� ��
val �� �ִ� �ּҿ� val2 �� ���ܼ� ref�� val2�� ���� 20�� ������.

*/


//��ó: http://snbosoft.tistory.com/entry/��2��-C-�⺻-Reference��-return�ϴ�-�Լ���-���� [Snbosoft]