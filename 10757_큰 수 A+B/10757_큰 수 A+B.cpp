// 10757_큰 수 A+B.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

char A[10'002];
char B[10'002];
char result[10'003];

int MaxIndex(char arr[])
{
	int index = 0;

	while ('\0' != arr[index])
	{
		++index;
	}

	return index;
}

void SwapIndex(char& lhs, char& rhs)
{
	int temp = lhs;
	lhs = rhs;
	rhs = temp;
}

void ReverseArray(char arr[], int size)
{
	int start = 0;
	int end = size - 1;
	int mid = (start + end) / 2;

	int index = 0;

	while (index <= mid)
	{
		SwapIndex(arr[index], arr[end - index]);

		++index;
	}
}

void SumArray(int maxLength)
{
	int carry = 0;
	int length = maxLength;

	for (int i = 0; i < length; ++i)
	{
		int sum = (A[i] - '0') + (B[i] - '0') + carry;

		if (sum < 0)
		{
			sum += '0';
		}

		if (sum > 9)
		{
			carry = 1;
		}
		else
		{
			carry = 0;
		}

		result[i] = sum % 10 + '0';
	}

	if (1 == carry)
	{
		result[length] = '1';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> A >> B;

	int maxAIndex = MaxIndex(A);
	int maxBIndex = MaxIndex(B);

	int maxLength = maxAIndex > maxBIndex ? maxAIndex : maxBIndex;

	ReverseArray(A, maxAIndex);
	ReverseArray(B, maxBIndex);

	SumArray(maxLength);

	int maxResultIndex = MaxIndex(result);

	ReverseArray(result, maxResultIndex);

	for (int i = 0; i < maxResultIndex; ++i)
	{
		cout << result[i];
	}
}
