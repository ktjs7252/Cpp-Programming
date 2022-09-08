#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, M;
	cin >> N >> M;
	cout << "N값은 " << N << ", M값은 " << M << "\n";

	int answer = 0;

	for (int i = 1; i <= N; i++)
	{
		if (i % M == 0)
		{
			answer += i;
		}
	}
	
	cout << answer;


	
	
	return 0;
}
