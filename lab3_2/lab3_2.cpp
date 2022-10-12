#include <iostream>
using namespace std;
int main()
{
	double x; 
	double a;
	double b; 
	double c; 
	double F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// 1 sposib
	if (x + 10 < 0 && b != 0)
		F = a * (x * x) - c * x + b;
	else
		if (x - 10 > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = (-1) * (x) / (a - c);
	cout << "1) F = " << F << endl;

	// 2 sposib

	if (x + 10 < 0 && b != 0)
		F = a * (x * x) - c * x + b;

	if (x - 10 > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x - 10 > 0 && b == 0) && !(x + 10 < 0 && b != 0))
		F = ((-1) * x) / (a - c);

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}


	
		
		 
