#include<iostream>
using namespace std;
#include<locale.h>
#define _USE_MATCH_DEFINES
#include<math.h>
#define PI 3.14159265358979323846
int main()
{
	setlocale(LC_ALL, "Rus");
	int a = 2;
	int b = 3;

	cout << "¬ведите x: " << endl;
	double x;
	cin >> x;
	double ctg = cos(x) / sin(x);
	if (x <= 3)
	{

		cout << "ctg = " << ctg << endl;


	}
	else {
		if (3 < x and x <= 4)
		{

			cout << "a*sin(x) = " << a * sin(x) << endl;
		}
		if (x > 4)
		{
			cout << "-b*cos(x) = " << -b * cos(x) << endl;
		}
	}



}
