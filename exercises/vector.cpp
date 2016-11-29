#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    cout << "The vector is" << endl;
    for(int i=0;i<10;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    cout << "v[5] = " << v[5] << endl;
    
    cout << "Insert element of 100 at location 6" << endl;
    v.insert(v.begin()+5,100);
    cout << "v[5] = " << v[5] << endl;
    
    cout << "Erase element 6" << endl;
    v.erase(v.begin()+5);
    cout << "v[5] = " << v[5] << endl;
    return 0;
}
