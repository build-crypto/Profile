#include "Profile.h"
#include <iostream>
#include <string.h>
using namespace std;
void Profile::Nhap()
{   cout<<"Nhap Ten Hoc Sinh : ";
    fgets(NAME,31,stdin);
    if (NAME[strlen(NAME)-1]=='\n') NAME[strlen(NAME)-1] ='\0' ;
    cout<<"Nhap Diem Van va Toan (Thang diem 10)\n";
    do
    {
        cin>>dVan>>dToan;
    }
    while (dVan>10||dVan<0||dToan>10||dToan<0);

    dTB = 1.0*(dVan+dToan)/2;
}
void Profile::XepHang()
{
    cout<<"Diem va Xep Hang cua Hoc Sinh - ";
    for (int t=0;t<strlen(NAME);t++)
    {
        cout<<NAME[t];
    }
    cout<<" -";
    cout<<"\nDiem Toan : "<<dToan;
    cout<<"\nDiem Van : "<<dTB;
    cout<<"\nXep Hang : ";
    if (dTB>=9) cout<<"XUAT SAC";
    else if (dTB>=8) cout<<"GIOI";
    else if (dTB>=6.5) cout<<"KHA";
    else if (dTB>=5) cout<<"TB";
    else if (dTB>=3.5) cout<<"YEU";
    else cout<<"KEM";
}
