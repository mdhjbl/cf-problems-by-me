#include <iostream>
#include <set>
using namespace std;

int main() {
    string name;
    cin >> name ;
    set <char> uniletters ;
    for(int i = 0 ; i < name.length() ; i++){
        uniletters.insert(name[i]);
    }
    if(uniletters.size()%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
}
