#include<iostream>
using namespace std;

/*������ ���� ���޹��*/

//�Ϲ������� �����͸� �� ���� ��ü�� �ּҰ� ���� ���� �ְų�
//���� ���� ��ü�� �ٲپ� �����ؾ� �� ��

//�����ڴ� ������ �����Ͱ� ó������ ������ ������ ������ �˰� �ְ� 
//������ ����� ������� ���� ��(Null �� ���ɼ��� ���� ��)

//������ ->
//������ .


int main(void)
{
	int a = 1;
	int b = 2;

	//Ptr , Ref 
	int *p = &a;
	int &ref = a;
	int &rep; //Error (null�� �ȵ�)

	//����� ����
	cout << ref << endl;
	cout << *p << endl;
	//
	cout << &ref << endl;
	cout << p << endl;
	//
	p = &b;
	ref = b; //�� �ٲ��� ���� , ref�� ������ a�� ����Ŵ

	cout << &ref << endl;
	cout << p << endl;

	getchar();

	return 0;
}


/* �Լ�����             
void func(int &c, int &d)
{

}


int main(void)
{
	int a, b;
	func(a, b); //�Լ����� ���� �� ��ȯ ����

}

/*  ////////////  
void func(int &d)
{
	cout << d;
}

int main(void)
{
	int a = 30;
	int *c = &a;

	func(*c);
	//30 ���
	getchar();
}

*/