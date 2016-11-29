#include <iostream>
#include <iostream>
#include <map>

using namespace std;

int main()
{
//    map<string, string> capital = { { "US", "Washington"},{"UK","London"},{"France","Paris"}};
//    
//    cout << "The capital of UK is " << capital["UK"] << endl;
//    
    map<int, string> ranking = { {1, "Ally"},{2,"Belinda"},{3,"Jane"}};
    
    cout << "Rank 2 is  " << ranking[2] << endl;
}