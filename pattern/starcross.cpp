#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter  a number ";
    cin>>m;
        for(int i = 1 ; i <= m ; i++)
        {
            for(int j =1; j <= m ; j++)
            {
                if(i == j || i+j == m+1) cout<<"* ";
                else cout<<"  ";
            }
            cout<<endl;

        }
            
            
       
    return 0;
}