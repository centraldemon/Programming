#include <iostream>
#include <deque>

using namespace std;

void main()
{
	int n, k;
	cout << "Input down frame: ";
	cin >> n;
	cout << "Input upper frame: ";
	cin >> k;
	float y = 0;
	for(int i=n;i<=k;i++)
	{
		y += (i - 2) / (pow(i, 2) + 16);
	}
	cout << "Rezult 1: " << y << endl;
	y = 1;
	for(int i=2;i<=21;i++)
	{
		y *= pow(-1, i)*(i + 3) / (i + 1);
	}
	cout << "Rezult 2: " << y << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << "Input down frame: ";
	cin >> n;
	cout << "Input upper frame: ";
	cin >> k;
	float d = 1;
	int c = 0;
	for(int i=n;i<=k;i++)
	{
		d *= i;
		c++;
	}
	float s = 1.0 / (float)c;
	cout << "Rezult: " << pow(d,s) << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << "Input first value: ";
	double x, dx,cx;
	cin >> x;
	cout << "Input difference: ";
	cin >> dx;
	double sum = 0;
	for(int i=3;i<=10;i++)
	{
		cx = x;
		for(int j=0;j<i;j++)
		{
			cx =cx+ dx;
			cx = round(cx*100)/100.;
		}
		
		sum += (sqrt(abs(cx + 1.05)) - sqrt(abs(cx))) / (2 * cx + 6.25);
	}
	cout << "Rezult 1: " << sum << endl;
	sum = 0;
	int i = 3;
	while(i<=10)
	{
		cx = x;
		for (int j = 0; j<i; j++)
		{
			cx += dx;
		}
		sum += (sqrt(abs(cx + 1.05)) - sqrt(abs(cx))) / (2 * cx + 6.25);
		i++;
	}
	cout << "Rezult 2: " << sum << endl;
	sum = 0;
	i = 3;
	do
	{
		cx = x;
		for (int j = 0; j<i; j++)
		{
			cx += dx;
		}
		sum += (sqrt(abs(cx + 1.05)) - sqrt(abs(cx))) / (2 * cx + 6.25);
		i++;
	} while (i <= 10);
	cout << "Rezult 3: " << sum << endl;
}