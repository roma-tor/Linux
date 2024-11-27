#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        cerr << "need more argument" << endl;
        return 1; 
    }

	ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "error opening file " << argv[1] << endl;
        return 1;
	}

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
