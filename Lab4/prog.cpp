#include <iostream>

using namespace std;


void main()
{
	float max1, min1, min2, dif1, dif2;

	cout << "Input max: ";
	cin >> max1;
	cout << "Input min for 1: ";
	cin >> min1;
	cout << "Input min for 2: ";
	cin >> min2;
	cout << "Input difference 1: ";
	cin >> dif1;
	cout << "Input difference 2:";
	cin >> dif2;
	cout << "Input variant: " << endl;
	int a;
	cout << "Input 1 or 2:";

	bool menu = true;
	while (menu)
	{
		cin >> a;
		switch (a)
		{
		case 1:
			menu = false;


			while (min1 <= max1)
			{
				cout << "x: " << min1 << " y: " << (pow(min1, 3) + 2 * min1) / (3 * cos(pow(min1, 0.5)) + 1) << endl;
				min1 += dif1;
			}

			break;
		case 2:
			menu = false;


			for (int i = 0; i < 7; i++)
			{
				cout << "x: " << min2 << " y: " << (pow(min2, 3) + 2 * min2) / (3 * cos(pow(min2, 0.5)) + 1) << endl;
				min2 += dif2;
			}


			break;
		default:
			cout << "Wrong choice" << endl;
			cout << "Try again:" << endl;
		}
	}
	cout << "-------------------------------------------------------------------------" << endl;



	float max, desmax, min, dif;
	cout << "Input maximum: ";
	cin >> max;
	cout << "Input mid maximum: ";
	cin >> desmax;
	cout << "Input minimum: ";
	cin >> min;
	cout << "Input difference: ";
	cin >> dif;
	cout << "Input variant: " << endl;

	cout << "Input 1 or 2:";
	menu = true;
	while (menu)
	{
		cin >> a;
		switch (a)
		{
		case 1:
			menu = false;
			while (min <= desmax)
			{

				cout << "x: " << min << " y: " << (3.14 / 2 - atan(min)) + exp(min) << endl;
				min += dif;
			}
			break;

		case 2:
			menu = false;
			while (desmax <= max)
			{
				cout << "x: " << desmax << " y: " << log(desmax + sin(desmax)) << endl;
				desmax += dif;
			}
			break;
		default:
			cout << "Wrong choice" << endl;
			cout << "Try again:" << endl;
		}

	}

	cout << "------------------------------------------------------------------" << endl;

	float minx, miny, maxx, maxy, z;
	cout << "Input maximum x:";
	cin >> maxx;
	cout << "Input minimum x:";
	cin >> minx;
	cout << "Input maximum y:";
	cin >> maxy;
	cout << "Input minimum y:";
	cin >> miny;
	const float cminy = miny;
	while (minx <= maxx)
	{
		miny = cminy;
		while (miny <= maxy)
		{
			z = tan(5 * minx) - sin(miny);
			cout << "x: " << minx << " y: " << miny << " z: " << z << endl;
			miny += 0.1;
		}
		minx += 0.2;
	}

}