#include<iostream>
using namespace std;
class matrix
{
	int rows, cols;
	int **p;
public : 
	matrix()
	{
		rows = cols = 0;
		p = NULL;
	}
	matrix(inr r, int c)
	{
		rows = r;
		cols = c;
		p = (int**)malloc(sizeof(int*)*r);
		for (int i = 0; i < r; i++)
			p[i] = (int*)malloc(sizeof(int)*c);
	}
	void set_matrix_data()
	{
		int i;
		cout << "Enter the number of rows of matrix : ";
		cin >> rows;
		cout << "Enter the number of columns of matrix : ";
		cin >> cols;
		p = (int **)malloc(sizeof(int*)*rows);
		for (int i = 0; i < rows; i++)
		{
			p[i] = (int *)malloc(sizeof(int)*cols);
		}
		cout << "Enter the matrix:\n";
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++) 
			{
				cin >> *(*(p + i) + j);
			}
		}
	}
	void display_matrix()
	{
		cout << "The matrix is below" << endl;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << *(*(p + i) + j) << " ";
			}
			cout << endl;
		}
	}
	friend matrix matrix_multiply(matrix, matrix);
};
matrix matrix_multiply(matrix m1, matrix m2)
{

}