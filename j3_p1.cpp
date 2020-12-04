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
    vector<string> lines;
    string line;
    int currentX = 0, nbTrees = 0, xLength = 0;

    while (cin >> line) {
        if (line[currentX] == '#') {
            nbTrees++;
        }
        currentX += 3;
        currentX %= line.length();
    }

    cout << "Encountered " << nbTrees << " trees" << endl;

    return 0;
}
