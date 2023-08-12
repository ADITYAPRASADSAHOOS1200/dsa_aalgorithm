#include<bits/stdc++.h>
using namespace std;

int  fact(int n){
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}



int factorial(int n,int k){
    if(n==0 || n==1)
      return k;
      return factorial(n-1,k*n);
    
}

int main()
{
int n=6,k=1;
cout<<factorial(6,1)<<endl;
cout<<fact(6);
return 0;
}
