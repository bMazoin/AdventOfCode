#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

vector<string> split(const string &str, char delimiter) {
    vector<string> vString;
    string token;
    istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        vString.push_back(token);
    }
    return vString;
}

int main() {
    string line;
    char car;
    int min, max, correctPasswords = 0;

    while (cin >> line) {
        min = stoi(split(line, '-')[0]);
        max = stoi(split(line, '-')[1]);

        cin >> line;
        car = line[0];

        cin >> line;
        
        if (line[min - 1] == car && line[max - 1] != car ||
            line[min - 1] != car && line[max - 1] == car) {
            correctPasswords++;
        }
    }

    cout << "There are " << correctPasswords << " correct passwords" << endl;

    return 0;
}
