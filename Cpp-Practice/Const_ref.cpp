#include<iostream>
using namespace std;

int Func(const int& a)
{
	a = 10;
	return a;
}

//함수 호출뒤 리턴 될 때 리턴되는 값이 변형이 이루어 지면 안될 경우 사용하는 듯
// 읽기 전용 함수에만 사용하는 것 같다.
