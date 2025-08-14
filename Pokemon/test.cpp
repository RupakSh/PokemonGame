#include <iostream>
#include <string>
using namespace std;


void updateName(string &name){
    string to_add = "is cool!!";
    name = name + to_add;
}

int main() {
    string name = "Outscal ";

    updateName(name);

    cout << name << endl;
    
    return 0;
}