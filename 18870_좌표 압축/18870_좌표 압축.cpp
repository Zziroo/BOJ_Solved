// 18870_좌표 압축.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> arr;
vector<int> sortArr;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	arr.resize(N);
	sortArr.resize(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
		sortArr[i] = arr[i];
	}

	sort(sortArr.begin(), sortArr.end());

	sortArr.erase(unique(sortArr.begin(), sortArr.end()), sortArr.end());

	for (int i = 0; i < N; ++i)
	{
		auto it = lower_bound(sortArr.begin(), sortArr.end(), arr[i]);

		cout << it - sortArr.begin() << " ";
	}
}
