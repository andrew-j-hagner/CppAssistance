#include <iostream>

using namespace std;

int main()
{
	const double RATE_1 = .10;
	const double RATE_2 = .20;

	int recommended_tithe = 0;

	double income;

	cout << "Please enter your income:" << endl;
	cin >> income;
	cout << "Thank you!" << endl;

	if (income <= 40000)
	{
		cout << "No tithes suggested, thank you for your support and please pray for us!" << endl;
		return 0;
	}

	if (income <= 80000)
	{
		recommended_tithe = RATE_1 * income;
	}
	else
	{
		recommended_tithe = RATE_2 * income;
	}

	cout << "Your total suggested tithe for the year is" << " " << recommended_tithe << endl;
	cout << "Thank you for your donation!" << endl;

	return 0;
}