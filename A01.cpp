//
// Name : Snigdha Basuroy
// SSID : 1892655
// Assignment #: 1
// Submission Date : 2/23/2024
//
#include <iostream>
#include <string>

using namespace std;

// Function to replace vowels in the word according to the specified rules
string replaceVowels(string word) {
    for (int index = 0; index < word.size(); index++) {
        if (word[index] == 'a') {
            word[index] = '@';
        } else if (word[index] == 'e') {
            word[index] = '~';
        } else if (word[index] == 'i') {
            word[index] = '!';
        } else if (word[index] == 'o') {
            word[index] = '?';
        } else if (word[index] == 'u') {
            word[index] = '8';
        }
    }
    return word;
}

int main() {
    string word;

    // Prompt the user to enter an eight-letter lowercase word without spaces
    cout << "Enter an eight-letter lowercase word without spaces: ";
    cin >> word;

    // Error condition: Check if the word is of correct length
    if (word.size() != 8) {
        cerr << "Error: String is incorrect length" << endl;
        return -1;
    }

    // Convert the word to a password
    string password = replaceVowels(word);

    // Output the password
    cout << "Password: " << password << endl;

    return 0;
}
