#include <iostream>
#include <vector>
using namespace std;

// Vectors are Dynamic Arrays, stored in contigious 
// memory locations but thier storage is handled automatically

void printVector(vector<int> a);

int main(){
    int n;
    vector<int> a= {1, 2, 3, 4, 5}; // can be declared similar to array
    // vector<int> a{1, 2, 3, 4, 5};// by the way, here is another way
    vector<int> b;                  // and an empty declaration
    // cout<<b.size()<<endl;
    for(int i=0; i<5; i++)
        cout<<a[i]<<' ';            // and will be accessed similar to arrays
    cout<<endl;
    for(int i=0; i<5; i++)
        cout<<a.at(i)<<' ';         // but can be accessed using at() method
    cout<<endl;
    for(auto i: a)                  // or by using an iterator
        cout<<i<<' ';
    cout<<endl;
    cout<<"The first element is "<<a.front()<<endl;
    cout<<"The last element is "<<a.back()<<endl;
    // and a pointer to memory array stored
    int *p= a.data();
    for(int i=0; i<5; i++)
        cout<<p[i]<<' ';
    cout<<endl;
    cout<<"Number of elements: "<<a.size()<<endl;
    cout<<"Max Size: "<<a.max_size()<<endl;
    cout<<"Space allocated currently for "<<a.capacity()<<" elements"<<endl;
    a.resize(7);   // allocates max(currentSize*2, requiredSize) memory
    cout<<"Capacity after re-sizing "<<a.capacity()<<endl;
    a.shrink_to_fit();
    cout<<"After cutting down capacity to its size "<<a.capacity()<<endl;
    a.resize(5);    // allocating less memory than prev
    cout<<"Capacity after asking to cut down size "<<a.capacity()<<endl;
    a.shrink_to_fit();
    cout<<"Then cutting down to its actual size "<<a.capacity()<<endl;
    a.reserve(7);   // allocates the size we ask, if it is greater than current capacity
    cout<<"Then reserving space for more again "<<a.capacity()<<endl;
    
    cout<<"Initial vector"<<endl;
    printVector(a);
    a.push_back(6);     // you can append/push at end of it 
    cout<<"After a push_back"<<endl;
    printVector(a);
    a.pop_back();       // or remove its last element
    cout<<"After a pop_back"<<endl;
    printVector(a);
    a.insert(a.begin()+2, 9);   // you can insert in any position
    // a.emplace(a.begin()+2, 8);   // another way to insert
    // a.emplace_back(24);          // another way to append
    cout<<"After insretion in a random position"<<endl;
    printVector(a);
    a.erase(a.begin()+1);       // or erase from any position
    // a.erase(a.begin(), a.begin()+2); // or a range of pos.
    cout<<"After erasing from a random position"<<endl;
    printVector(a);
    a.swap(b);      // swap vector with another
    cout<<"After Swap with another vector"<<endl;
    printVector(a);
    printVector(b);
    cout<<a.empty()<<endl;  // finding if a vector is empty
    // a.copy(b);           // this is a way to copy a vector
    // a=b;                 // this is a better way though
    a.assign({10, 9, 8, 7, 6}); // assign another vector, does the same
    // a.assign(b.begin()+1, b.begin()+3);  // or a part of it
    // a.assign(5, 2);      // or make a vector of required size and default values, we can't do it with copy
    cout<<"After new assignment"<<endl;
    printVector(a);
    a.clear();              // or completely clear it
    cout<<"After clearing all the content"<<endl;
    printVector(a);
}

// it is always passed by reference, though doesn't seem so
void printVector(vector<int> a){
    for(auto i: a)
        cout<<i<<' ';
    cout<<endl;
}