#include <iostream>
#include <utility>
#include <map>
#include <string>
#include <sstream>

using namespace std;

pair<string, int> getValuesFromLine(string line) {
    string genre;
    string quantityOfPages;
    bool firstMinusIsFinded = false;
    bool secondMinusIsFinded = false;

    for (int l = 0; l < line.length(); l++) {
        if (secondMinusIsFinded) {
            quantityOfPages += line[l];
        }
        
        if (firstMinusIsFinded) {
            if (line[l] == '-') {
                secondMinusIsFinded = true;
            } else {
                genre += line[l];
            }
        }
        if (l > 0 &&
            line[l - 1] == '-' && line[l] == ' ') {
            firstMinusIsFinded = true;
        }
        else {
            continue;
        }
    }
    cout << genre << " " << quantityOfPages << endl;
    int quantity = stoi(quantityOfPages);
    return make_pair(genre, quantity);
}

int main() {
    map<string, int> data = {};

    string line;
    getline(cin, line);

    string genre;
    int quantityOfPages;
    // auto [genre, quantityOfPages] = getValuesFromLine(line);
    auto result = getValuesFromLine(line);
    genre = result.first;
    quantityOfPages = result.second; 
    cout << genre << " " << quantityOfPages << endl;
    // cout << title << " " << genre << " " << quantityOfPages;
    return 0;
}