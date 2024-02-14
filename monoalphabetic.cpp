

#include<iostream>
using namespace std;

string Monoalphabetic_Cipher_encryption(string message){
	int n = message.length(),temp;
	string key="FDSAVCXZGHJKLREWQTYUIOPMNB";
	string ency="";
	for(int i=0;i<n;++i){
		temp = message[i]-'a';
		ency+=key[temp];
	}
	return ency;
}

string Monoalphabetic_Cipher_decryption(string message){
	int n = message.length(),temp;
	string key = "dzfboaijuklmxyvwqncrtepgsh";
	string ency="";
	for(int i=0;i<n;++i){
		temp = message[i]-'A';
		ency+=key[temp];
	}
	return ency;
}
int main(){
	string s;
	cout<<"Enter Message: ";
	getline(cin,s);
	string p = Monoalphabetic_Cipher_encryption(s);
	cout<<"Monoalphabetic_Cipher_encryption :"<<p<<"\n";
	cout<<"Monoalphabetic_Cipher_decryption: "<<Monoalphabetic_Cipher_decryption(p)<<"\n";
	system("pause");
	return 0;
}