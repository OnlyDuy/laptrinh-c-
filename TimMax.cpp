# include <iostream>
# include <iomanip>
using namespace std;
#define MAX 100

void nhapmang (int a[][MAX] , int &n, int &m) 
{
	// nhap so dong
	do 
	{
		cout << " nhap so dong: ";
		cin >> n;
		
		if (n <= 1 || n > MAX)
		{
			cout << " So dong khong hop le. Vui long kiem tra lai!! ";
		}
	}
	while (n <= 1 || n > MAX);
	
	
	// nhap so cot
		do 
	{
		cout << " nhap so cot: ";
		cin >> m;
		
		if (m <= 1 || m > MAX)
		{
			cout << " So cot khong hop le. Vui long kiem tra lai!! ";
		}
    }
	while (m <= 1 || m > MAX);
	
	
	for (int i = 0; i < n; i++)
	{
		for (int j =0; j < m; j++)
		{
		  cout << " Nhap phan tu thu a["<<i<<"]["<<j<<"] la: ";
		  cin >> a[i][j];
	    }
    }
}

void xuatmang (int a[][MAX], int n, int m)
{
		for (int i = 0; i < n; i++)
	{
		for (int j =0; j < m; j++)
		
		  cout << setw(5) << a[i][j];
          cout << "\n";  
	    
    }
}

void timMAX (int a[][MAX], int n, int m)
{
	int max = a[0][0];
		for (int i = 0; i < n; i++)
	{
		for (int j =0; j < m; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
	    
    }
    cout <<endl;
    cout << "phan tu lon nhat cua ma tran la: "<< max;
}

int main ()
{
	int a[MAX][MAX], n, m;
	nhapmang (a, n, m);
	xuatmang (a, n, m);
	timMAX (a, n, m);
	return 0;
}
