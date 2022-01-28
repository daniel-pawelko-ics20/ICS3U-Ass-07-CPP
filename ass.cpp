// Copyright (c) 2022 Daniel Pawelko all rights reserved

// Created by Daniel Pawelko
// Created on Jan 2022
// Assignment 7

#include <iostream>
#include <string>
#include <list>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::list;


float biggest(list<float> inp) {
    // find biggest number

    // defining variable
    float largest = inp.front();

    // process
    for (list<float>::const_iterator elem = inp.begin(); elem != inp.end();
    elem++) {
        if (*elem > largest) {
            largest = *elem;
        }
    }

    // return
    return largest;
}

int main() {
    // main function, calling biggest

    // variables
    string temp;
    list<float> inp;
    float returned;

    try {
        // input
        while (true) {
            cout << "Enter a number: ";
            cin >> temp;
            inp.push_back(stoi(temp));
        }
    } catch(std::invalid_argument) {
        // calling function
        returned = biggest(inp);

        // output
        cout << "Biggest number is " << returned << endl;
    } catch(std::out_of_range) {
        // calling function
        returned = biggest(inp);

        // output
        cout << "Biggest number is " << returned << endl;
    } 

    // done
    cout << "\nDone." << endl;
}
