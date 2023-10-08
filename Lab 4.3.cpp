#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "__________" << endl;
	cout << "|" << setw(7) << setprecision(2) << "F" << " |" << endl;
	cout << "__________" << endl;
	cout << fixed;
	x = xp;
	F = x * x * std::sin(x / 2);
	while (x <= xk)
	{
		if (x < 5 && c != 0)
			F = -a * x * x - b;
		else
			if (x > 5 && c == 0)
				F = (x - a) / x;
			else
				F = -x / c;
		cout << "|" << setw(7) << setprecision(2) << x << " |" << endl;
		
			x += dx;
	}
	cout << "__________" << endl;
	return 0;
}
