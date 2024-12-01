/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ; 
    int arr[n][n];
    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = 0 ; j < n ; j++ )
        {
            cin >> arr[i][j];
        }
    }
    int x = 0 ;
    int y = 0 ;
    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = 0 ; j < n ; j++ )
        {
            if(i==j)
            {
                x = x + arr[i][j];
            }
        }
    }
    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = 0 ; j < n ; j++ )
        {
            if(i+j==(n-1))
            {
                y = y + arr[i][j];
            }
        }
    }
    cout << abs(x-y);

    return 0;
}