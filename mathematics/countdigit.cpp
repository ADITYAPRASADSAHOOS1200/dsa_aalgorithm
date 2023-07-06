#include<iostream>
using namespace std;

int countdigits(int x){
    int res=0;
    while(x>0){
        x=x/10;
        res++;
    }
   return  res;
}

int main(){
   int x=789;
   cout<<"the number of digit is three"<<countdigits(x)<<endl;

}