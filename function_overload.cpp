#include <iostream>
#include <string>
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
 std::cout << "Int division: " << division(81, 9) << '\n';
 std::cout << "Double division: " << division(82.0, 9.0);
}