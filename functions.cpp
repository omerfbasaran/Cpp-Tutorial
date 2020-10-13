#include <iostream>
using namespace std;
//int kare(int x);
float karef(float y);
int main()
{
    /*int y;
    cout <<"Sayi giriniz= ";
    cin >> y ;
    int sonuc;
    sonuc= kare(y);
    cout <<"sonuc= "<<sonuc;*/
////////////////////////////////////////

    float y;
    cout << "Ondalikli sayi girin-->";
    cin >> y;
    float floatsonuc;
    floatsonuc = karef(y);
    cout <<"Float sonuc="<<floatsonuc;


    
}
/*int kare(int x)
    {
        return x * x;
    }
    */
float karef (float y)
{
    return y*y;
}
