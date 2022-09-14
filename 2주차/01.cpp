#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char word;
	int mo = 0, ja = 0;

	cout << "영문자를 입력하고 ctrl+z를 치세요\n";

	while (cin >> word)
	{
		if (word < 97 || word>122)
		{
			cout << "Check to alphabet\n";
			continue;
		}
		switch (word)
		{
		case 'a': case 'i':  case 'e':  case 'o':  case 'u':
			mo++;
			break;
		default:
			ja++;
		}
	}

	cout << "모음 : " << mo << "\n";
	cout << "자음 : " << ja << "\n";

	return 0;
}
