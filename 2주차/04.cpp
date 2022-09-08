#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num, answer = 0;
	cin >> num;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			
			answer += i;
		}
	}
	
	cout << answer;


	
	
	return 0;
}
