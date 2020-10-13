#include "iostream"
using namespace std;
int main()
{
    int* p=new int{123};
    cout << "Dynamic storage duration is "<<*p;
    delete p;
}