#include <iostream>
#include <string>
#include <conio.h>
 
class Encrypt {
 
   private:
      char line[80];
      int key;
 
   public:
      void getdata();
      void enc();
      void dec();
      void mix();
 
};
 
void Encrypt::getdata() {
   cout <<"Enter a line of text: ";
   cin.getline(line, 80);
}
 
void Encrypt::enc() {
   int code;
   int length;
   char *enc;
   key = 4;
   enc = line;
   length = strlen(line);
 
   for (int i = 0; i < length; i++) {
      *enc += key;
      enc++;
   }
   cout << "Encrypted text is: " << line << endl;
}
 
void Encrypt::dec() {
   int length;
   char *dec;
   key = 4;
   dec = line;
   length = strlen(line);
 
   for (int i = 0; i < length; i++) {
      *dec -= key;
      dec++;
   }
   cout << "Decrypted text is: " << line << endl;
   getche();
}
 
int main() {
   Encrypt text;
   text.getdata();
   text.enc();
   text.dec();
}