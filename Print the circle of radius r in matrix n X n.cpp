/* 
Print the circle of radius r in matrix n X n .
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; //matrix
    cin >> n; cin.ignore();
    int r; //radius
    cin >> r; cin.ignore();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            int dx = j - n/2;
            int dy = i - n/2;
            
            if (((dx*dx) + (dy*dy)) <= (r*r))
            {
                cout<<"# ";
            }   
            else 
            {
                cout<<". ";
            }
            
        }
        
        cout<<endl;
    }
}
