#include<iostream>
using namespace std;

//�����ڸ� ��ȯ�ϸ� ���� ��ü �� ��ü�� ��ȯ
int& Func1(int &a)
{
	a++;
	return a;
}

//������ ��ȯ�ϰ� �Ǹ� ��ü�� ����� ��(�ӽú���)�� ��ȯ��
int Func2(int &a)
{
	a++;
	return a;
}

int main(void)
{
	/*Func 1 */

	int num1;
	int num2 = Func1(num1);
	//num1�� ���� num2�� ����Ǵ� �� (���� ���簡 �̷����)
	//num1 �� num2�� ������ ������ �ȴ�.

	int num3;
	int &num4 = Func1(num3);
	//num1 �� num2�� ������ ����


	/*Func2*/

	int ber1;
	int ber2 = Func2(ber1);
	//ber2���� Func2�� ��ȯ�� �ӽú����� ���� ����Ǿ� ����
	//ber1 �� ber2�� ���ʿ� �ٸ� ����

	int ber3;
	int& ber4 = Func2(ber3);//���ʿ� ������ ����


}