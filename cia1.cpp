#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
    Function: encrypt
    -----------------
    Takes input string and shift value
    Returns encrypted string using Caesar Cipher
*/
string encrypt(string ip, int n) {
    string res = "";

    for (char ch : ip) {
        // Check for uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            // Convert to 0–25 range, shift, wrap using %26, convert back
            res += (ch - 'A' + n) % 26 + 'A';
        }
        // Check for lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            res += (ch - 'a' + n) % 26 + 'a';
        }
        // Keep spaces and special characters unchanged
        else {
            res += ch;
        }
    }

    return res;
}

/*
    Function: decrypt
    -----------------
    Reverses the encryption by shifting characters backward
*/
string decrypt(string ip, int n) {
    string res = "";

    for (char ch : ip) {
        // Uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            // +26 ensures value stays positive before modulo
            res += ((ch - 'A' - n + 26) % 26) + 'A';
        }
        // Lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            res += ((ch - 'a' - n + 26) % 26) + 'a';
        }
        // Non-alphabet characters remain unchanged
        else {
            res += ch;
        }
    }

    return res;
}

int main() {
    string text;

    // Taking full line input (including spaces)
    cout << "Enter a string:\n";
    getline(cin, text);

    int n;
    cout << "Enter number of rotations:\n";
    cin >> n;

    // Normalize shift value (handles large inputs)
    n = n % 26;

    // Encrypt the text
    string res = encrypt(text, n);
    cout << "String after encrypting: " << res << endl;

    // Decrypt the text
    string ans = decrypt(res, n);
    cout << "String after decrypting: " << ans << endl;

    return 0;
}