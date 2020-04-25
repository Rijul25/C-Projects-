#include <iostream>
#include <list>
using namespace std;
int main() {

    list<int> l;

    //initialise
    list<int> l1{1,2,3,10,8,5};
    //Different datatype
    list<string> l2{"apple","banana","mango"};
    l2.push_back("pineapple");
    //sort
    l2.sort();

    //reverse
    l2.reverse();

    //pop front
    l2.pop_front(); 

    //push
    l2.push_front("kiwi");
    l2.push_back("papaya");
    l2.pop_back();

    //iterate over the list and print all the elements
    for(auto s:l2){
        cout<<s<<"-->";
        //for ever string that lies in l2
    }

    return 0;
}
