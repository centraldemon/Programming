#include <iostream>

using namespace std;


void main()
{
	float e, pi;
	float a;
	float b;
	float x,y;
	cout << "Input a:" << endl;
	cin >> a;
	cout << "Input b:" << endl;
	cin >> b;
	cout << "Input e: " << endl;
	cin >> e;
	cout << "Input pi: " << endl;
	cin >> pi;
	cout << "First answer:" << endl;
	
	x = pow(sin(pow(e, -1*b)), 4) + abs(a*b);
	y = log(abs(a - b)) + log10(pi / a);
	float r = 1/tan((x + y) / pow(x - y, 2)) + 1.3;
	cout << "Rezult 1: " << r<<" x: "<<x<<" y: "<<y<<endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "Input first katet: ";
	cin >> a;
	cout << "Input second katet: ";
	cin >> b;
	cout << "Second answer: " << endl;
	cout << "Square of this triangle: " << 0.5*a*b << endl;

	
}