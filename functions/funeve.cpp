#include<iostream>
using namespace std;

void even(int num){

    if(num%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    even(n);
    return 0;
    
}