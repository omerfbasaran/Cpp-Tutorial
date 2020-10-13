#include "iostream"
using namespace std;
//int multiplereturns(int x);
int multiply_them(int x ,int y);
int main()
{
    int x;
    int y;
    /*cout << "Give me some number ";
    cin >> x;
y=multiplereturns(x);
cout << y;*/
/////////////////// 

   cout<<"Give me two number for multiplication-->";
 cin >>x>>y;
 int result= multiply_them(x,y);
 cout <<"The result is = "<<result;
}
/*int multiplereturns(int x)
{
    if (x<5) return 28;
    else return 14;
}
*/
int multiply_them(int x ,int y)
{
    return x*y;
}