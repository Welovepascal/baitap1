#include <iostream>
#include <string>

using namespace std;

bool prc(int a) {
	for (int y = 1; y < a; y++) {
		int x = a / (y + 1) - y / 2;
		if ((y + 1)*(x + (float)y / 2) == a) {
			cout << a << " = ";
			for (int j = x; j < x + y; j++) {
				cout << j << " + ";
			}
			cout << x + y << endl;
			return 1;
		}
	}
	return 0;
}

int main() {
	int N;
	cin >> N;
	while (N--) {
		int a;
		cin >> a;
		if (!prc(a))
			cout << "IMPOSSIBLE" << endl;
	}

	return 0;
}

//Khác
#include <iostream>

using namespace std;
int tong(int a, int b )
{
    int s =0;
	for (int i=a; i<=b; i++)
	{
		s= s+i;
	}
	return s; 
}
void print(int a, int b)
{
	for (int i= a; i<=b; i++)
	{
		cout << i <<" ";
	}
}
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i<=int(n/2); i++)
	{
		for (int j = i+1; j<=int(n/2)+1; j++)
		{
			if (tong(i,j) == n)
			{
				print(i,j);
				cout <<"\n" ;
				break;
			}
			else 
			{
				sum++;
			}
		}
	}
    if (sum == tong(1,int(n/2)))
    {
    	cout <<"IMPOSSIBLE" <<endl;
	}
	return 0;
}
