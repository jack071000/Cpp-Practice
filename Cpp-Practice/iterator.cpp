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

	vector<int>::iterator iter = v.begin();// ���� �ݺ��� ��������
	//������ �ݺ��ڸ� ����.

	cout << iter[3] << endl; 
	cout << v[3] << endl;

	iter += 2; //���� ����, v.begin���� 2��° ��(30)
	cout << *iter << endl; //������ó�� ���

	//���͸� ��ȸ
	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}

