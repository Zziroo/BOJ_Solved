// 2525_오븐 시계.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int A, B;
int C;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> A >> B;
	cin >> C;

	B += C;

	while (B >= 60)
	{
		++A;
		B -= 60;

		if (A >= 24)
		{
			A = 0;
		}
	}

	cout << A << " " << B;
}
