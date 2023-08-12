#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int n){
  if(n == 0)
    return 0;
return (n%10)+(n/10);

}

int main()
{
int n=123;
cout<<sumofdigits(n);
return 0;
}