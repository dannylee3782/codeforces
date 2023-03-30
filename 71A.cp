//
//  main.cpp
//  71A
//
//  Created by Danny Lee on 2023-01-17.
//

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string txt, ntxt;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> txt;
        
        if (txt.length() > 10) {
            ntxt = txt[0] + to_string(txt.length()-2) + txt[txt.length()-1];
            cout << ntxt << endl;
        }
        else {
            cout << txt << endl;
        }
    }
    return 0;
}
