// 10872_팩토리얼.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;

int Factorial(int num)
{
	if (0 == num)
	{
		return 1;
	}

	if (1 == num)
	{
		return 1;
	}

	return num * Factorial(num - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	cout << Factorial(N);
}