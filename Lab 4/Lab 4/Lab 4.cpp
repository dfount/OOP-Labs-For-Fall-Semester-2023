#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string word, letter;

    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter a letter: ";
    cin >> letter;

    string filename = word + ".txt";
    ifstream inputFile(filename);

    if (!inputFile) {
        cout << "Error: Could not open file " << filename << endl;
        return 1;
    }

    bool foundSynonyms = false;

    string line;
    while (getline(inputFile, line)) {
        if (line[0] == letter[0]) {
            cout << line << endl;
            foundSynonyms = true;
        }
    }

    if (!foundSynonyms) {
        cout << "No synonyms for " << word << " begin with " << letter << "." << endl;
    }

    inputFile.close();

    return 0;
}
