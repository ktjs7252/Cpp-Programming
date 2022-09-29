#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int counting=0;
	for(int i=1;i<100;i++)
	{
		for(int j=1;j<100;j++)
		{
			for(int k=1;k<100;k++)
			{
				if(i*i + j*j ==k*k)
				{
					cout<<i<<" "<<j<<" "<<k<<"\n";
					counting++;
				}
			}
		}
	}
	
	cout<<"갯수는 : "<<counting; 
	
	return 0;
}
