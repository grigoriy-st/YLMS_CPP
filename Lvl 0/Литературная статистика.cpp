#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    map<char, int> dict = {
        {'.', 1}, {',', 1}, {'?', 1}, {'!', 1}, {':', 1},
        {'A', 2}, {'B', 2}, {'C', 2},
        {'D', 3}, {'E', 3}, {'F', 3},
        {'G', 4}, {'H', 4}, {'I', 4},
        {'J', 5}, {'K', 5}, {'L', 5},
        {'M', 6}, {'N', 6}, {'O', 6},
        {'P', 7}, {'Q', 7}, {'R', 7}, {'S', 7},
        {'T', 8}, {'U', 8}, {'V', 8},
        {'W', 9}, {'X', 9}, {'Y', 9}, {'Z', 9},
    };

    string line;
    getline(cin, line);
    
    transform(line.begin(), line.end(), line.begin(), ::toupper);

    for (char let: line) {
        for (int i = 0; i < dict[let]; i++) {
            cout << dict[let];
        }
    }
    return 0;
}