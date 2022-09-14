#include <iostream>
#include <cstdlib>
#include <random>
using namespace std;

std::random_device rd;
std::mt19937_64 mersenne(rd());
std::uniform_int_distribution<> dice(1, 6);


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a = dice(mersenne);
	int b = dice(mersenne);
	char word;
	int answer,sum;
	cout << "산수 문제를 자동으로 출제합니다.\n";
	cout << a << " " << b << "\n";
	
	cout << "연산자 입력하기(+, -, *, /)\n";
	cin >> word;

	cout << "결과 입력하기\n";
	cin >> answer;

	if (word == '+')
	{
		sum = a + b;
	}
	else if (word == '-')
	{
		sum = a - b;
	}
	else if (word == '*')
	{
		sum = a * b;
	}
	else if (word == '/')
	{
		sum = a / b;
	}

	if (answer == sum)
	{
		cout << "맞았습니다.\n";
	}
	else
	{
		cout << "틀렸습니다.\n";
	}


	return 0;
}
