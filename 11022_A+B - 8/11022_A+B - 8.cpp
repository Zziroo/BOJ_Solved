// 11022_A+B - 8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int A = 0;
		int B = 0;

		cin >> A >> B;

		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << "\n";
	}
}
