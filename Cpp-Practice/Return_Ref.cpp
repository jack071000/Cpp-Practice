#include<iostream>
using namespace std;

//참조자를 반환하면 실제 객체 그 자체를 반환
int& Func1(int &a)
{
	a++;
	return a;
}

//변수를 반환하게 되면 객체를 복사된 것(임시변수)이 반환됨
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
	//num1의 값이 num2에 복사되는 것 (값의 복사가 이루어짐)
	//num1 과 num2는 별개의 변수가 된다.

	int num3;
	int &num4 = Func1(num3);
	//num1 과 num2는 동일한 변수


	/*Func2*/

	int ber1;
	int ber2 = Func2(ber1);
	//ber2에서 Func2가 반환한 임시변수의 값이 복사되어 저장
	//ber1 과 ber2는 애초에 다른 변수

	int ber3;
	int& ber4 = Func2(ber3);//애초에 컴파일 에러


}