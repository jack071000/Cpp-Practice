#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> v;

	for (int i = 10; i<=50; i+=10)
	{
		v.push_back(i);
	}

	vector<int>::iterator iter = v.begin();// 벡터 반복자 시작지점
	//벡터의 반복자를 만듬.

	cout << iter[3] << endl; 
	cout << v[3] << endl;

	iter += 2; //연산 가능, v.begin에서 2번째 값(30)
	cout << *iter << endl; //포인터처럼 사용

	//벡터를 순회
	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}

