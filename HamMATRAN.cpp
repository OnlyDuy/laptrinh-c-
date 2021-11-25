#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void nhap_matran (int a[][30], int &m, int &n)
{
	  cout<<"Nhap so hang ";  cin>>m;
    cout<<"Nhap so cot ";   cin>>n;
 
    for (int i=1;i<=m;i++)
    for (int j=1;j<=n;j++)
   {   cout<<"a["<<i<<"]["<<j<<"]= ";
       cin>>a[i][j];
  }
  
   }

void xuat_matran (int a[][30], int m,int n)
{    for (int i=1;i<=m;i++)
    {
    for (int j=1;j<=n;j++)
      cout<<setw(5)<<a[i][j];
      cout<<"\n";  
}
    }
    
int main ()
{
	int a[30][30], m , n;
	nhap_matran (a,m,n);
    xuat_matran (a,m,n);
	return 0;
	}
