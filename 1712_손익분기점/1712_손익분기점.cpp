// 1712_손익분기점.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int A;
int B;
int C;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> A >> B >> C;

	int count = 0;

	if ((C - B) <= 0)
	{
		cout << -1;
	}
	else
	{
		count = (A / (C - B)) + 1;

		cout << count;
	}
}
