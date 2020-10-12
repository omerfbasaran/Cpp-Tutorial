#include <iostream>
#include <string>
using namespace std;
int main ()
{
   /* int x=13;
    bool a=true;
    if (x<=15 && a)
    cout<<"x 15'den kucuk veya esit ve a true";*/

////////////////////////////////////////////////
int x=1;
switch (x)
{
case 1:
    cout << "x= "<<x;
    x++;
    break;
case 2:
    cout << "x= "<<x;
    x++;
    break;
case 3:
    cout << "x= "<<x;
    break;
default:
    break;
}

}