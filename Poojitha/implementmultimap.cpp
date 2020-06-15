#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{

    multimap<int,string>random;
    random.insert(make_pair(10,"hi"));
    random.insert(make_pair(20,"whatsup"));
    random.insert(make_pair(30,"eat"));
    random.insert(pair<int,string>(10,"food"));
    multimap<int,string> ::iterator it=random.begin();
    for(it;it != random.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    cout<<"Empty :"<<random.empty()<<endl;
    cout<<"Size :"<<random.size();
    cout<<endl;
    cout<<"\nupperbound, lowerbound: "<<endl;
    auto lb=random.lower_bound(20);
    auto ub=random.upper_bound(30);
    for(it=lb;it != ub; it++)
     {
    cout<<it->first<<" "<<it->second<<endl;
     }
    }
