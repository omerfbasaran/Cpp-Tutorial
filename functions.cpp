#include <iostream>
using namespace std;
int kare(int x);
int main()
{
    int y;
    cout <<"Sayi giriniz= ";
    cin >> y ;
    int sonuc;
    sonuc= kare(y);
    cout <<"sonuc= "<<sonuc; 
}
int kare(int x)
    {
        return x * x;
    }
