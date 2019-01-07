/*
Given a 2D array (matrix) inputMatrix of integers, create a function spiralCopy that copies inputMatrix’s values 
into a 1D array in a spiral order, clockwise. 
Your function then should return that array. Analyze the time and space complexities of your solution.
*/

#include<iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

#define ROWS 5
#define COLS 4

enum Direction {
	RIGHT,
	DOWN,
	LEFT,
	UP
};

int a[ROWS][COLS];
int b[ROWS * COLS];

void rowbyrow()
{
	int k = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			b[k++] = a[i][j];
		}
	}
}

void spiralCopy()
{
	int k = 0, i = 0, j = -1;
	int rowmin = 0, rowmax = ROWS-1;
	int colmin = 0, colmax = COLS-1;

	Direction d = RIGHT;
	while (k < ROWS*COLS)
	{
		switch (d)
		{
			case RIGHT:
				if (j < colmax) {
					j++;
				}
				else {
					d = DOWN;
					i++;
					rowmin++;
				}
				break;
			case DOWN:
				if (i < rowmax) {
					i++;
				}
				else {
					d = LEFT;
					j--;
					colmax--;
				}
				break;
			case LEFT:
				if (j > colmin) {
					j--;
				}
				else {
					d = UP;
					i--;
					rowmax--;
				}
				break;
			case UP:
				if (i > rowmin) {
					i--;
				}
				else {
					d = RIGHT;
					j++;
					colmin++;
				}
				break;
		}

		b[k] = a[i][j];
		k++;
	}
}

void initializeMatrix()
{
	srand(time(NULL));
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			a[i][j] = rand() % 99;
			cout << std::setw(4) << a[i][j] << " ";
		}
		cout << "\n";
	}
}

void printMatrix()
{
	for (int k = 0; k < ROWS*COLS; k++)
	{
		cout << b[k] << " ";
	}
}
void main()
{
	initializeMatrix();
	cout << "\nRow by Row:\n";
	rowbyrow();
	printMatrix();

	cout << "\nSpiral:\n";
	spiralCopy();
	printMatrix();

}