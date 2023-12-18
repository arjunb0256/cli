#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    if(argc < 2) {
        cout << "Usage: Fact <parameter>!" << endl;
        return -1;
    }
    if(argv[1] == "help") {
        cout << "help" << endl;
        return 0;
    }
    return 0;
}