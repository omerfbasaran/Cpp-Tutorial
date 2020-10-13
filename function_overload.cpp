#include <iostream>
#include <string>
using namespace std;
int division(int x, int y)
{
 return x / y;
}
double division(double x, double y)
{
 return x / y;
}
int main()
{
 cout << "Int division: " << division(81, 9) << '\n';
 cout << "Double division: " << division(82.0, 2.0)<<endl;

 /////////////////////////////////////////////////////////

 int* p=new int;
 *p=123;
 cout<<"p is "<<*p;
 delete p;
}