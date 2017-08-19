#include<iostream>
using namespace std;


int main()
{
	int count;
	int *team;
	int a, b, c, d;
	cin >> count;
	
	team = new int [count+1];

	for (int i = 0; i < count*(count - 1) / 2; i++)
	{
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;

		if (c == d)
		{
			team[a] += 1;
			team[b] += 1;
		}
		else {
			if (c > d) 
				team[a] += 3;
			else
				team[b] += 3;
		}

	}


	for (int i = 1; i <= count; i++) {
		int r = 1;
		for (int j = 1; j <= count; j++)
			if (team[i] < team[j])
				r += 1;
		cout << r << endl;
	}

	return 0;

}