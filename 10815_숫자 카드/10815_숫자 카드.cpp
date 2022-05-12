// 10815_숫자 카드.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N, M;
bool haveCard[20'000'001];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> N;

	int cardNumber = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> cardNumber;
		haveCard[cardNumber + 10'000'000] = true;
	}

	cin >> M;

	for (int i = 0; i < M; ++i)
	{
		cin >> cardNumber;
		cout << haveCard[cardNumber + 10'000'000] << " ";
	}
}