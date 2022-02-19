/* Hunter Stout
   2/18/2022
   main.cc
   Lab 5 :D */

#include <iostream>
#include <string>
#include "list1.h"
using namespace std;

int main() {

    //Part 1
    Lilist L1, L2;
    string target;

    L1.add("Charlie");
    L1.add("Lisa");
    L1.add("Drew");
    L1.add("Derrick");
    L1.add("AJ");
    L1.add("Bojian");
    cout << "Now showing list One:" << endl;
    L1.show();

    //Part 2
    cout << "Enter a name to search: ";
    cin >> target;
    if (L1.search(target) != NULL) {
        cout << "That name is stored at address: " << L1.search(target) << endl;
    }
    else {
        cout << "That name is not in the list." << endl;
        L1.move_front_to_back();
        L1.move_front_to_back();
        L1.show();
    }
}