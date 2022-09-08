#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char word;
	int mo = 0, ja = 0;
	while (cin >>word )
	{
		if (word >= 65 && word <= 90)
		{
			cout << "Check to alphabet\n";
			continue;
		}
		if (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u')
		{
			mo++;
		}
		else // 입력을 알파벳만 받았다는 가정하에
		{
			ja++;
		}
	}

	cout << "모음 : " << mo << "\n";
	cout << "자음 : " << ja << "\n";

	return 0;
}
