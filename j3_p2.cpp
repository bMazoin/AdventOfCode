#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    string line;
    bool isOneOnTwo = true;
    int currentXRTDO = 0, currentXRODO = 0, currentXRFDO = 0, currentXRSDO = 0, currentXRODT = 0;
    long nbTreesRTDO = 0, nbTreesRODO = 0, nbTreesRFDO = 0, nbTreesRSDO = 0, nbTreesRODT = 0;

    while (cin >> line) {
        if (line[currentXRTDO] == '#') {
            nbTreesRTDO++;
        }
        if (line[currentXRODO] == '#') {
            nbTreesRODO++;
        }
        if (line[currentXRFDO] == '#') {
            nbTreesRFDO++;
        }
        if (line[currentXRSDO] == '#') {
            nbTreesRSDO++;
        }

        if (isOneOnTwo == true) {
            if (line[currentXRODT] == '#') {
                nbTreesRODT++;
            }

            currentXRODT += 1;
            currentXRODT %= line.length();
            isOneOnTwo = false;
        }
        else {
            isOneOnTwo = true;
        }

        currentXRTDO += 3;
        currentXRODO += 1;
        currentXRFDO += 5;
        currentXRSDO += 7;

        currentXRTDO %= line.length();
        currentXRODO %= line.length();
        currentXRFDO %= line.length();
        currentXRSDO %= line.length();
    }

    /*cout << "Encountered " << nbTreesRTDO * nbTreesRODO * nbTreesRFDO  * nbTreesRSDO * nbTreesRODT << " trees" << endl;*/
    cout << nbTreesRTDO << endl;
    cout << nbTreesRODO << endl;
    cout << nbTreesRFDO << endl;
    cout << nbTreesRSDO << endl;
    cout << nbTreesRODT << endl;

    return 0;
}
