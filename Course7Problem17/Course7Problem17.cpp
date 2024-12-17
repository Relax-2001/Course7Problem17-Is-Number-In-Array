#include <iostream>
#include <iomanip>

using namespace std;


void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

bool IsNumberInMatrix(short  Arr1[3][3], short Rows, short Cols , short & Number)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Arr1[i][j] == Number)
			{
				return true;
			}
		}
	}
	return false;
}


int main()
{

	srand((unsigned)time(NULL));

	short Arr1[3][3] = { {12,11,10} , {5,0,0} , {0,0,0} };

	cout << "\n 3x3 matrix:\n";
	PrintMatrix(Arr1, 3, 3);

	short Number = 0;
	cout << "Enter a number :\n";
	cin >> Number;

	if (IsNumberInMatrix(Arr1 , 3 , 3 , Number))
	{
		cout << "\n Yes, Numer is found\n";
	}
	else
	{
		cout << "\n No, Numer is not found\n";

	}
	


	return 0;
}