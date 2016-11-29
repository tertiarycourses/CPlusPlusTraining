#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> list1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "size: " << list1.size() << endl;
    cout << "front: " << list1.front() << endl;
    cout << "back: " << list1.back() << endl << endl;
    
    list1.push_back(47);
    cout << "size: " << list1.size() << endl;
    cout << "back: " << list1.back() << endl << endl;
    
    // range-based for loop
    cout << "list is below : " << endl;
    for(int i : list1) {
        cout << i << " ";
    }
    cout << endl << endl;
    
    // need an iterator to insert and erase
    list<int>::iterator it;
    it = list1.begin();
    
    while(it != list1.end()) {
        if (*it == 5) {
            list1.insert(it, 112);
        }
        it++;
    }
    
    for(int j : list1) {
        cout << j << " ";
    }
    
    cout << endl;
    
    return 0;
}

