#include<iostream>
using namespace std;

int main()
{
    int m,i;
    int n;

    cout<<"Enter  a number ";
    cin>>m;

    
    for(i = 1 ; i <= m ; i++)
    {
       for(int j = 1; j<=m; j++)
       {
            if(i == ((m+1)/2) || j == ((m+1)/2))
            cout<<"* ";

            else cout<<"  ";
       }
       
       cout<<endl;
    }
       
    return 0;
}
