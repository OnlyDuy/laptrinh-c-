# include <iostream>
# include <iomanip>
#include<math.h>
#define MAX 100
using namespace std;

void NhapMang(float a[][MAX], int &dong, int &cot)
{
    // Nhap so dong
    do
    {
        	cout << " nhap so dong: ";
		cin >> dong;

        if(dong < 1 || dong > MAX)
        {
            cout << " So dong khong hop le. Vui long kiem tra lai!! ";
        }

    }while(dong < 1 || dong > MAX);

    //Nhap so cot
    do
    {
        cout << " nhap so cot: ";
		cin >> cot;

        if(cot < 1 || cot > MAX)
        {
            cout << " So cot khong hop le. Vui long kiem tra lai!! ";
        }

    }while(cot < 1 || cot > MAX);
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            
            cout << " Nhap phan tu thu a["<<i<<"]["<<j<<"] la: ";
		  cin >> a[i][j];
            
        }
    }
}

void XuatMang(float a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
       cout << setw(5) << a[i][j];
          cout << "\n";  
    }
}

float TinhTongDong(float a[][MAX], int x, int cot)
{
    float tong = 0;
    for(int j = 0; j < cot; j++)
    {
        tong += a[x][j];
    }
    return tong;
}

float TinhTichCot(float a[][MAX], int y, int dong)
{
    float tich = 1;
    for(int i = 0; i < dong; i++)
    {
        if(a[i][y] > 0)
        {
            tich *= a[i][y];
        }
    }
    return tich;
}
int main()
{
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
{

    int x;
    do{
        cout << "\n Nhap vao dong x can tinh tong: ";
        cin >> x;

        if(x < 0 || x > dong - 1)
        {
            cout << "\n Chi so dong x khong hop le. Xin kiem tra lai !";
        }
    }while(x < 0 || x > dong - 1);

    float tong = TinhTongDong(a, x, dong);
    cout << "\n Tong dong: " << tong;
}

    int y;
    do{
        cout << "\nNhap vao cot y can tinh tich: ";
        cin >> y;

        if(y < 0 || y > cot - 1)
        {
            cout << "\nChi so cot y khong hop le. Xin kiem tra lai !";
        }
    }while(y < 0 || y > cot - 1);

    float tich = TinhTichCot(a, y, dong);
    cout << "\n Tich cot: " << tich;
    return 0;
}
