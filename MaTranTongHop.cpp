#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{ 
    int i,j,m,n;
    float a[100][100], Tich, Tong, TBC, Dem;
    cout<<"Nhap so hang ";  cin>>m;
    cout<<"Nhap so cot ";   cin>>n;
 
    for (i=1;i<=m;i++)
    for (j=1;j<=n;j++)
   {   cout<<"a["<<i<<"]["<<j<<"]= ";
       cin>>a[i][j];
  }
    for (i=1;i<=m;i++)
    {
    for (j=1;j<=n;j++)
      cout<<setw(5)<<a[i][j];
      cout<<"\n";  
}
    
    Tich=1;
      for (i=1;i<=m;i++)
	  for (j=i+1;j<=n;j++)
      if (a[i][j]<0)
      Tich= Tich*a[i][j];
      cout<<"Tich cac gia tri am nam phia tren duong cheo chinh la "<<Tich;
      cout<<endl;
    
    
    Tong=0;
      for (i=m;i>=1;i--)
    
	  for (j=i-1;j>=1;j--)
      if (a[i][j]>0)
      Tong= Tong+a[i][j];
      cout<<"Tong cac gia tri duong nam phia duoi duong cheo chinh la "<<Tong;
      cout<<endl;
    
    
    TBC=0;
      for (i=1;i<=m;i++)
    	for (j=1;j<=n;j++)
    	TBC= TBC+a[i][j]/(m*n);
    	cout<<"Trung binh cong cua ma tran la "<<TBC;
    	cout<<endl;
	
	
	Dem=0;
	  for (i=1;i<=m;i++)
    	for (j=1;j<=n;j++)
    	if (i==j)
    	 if (a[i][j]<=TBC)
    	  Dem= Dem+1;
		cout<<"So phan tu tren duong cheo chinh co gia tri nho hon TBC la "<<Dem;
		cout<<endl;
    
return 0;
}
