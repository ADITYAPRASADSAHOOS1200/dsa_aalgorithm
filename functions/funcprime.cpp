#include<iostream>
using namespace std;

bool isprime(int n){
for(int i=2;i<n;i++){

if(n % i == 0){
    return 0;
    
}
}
return 1;

}
int main(){
int n;
cin>>n;
if(isprime(n)){
  cout<<"answer is prime"<<endl;
}
else{
  cout<<"answer is not prime"<<endl;
}
  return 0;
}
   