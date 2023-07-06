#include<iostream>
using namespace std;
int factorial(int n){
  int  fact=1;
 for (int i=1;i<=n;i++){
      fact*=i;
   }
   return fact;
}
int ncr(int n,int b){
int numner=factorial(n);
int denomr=factorial(b);
return numner/denomr;

}

int main(){
int n;
int r;
cin>>n>>r;
cout<<ncr(n,r)<<endl;
return 0;

}