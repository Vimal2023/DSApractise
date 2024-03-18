#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, int> m;

    //insertion
    //1
    pair<string, int> p = make_pair("vimal", 3);
    m.insert(p);

    //2
    pair<string, int> pair2("Anand", 2);
    m.insert(pair2);

    //3
    m["hello"] = 1;

    //searching
    cout<<m["hello"]<<endl;
    cout<<m.at("vimal")<<endl;

    cout<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;

    return 0;
}