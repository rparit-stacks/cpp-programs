//Build a C++ program that calculates the area of a rectangle. Ask the user for the length and width as inputs using `cin`, perform the calculation, and output the result using `cout`.

#include<iostream>
using namespace std;
int main()
{
    float l,b;
    cout<<"Enter length and width of rectangle : ";
    cin>>l>>b;
    float area = l * b;

    cout<<area;

    return 0;
}
