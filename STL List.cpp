#include <iostream>
#include <list>
// A List container is a Doubly Linked List 
using namespace std;

int main(){
    list<int> anLL;             // this is a doubly linked list
    anLL.push_front(10);        // you can push to start
    anLL.push_back(20);         // or to the end
    anLL.push_front(30);
    anLL.push_back(40);
    cout<<anLL.front()<<endl;   // you can see the first element
    anLL.pop_front();           // and pop it
    cout<<anLL.front()<<endl;
    cout<<anLL.back()<<endl;    // same with the last element
    anLL.pop_back();
    cout<<anLL.back()<<endl;
    cout<<anLL.size()<<' '<<anLL.max_size()<<endl;
    // The current and the maximum size possible
    anLL.clear();               // clearing the list
    for(int i=0; i<5; i++)
        anLL.push_back(i+1);
    for(int i: anLL)            // lists can be accessed like this
        cout<<i<<' ';
    cout<<endl;
    anLL.reverse();             // a list can be reversed
    for(int i: anLL)
        cout<<i<<' ';
    cout<<endl;
    list<int> anotherLL;
    for(int i=5; i<10; i++)
        anotherLL.push_back(i);
    anLL.merge(anotherLL);      // another list can be merged with a list
    for(int i: anLL)
        cout<<i<<' ';
    cout<<endl;
    anLL.push_back(9);
    anLL.push_back(9);
    for(int i: anLL)
        cout<<i<<' ';
    cout<<endl;
    anLL.unique();              // duplicates can be removed from list,
    for(int i: anLL)            // only if those are adjacent to each other
        cout<<i<<' ';
    cout<<endl;
    
}