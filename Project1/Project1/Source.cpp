#include <iostream>
#include<ctime>
using namespace std;

/*«аполнить массив уникальными случайными числами*/

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];
	
	bool alreadyThere;

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRanomValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRanomValue)
			{
				alreadyThere = true;
				break;
			}
		}

		if (!alreadyThere)
		{
			arr[i] = newRanomValue;
			i++;
			
		}
		
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	int min = arr[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	
	cout << "—амое малое число массива равно " << min << endl;
	

	
	system("pause");
}



