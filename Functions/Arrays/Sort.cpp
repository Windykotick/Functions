#include"Functions.h"

void Sort(int Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int Buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = Buffer;
			}
		}
	}
}

void Sort(double Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double Buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = Buffer;
			}
		}
	}
}

void Sort(char Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int Buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = Buffer;
			}
		}
	}
}

void Sort(int Arr[][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (Arr[j] < Arr[i])
					{
						int Buffer = Arr[i][j];
						Arr[i][j] = Arr[i][j];
						Arr[i][j] = Buffer;

					}
				}
			}
		}
	}
}