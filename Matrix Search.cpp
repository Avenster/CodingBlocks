#include <iostream>
using namespace std;

void staircasesearch(int a[100][100],int n,int m,int x)
{
    int i=0,j=m-1;
    while(i<n && j>=0)
    {
        if(a[i][j]==x)
        {
            cout<<"1\n";
            return;
        }
        else if(a[i][j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"0\n";
}

int main() {
    int n,m;
    int a[100][100];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    staircasesearch(a,n,m,x);
    return(0);
}