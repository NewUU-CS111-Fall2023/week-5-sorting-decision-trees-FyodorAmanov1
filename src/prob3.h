/*
 * Author:
 * Date:
 * Name:
 */
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string names[7] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Fush", "John"};

    for(int i = 0; i < sizeof(names); i += 2) {
        if (i != sizeof(names) - 1){
        string t = names[i];
        names[i] = names[i + 1];
        names[i + 1] = names[i];}
        else{
            continue;
        }
    }
    for(int i = 0; i < sizeof(names); i += 1) {
        cout << names[i] << endl;
    }

    return 0;
}