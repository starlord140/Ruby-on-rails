#define rep(i,a,b) for(i=a;i<b;i++)
#define rep1(i,a,b) for(i=a;i>b;i--)

#include<bits/stdc++.h>

using namespace std;
 main()
{
    int i,j,k,l,m=0,a[1000][3];
    cin>>l;
    for(i=0;i<l;i++)
    {k=0;
        for(j=0;j<3;j++)
        {cin>>a[i][j];
        if(a[i][j]==1)
            k++;
    }if(k>=2)
    {
        m++;
         
    }
}
cout<<m;
}
