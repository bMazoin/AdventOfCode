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
        lines.push_back(line);
    }

    for (int i = 0; lines.at(0)[i] != '\0'; i++)
    {
        if (lines.at(0)[i] != ' ')
        {
            xLength++;
        }
    }


    for (int i = 0; i < lines.size(); i++) {
        currentX += 3;
        currentX %= xLength;
        if (lines.at(i)[currentX] == '#') {
            nbTrees++;
        }
        
    }

    cout << "Encountered " << nbTrees << " trees" << endl;

    return 0;
}
