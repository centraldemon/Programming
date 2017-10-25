#include <iostream>
using namespace std;


void main()
{
	float x,y;
	cout << "Input x: ";
	cin >> x;
	cout << "First answer: ";
	if(x>0 && x<=1)
	{
		y = atan(x - 7);
		cout << y << endl;
	}
	else
	{
		if(x<=0)
		{
			y = exp(x + 4);
			cout << y << endl;
		}
		else
		{
			if(x>1 && x<20.4)
			{
				y = 2 * pow(x, 3)*sqrt(pow(x, 2) + 30);
				cout << y << endl;
			}
			else
			{
				cout << "Wrong number" << endl;
			}
		}
	}
	cout << "------------------------------------------------------------------------------" << endl;
	float l, k;
	cout << "Input l: ";
	cin >> l;
	cout << "Input k: ";
	cin >> k;
	float t = (2 * l + 3 * k) / l;
	float s = (2 * l - 3 * k) / 9;
	float a = l*k - 8.3;
	cout << "t: " << t << " s: " << s << " a: " << a << endl;
	cout << "Rezult 2: " << endl;
	cout << "x=min(t,s,a)=";
	if (a != t && s != t && a != s)
	{
	}
	else
	{
		cout << "Some of arguments are equal" << endl;
	}
	if (t <= s && t <= a)
	{
		cout << t << endl;
	}
	else
	{
		if (s <= t && s <= a)
		{
			cout << s << endl;
		}
		else
		{
			if (a <= t && a <= s)
			{
				cout << a << endl;
			}
		}
	}
	cout << "--------------------------------------------------------------------" << endl;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	if(x<=0 && x>=-3 && y>=0 && y<=3)
	{
		if((pow(0-x,2)+pow(0-y,2))<=9 && (pow(0 - x, 2) + pow(0 - y, 2)) >= 4)
		{
			cout << "Point is in this sector" << endl;
		}
		else
		{
			cout << "Point isn't in this sector" << endl;
		}
	}
	else
	{
		cout << "Point isn't in this sector" << endl;
	}
	
	
}