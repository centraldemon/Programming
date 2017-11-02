#include <iostream>

using namespace std;



void main()
{
	double x, eps,y,y1;
	int n;
	cout << "Input x: ";
	cin >> x;
	y = x;
	cout << "Input n: ";
	cin >> n;
	cout << "Input eps: ";
	cin >> eps;
	y1 = y;
	y = pow(n, -1)*(x / pow(y, n - 1) + (n - 1)*y);
	while(abs(y-y1)>eps)
	{
		y1 = y;
		y = pow(n, -1)*(x / pow(y, n - 1) + (n - 1)*y);
	}
	cout << "pow(x,1/" << n << ")=" << y << endl;
	//-------------------------------------------------------------------------
	cout << "Input x: ";
	cin >> x;
	double x1;
	cout << "Input eps: ";
	cin >> eps;
	x1 = x;
	x = x - (exp(x) + x) / (exp(x) + 1);
	while (abs(x - x1) > eps)
	{
		x1 = x;
		x = x - (exp(x) + x) / (exp(x) + 1);
	}
	cout << "Rezult: " << x << endl;
	//---------------------------------------------------
	cout << "Input x: ";
	cin >> x;
	cout << "Input eps: ";
	cin >> eps;
	double sum = 0;
	int i = 0;
	while (abs(x1) > eps) {
		x1 = pow(x, i);
		sum += pow(x, i);
		i++;
	}
	cout << "Rezult: " << sum << endl;

}