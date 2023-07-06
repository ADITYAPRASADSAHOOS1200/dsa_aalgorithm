#include<iostream>
#include<set>
using namespace std;
int main(){
set<int>s;
s.insert(5);
s.insert(1);// set does not store duplicates elements
s.insert(6);// insert operation o(logn) time comlexity
s.insert(0);// it auto matically arrange the elemnt in sorted manner
s.insert(5);
s.insert(5);
s.insert(6);
s.insert(6);
cout<<"size->  "<<s.size()<<endl;


 for(auto i:s){// traversing all the elments we have inserted
    cout<<i<<endl;
 }
cout<<endl;

set<int>::iterator it=s.begin();
it++;
cout<<"begin->"<<*it<<endl;
s.erase(it);// erase operation will erase the element from beginning
                
 for(auto i:s){
    cout<<i<<endl;          //   insert, find ,erase ,count time complexity o(logn);
 }                          //    size begin end empty() o(1)
cout<<endl;


cout<<" no -5 is present or not->"<<s.count(5)<<endl;// count function will check the elements is present or not

set<int>::iterator itr=s.find(0);
// cout<<"value is prsent or not ->"<<*itr<<endl;//it will find the element
for(auto  it=itr;it!=s.end();it++){
   cout<<*it<<" ";//it can iterate all over the element
}cout<<endl;


cout<<"it will empty->"<<s.empty()<<endl;

}
 