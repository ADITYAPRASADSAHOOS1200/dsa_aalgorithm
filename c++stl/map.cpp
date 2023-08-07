#include<iostream>
#include<unordered_map>  // one key will point one value and same key will not point different values;
using namespace std;
int main(){
 unordered_map<int,int> m;//<key datatype,value datatype>

m[1]=12;
m[13]=100;  //it is always sorted elements in random cases
m[3]=14;  
m[4]=15; 
m.insert({5,234});
for(auto i:m){// trverse all the elements in key
cout<<i.second<<endl; 
}
cout<<endl;

for(auto i:m){// traverse all the elements in vale and key
cout<<i.first<<" "<<i.second<<endl;
}

cout<<"value finding 3->"<<m.count(3)<<endl;// it will check the element is present or not
  
cout<<"before erase"<<endl;

for(auto i:m){// traverse all the elements in vale and key
cout<<i.first<<" "<<i.second<<endl;
}
m.erase(13);// it will erase the element

for(auto i:m){// traverse all the elements in vale and key
cout<<i.first<<" "<<i.second<<endl;
}

unordered_map<int,int>::iterator itr=m.find(13);
cout<<"find 5->" <<(*itr).first<<endl;


auto it=m.find(1);
for(auto i=it;i!=m.end();i++){// it will iterate and find through out all elements
    cout<<(*i).first<<endl;
}

}