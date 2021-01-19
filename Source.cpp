#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	double a = 5.45;
	int n = 5;
	double mult = 1.0;
	int q;
	
	double x[5]{ -4, 2.1, -2, 4, -3 };
	double s = 0;
	
	for (int i = 0; i <=n ; i++)
	{

		s = s+(  pow(x[i],2) / i + 1);
		
		cout << "s =" << s << endl;
	}

	int xep = 2.5;
	

	/*
	float y[5]{ 2.1, 7.7,-4.9,5,9 };
	for (int j= 0; j < n; j++)
	{
		mult = mult * (y[j] / (pow(j, 2) + 1));

	}
	
	
	q = (s + a)*mult;*/

	cout << "s ="<<s << endl;
	cout << pow(1.5, 2);
	/*cout <<"q = "<<q<< endl;*/
	system("pause");

}