#include"Functions.h"

double Avg(int Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

double Avg(double Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

double Avg(int Arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS*COLS);
}

double Avg(double Arr[][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS*COLS);
}
