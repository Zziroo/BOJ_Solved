// 1330_두 수 비교하기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int A, B;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> A >> B;

	if (A < B)
	{
		cout << "<";
	}
	else if (A > B)
	{
		cout << ">";
	}
	else
	{
		cout << "==";
	}
}
