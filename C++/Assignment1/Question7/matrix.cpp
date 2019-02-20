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
	matrix(int r, int c)
	{
		rows = r;
		cols = c;
		p = (int**)malloc(sizeof(int*)*r);
		for (int i = 0; i < r; i++)
			p[i] = (int*)malloc(sizeof(int)*c);
	}
	void set_matrix_data()
	{
		int i, j;
		cout << "Enter the number of rows of matrix : ";
		cin >> rows;
		cout << "Enter the number of columns of matrix : ";
		cin >> cols;
		p = (int **)malloc(sizeof(int*)*rows);
		for ( i = 0; i < rows; i++)
		{
			p[i] = (int *)malloc(sizeof(int)*cols);
		}
		cout << "Enter the matrix:\n";
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < cols; j++) 
			{
				cin >> *(*(p + i) + j);
			}
		}
	}
	void display_matrix()
	{
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
	int sum = 0, i, j, k;
	matrix prod;
	if (m1.cols != m2.rows)
		cout << "Multiplication of the given matrices is not possible" << endl;
	else
	{
		prod = matrix(m1.rows, m2.cols);
		for (i = 0; i < prod.rows; ++i)
		{
			for (j = 0; j < prod.cols; ++j)
			{
				for (k = 0; k < m1.cols; ++k)
				{
					sum = sum + (*(*(m1.p + i) + k))*(*(*(m2.p + k) + j));
				}
				*(*(prod.p + i) + j) = sum;
				sum = 0;
			}
		}
	}
	return prod;
}
int main()
{
	int a;
	matrix m1, m2, p;
	m1.set_matrix_data();
	m2.set_matrix_data();
	p = matrix_multiply(m1, m2);
	cout << "The resultant matrix is" << endl;
	p.display_matrix();
	cin >> a;
	return 0;
}