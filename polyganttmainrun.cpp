#include<iostream>
using namespace std;
string encryptVigenere(const string& message, const string& key) {
string encryptedMessage = "";
int keyLength = key.length();
for (int i = 0, j = 0; i < message.length(); ++i) {
char currentChar = message[i];
if (isalpha(currentChar)) {
char shift = isupper(currentChar) ? 'A' : 'a';
encryptedMessage += ((currentChar + key[j] - 2 * shift) % 26) +
shift;
j = (j + 1) % keyLength;
} else {
encryptedMessage += currentChar;
}
}
return encryptedMessage;
}
string decryptVigenere(const string& message, const string& key) {
string decryptedMessage = "";
int keyLength = key.length();
for (int i = 0, j = 0; i < message.length(); ++i) {
char currentChar = message[i];
if (isalpha(currentChar)) {
char shift = isupper(currentChar) ? 'A' : 'a';
decryptedMessage += ((currentChar - key[j] + 26) % 26) + shift;
j = (j + 1) % keyLength;
} else {
decryptedMessage += currentChar;
}
}
return decryptedMessage;
}
int main() {
string message, key;
cout << "Enter the message to encrypt: ";
getline(cin, message);
cout << "Enter the key: ";
cin >> key;
string encryptedMessage = encryptVigenere(message, key);
string decryptedMessage = decryptVigenere(encryptedMessage, key);
cout << "\nEncrypted message: " << encryptedMessage << endl;
cout << "Decrypted message: " << decryptedMessage << endl;
return 0;
}