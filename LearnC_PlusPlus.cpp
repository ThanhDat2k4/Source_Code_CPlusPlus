#include <iostream>
#define max 100
using namespace std;

// nhap mang
void NhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout <<"a[ " << i <<" ] = ";
        cin >> a[i];
    }
}

// xuat mang
void XuatMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
}

//Sap xep mang tang dan 
void SapXep(int a[], int n)
{
    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Sap xep mang giam dan
void SapXepGiam(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
}
int main()
{
    int a[max] = { 0 };
    int n;
    cout <<"Nhap so luong phan tu n: ";
    cin >> n;

    NhapMang(a, n);
    cout <<"Mang sau khi nhap!\n";
    XuatMang(a, n);
    SapXep(a, n);
    cout <<"\nMang sau khi sap xep!\n";
    XuatMang(a, n);
    cout <<"\nMang sau khi sap xep giam dan!\n";
    SapXepGiam(a, n);
    XuatMang(a, n);

    return 0;
}

/*
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int chieudai(string s)
{
    int i = 0;
    int dem = 0;
    while (s[i] != '\0')
    {
        i++;
        dem++;
    }
    return dem;
}

int main()
{
    string  s;
    cout << "Nhap chuoi : ";
    getline(cin, s);
    cout <<"Chieu dai cua chuoi la: " << chieudai(s);
    
}
*/