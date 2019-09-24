#pragma once
#include<iostream>
using namespace std;

#define delimiter "\n-----------------------------------------------\n"

const int ROWS = 3;  //Количество строк двумерного массива
const int COLS = 8; //Количество элементов строки двумерного массива
//Одномерный массив
void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
//Двумерный массив
void FillRand(int Arr[][COLS], const int ROWS, const int COLS);


void Print(int Arr[], const int n);
void Print(double Arr[], const int n);

//Двумерный массив
void Print(int Arr[][COLS], const int ROWS, const int COLS);


void Sort(int Arr[], const int n);

void Sort(double Arr[], const int n);
void Sort(char Arr[], const int n);
//Двумерный массив
void Sort(int Arr[][COLS], const int ROWS, const int COLS);
//void Sort(double Arr[][COLS], const int ROWS, const int COLS);
//void Sort(char Arr[][COLS], const int ROWS, const int COLS);

int Sum(int Arr[], const int n);
double Sum(double Arr[], const int n);
//Двумерный массив
int Sum(int Arr[][COLS], const int ROWS, const int COLS);
double Sum(double Arr[][COLS], const int ROWS, const int COLS);

double Avg(int Arr[], const int n);
double Avg(double Arr[], const int n);
//Двумерный массив
double Avg(int Arr[][COLS], const int ROWS, const int COLS);
double Avg(double Arr[][COLS], const int ROWS, const int COLS);

int minValueIn(int Arr[], const int n);
double minValueIn(double Arr[], const int n);
char minValueIn(char Arr[], const int n);

//Двумерный массив
int minValueIn(int Arr[][COLS], const int ROWS, const int COLS);
double minValueIn(double Arr[][COLS], const int ROWS, const int COLS);
char minValueIn(char Arr[][COLS], const int ROWS, const int COLS);

int maxValueIn(int Arr[], const int n);
double maxValueIn(double Arr[], const int n);
char maxValueIn(char Arr[], const int n);

//Двумерный массив
int maxValueIn(int Arr[][COLS], const int ROWS, const int COLS);
double maxValueIn(double Arr[][COLS], const int ROWS, const int COLS);
char maxValueIn(char Arr[][COLS], const int ROWS, const int COLS);
