#include < iostream >
using namespace std;

//지역변수를 ref로 리턴하지 말자.


int& function()
{
	int val = 10; // 지역변수가 원본이 되었다
	return val;
}

int& function2() // 임의로 추가한 두번 째 함수
{
	int val2 = 20;
	return val2;
}

void main()
{
	int &ref = function(); // 레퍼런스 변수 ref의 원본은 function()의 지역변수이다
	int &ref2 = function2();

	cout << ref << endl;
}

//출력은 20이 된다.
/*
ref는 val을 가리키고 있었는데
val이 없어지고 function2 가 실행되었을 때
val 이 있던 주소에 val2 가 생겨서 ref는 val2의 값인 20을 가진다.

*/


//출처: http://snbosoft.tistory.com/entry/제2장-C-기본-Reference를-return하는-함수의-정의 [Snbosoft]