// 11720_숫자의 합.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	int sumNum = 0;

	for (int i = 0; i < N; ++i)
	{
		char cha = 0;

		cin >> cha;

		int temp = cha - '0';

		sumNum += temp;
	}

	cout << sumNum;
}