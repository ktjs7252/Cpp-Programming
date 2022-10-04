#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>
#include <string>
#include <vector>
#include <ctime>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//115p 1번
	 
	string a, b;
	cout << "첫번쨰 문자열 : ";
	cin >> a;
	cout << "두번쨰 문자열 : ";
	cin >> b;
	if (a != b)
	{
		cout << "2개의 문자열은 다릅니다.\n";
	}




	////10번

	int counting = 0;
	for (int i = 1; i < 100; i++)
	{
		for (int j = 1; j < 100; j++)
		{
			for (int k = 1; k < 100; k++)
			{
				if (i * i + j * j == k * k)
				{
					cout << i << " " << j << " " << k << "\n";
					counting++;
				}
			}
		}
	}

	cout << "갯수는 : " << counting;

	//16번

	srand((unsigned int)time(NULL));

	int money = 50;
	int finish = 250;
	int win = 0;
	int counting = 0;
	int bet = 0;
	int sign = 0;


	cout << "초기 금액 " << money << "\n";
	cout << "목표 금액 " << finish << "\n";

	while (1)
	{
		
		if ((double)rand() / RAND_MAX < 0.5)
		{
			money++;
			win++;
		}
		else {
			money--;
		}
		bet++;

		if (money <= 0)
		{
			cout << "돈이 없어짐\n";
			break;
		}
		if (money >= finish)
		{
			cout << "목표금액에 달성함\n";
			break;
		}
	}
	double t = (double)win / bet;
	cout << "이긴 확률 " << t*100 << "\n";
	cout << "베팅 횟수 " << bet << "\n";

	return 0;
}
