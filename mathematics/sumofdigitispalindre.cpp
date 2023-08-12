#include<bits/stdc++.h>
using namespace std;

bool sumofdigit(int n){
    int rev=0;
    int sum=0;
   while(n!=0){
     sum+=n%10;
     n=n/10;

   }
    n=sum;
    for(int i=0;i<=n;i++){
        int ld=n%10;
         rev=rev*10+ld;
         n=n/10;

    }
    if(rev==sum){
        return 1;
    }
    else{
        return 0;
    }

}




int main()
{
    int n=122;
    cout<<sumofdigit(11);
return 0;
}
