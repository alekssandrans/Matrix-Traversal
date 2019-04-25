#include<iostream>
using namespace std;

const int N=4;

void printMainDiagonal(int a[][N], int n)
{
	cout<<"Main diagonal:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i][i]<<endl;
	}
}
void printSecondDiagonal(int a[][N],int n)
{
	cout<<"Second diagonal:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i][n-1-i]<<endl;
	}
}
void printMainDiagonalReversed(int a[][N], int n)
{
	cout<<"Main diagonal reversed:"<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i][i]<<endl;
	}
}
void printSecondDiagonalReversed(int a[][N],int n)
{
	cout<<"Second diagonal reversed:"<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i][n-1-i]<<endl;
	}
}

void printElementsAboveTheMainDiagonal(int a[][N],int n)
{
	cout<<"Elements above the main diagonal:"<<endl;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
void printElementsBeneathTheMainDiagonal(int a[][N],int n)
{
	cout<<"Elements beneath the main diagonal:"<<endl;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
void printElementsAboveTheMainDiagonalReversed(int a[][N],int n)
{
	cout<<"Elements above the main diagonal reversed:"<<endl;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=i+1;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
void printElementsBeneathTheMainDiagonalReversed(int a[][N],int n)
{
	cout<<"Elements beneath the main diagonal reversed:"<<endl;
	for(int i=n-1;i>=1;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
void printElementsAboveTheSecondDiagonal(int a[][N],int n)
{
	cout<<"Elements above the second diagonal:"<<endl;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void printElementsBeneathTheSecondDiagonal(int a[][N],int n)
{
	cout<<"Elements beneath the second diagonal:"<<endl;
	for(int i=1;i<n;i++)
	{
		for(int j=n-i;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}


void printMatrixDiagonally(int a[][N],int n)
{
	cout<<"Printing matrix diagonally:"<<endl;
	int i,j;
	for(int k=0;k<n;k++)
	{
		i=0;
		j=k;
		while(j>=0)
		{
			cout<<a[i][j]<<" ";
			i++;
			j--;
		}
		cout<<endl;
	}
	for(int k=1;k<n;k++)
	{
		i=k;
		j=n-1;
		while(i<n)
		{
			cout<<a[i][j]<<" ";
			i++;
			j--;
		}
		cout<<endl;
	}
	
}
void printMatrixDiagonallyFromAbove(int a[][N],int n)
{
	cout<<"Printing matrix diagonally:"<<endl;
	int i,j;
	for(int k=0;k<n;k++)
	{
		i=k;
		j=0;
		while(i>=0)
		{
			cout<<a[i][j]<<" ";
			i--;
			j++;
		}
		cout<<endl;
	}
	for(int k=1;k<n;k++)
	{
		i=n-1;
		j=k;
		while(j<n)
		{
			cout<<a[i][j]<<" ";
			i--;
			j++;
		}
		cout<<endl;
	}
	
} 
void printMatrixDiagonallyReversed(int a[][N],int n)
{
	cout<<"Printing matrix diagonally reversed:"<<endl;
	int i,j;
	for(int k=n-1;k>=1;k--)
	{
		i=n-1;
		j=k;
		while(j<n)
		{
			cout<<a[i][j]<<" ";
			i--;
			j++;
		}
		cout<<endl;
	}
	for(int k=n-1;k>=0;k--)
	{
		i=k;
		j=0;
		while(i>=0)
		{
			cout<<a[i][j]<<" ";
			i--;
			j++;
		}
		cout<<endl;
	}
	
}

bool areRowsEqual(char a[][N], int n,int row1, int row2)
{
	for(int i=0;i<n;i++)
	{
		if(a[row1][i]!=a[row2][i])
			return false;
	}
	return true;
}
bool isSymHor(char a[][N],int n)
{
	for(int i=0;i<n/2;i++)
	{
		if(!areRowsEqual(a,n,i,n-1-i))
			return false;
	}
	return true;
}
bool areColsEqual(char a[][N], int n,int col1,int col2)
{
	for(int i=0;i<n;i++)
	{
		if(a[i][col1]!=a[i][col2])
			return false;
	}
	return true;
}
bool isSymVert(char a[][N],int n)
{
	for(int i=0;i<n/2;i++)
	{
		if(!areColsEqual(a,n,i,n-1-i))
			return false;
	}
	return true;
}
bool isSymMainDiagonal(char a[][N],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
				return false;
		}
	}
	return true;
}
bool isSymSecondDiagonal(char a[][N],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[i][j]!=a[n-1-j][n-1-i])
				return false;
		}
	}
	return true;
}

int main()
{	
	int a[N][N]={{1,2,3,4},
				 {5,6,7,8},
				 {9,10,11,12},
				 {13,14,15,16}};
	printMatrixDiagonally(a,N);
	cout<<endl;
		
	return 0;
	
}
