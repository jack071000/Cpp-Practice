#include<iostream>
using namespace std;

/*참조에 의한 전달방식*/

//일반적으로 포인터를 쓸 때는 객체의 주소가 없을 수도 있거나
//여러 개의 객체를 바꾸어 참조해야 할 때

//참조자는 참조할 포인터가 처음부터 끝까지 존재할 것임을 알고 있고 
//참조의 대상이 변경되지 않을 때(Null 일 가능성이 없을 때)

//포인터 ->
//참조자 .


int main(void)
{
	int a = 1;
	int b = 2;

	//Ptr , Ref 
	int *p = &a;
	int &ref = a;
	int &rep; //Error (null은 안됨)

	//결과값 같음
	cout << ref << endl;
	cout << *p << endl;
	//
	cout << &ref << endl;
	cout << p << endl;
	//
	p = &b;
	ref = b; //값 바뀌지 않음 , ref는 여전히 a를 가리킴

	cout << &ref << endl;
	cout << p << endl;

	getchar();

	return 0;
}


/* 함수에서             
void func(int &c, int &d)
{

}


int main(void)
{
	int a, b;
	func(a, b); //함수에서 실제 값 변환 가능

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
	//30 출력
	getchar();
}

*/