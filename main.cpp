#include<iostream>
#include<list>
#include <vector>
using namespace std;
int main(){
    // list is same like vector just we  can use same opperations from front also

    list<int> l;
    l.push_back(5);
    l.push_back(3);
    l.push_front(9);//we cant use front functions in vector
    l.push_front(1);
   // l.pop_front();// also this one
   l.insert(next(l.begin(), 2), 6);

    for(int val:l){
        cout<<val<< " ";


    }
}
