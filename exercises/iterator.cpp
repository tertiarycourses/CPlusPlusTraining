#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int>::iterator it;   // vector iterator
    
    // input iterator
    for(it = v.begin(); it < v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;

}
