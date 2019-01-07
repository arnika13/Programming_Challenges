#include<iostream>
using namespace std;

#define ROWS 5
#define COLS 5

class Island
{
	bool arr[ROWS][COLS];
	bool visited[ROWS][COLS];

public:
	Island()
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = false;
				visited[i][j] = false;
			}
		}
	}

	void PrintMatrix()
	{
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
		cout << endl;	
	}

	void setMatrix()
	{
			arr[0][1] = true;
			arr[0][3] = true;
			arr[1][2] = true;
			arr[1][3] = true;
			arr[1][4] = true;
			arr[2][0] = true;
			arr[2][3] = true;
			arr[3][1] = true;
			arr[3][2] = true;
			arr[4][0] = true;
			arr[4][2] = true;
			arr[4][4] = true;
	}

	/** 
		Check for adjacent neightbors along row and column and
		set the corresponding cell positions to visited = true
	*/
	void searchIsland(int i, int j)
	{	
		//checking down neighbor
		if (i + 1 < ROWS && arr[i + 1][j] == true && !visited[i + 1][j]) {
			visited[i + 1][j] = true;
			searchIsland(i + 1, j);
		}

		//checking up neighbor
		if (i - 1 >= 0 && arr[i - 1][j] == true && !visited[i-1][j]) {
			visited[i - 1][j] = true;
			searchIsland(i - 1, j);
		}

		//checking right  neighbor
		if (j + 1 < COLS && arr[i][j + 1] == true && !visited[i][j+1]) {
			visited[i][j + 1] = true;
			searchIsland(i, j + 1);
		}
	
		//checking left neighbor
		if (j - 1 >= 0 && arr[i][j - 1] == true && !visited[i][j-1]) {
			visited[i][j - 1] = true;
			searchIsland(i, j - 1);
		}
	}

	int getNumberofIslands()
	{
			int count = 0;
		
			if (arr == 0 || ROWS == 0 || COLS == 0)
				return 0;
	

			for (int i = 0; i < ROWS; i++) {
				for (int j = 0; j < COLS; j++) {
					if (arr[i][j] && !visited[i][j])
					{
						visited[i][j] = true;
						searchIsland(i, j);
						count++;
					}
				}
			}
			return count;
	}

};

void main() {
	
	Island obj;
	obj.PrintMatrix();
	obj.setMatrix();
	obj.PrintMatrix();
	cout<<"The number of Islands are: "<<obj.getNumberofIslands()<<endl;

}

