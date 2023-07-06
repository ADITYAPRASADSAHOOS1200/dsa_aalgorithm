#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the the number to print :"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){ //jab tak i ki  value i<= n nahi ho jata tab tak loop cahlega 
        cout<<i<<" ";//it will print the statement
         i=i+1; // increase the i by 1 we can write i=i+1 or i++;
    }
}
