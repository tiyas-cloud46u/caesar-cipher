//ENCRYPTION USING CEASER CIPHER
// INPUT PLAIN TEXT
//INPUT SECRET KEY
//START Reading PLAIN TEXT FROM FIRST TO LyAST ALPHABET
//REPLACE THE CHARACTER USING SECRET CODE
#include<iostream>
using namespace std;
#include<string.h>
int main()
{
char PT[50];
int key;
int i;
char ENC[50],DEC[50];
//input plaint text and key
cout<<"Enter plain text"<<endl;
gets(PT);
cout<<"Enter secret key"<<endl;
cin>>key;
char ch;
cout<<"Original Message"<<PT<<endl;
for(i=0;PT[i]!='\0';i++)
{ ch=PT[i];
if(ch!=' ')
{
ch=ch+key;
if(ch>='a'&&ch<='z')
{
if(ch>'z')
{
ch=ch-'z'+'a'-1;
}
ENC[i]=ch;
}
if(ch>='A'&&ch<='Z')
{
if(ch>'Z')
{
ch=ch-'Z'+'A'-1;
}
ENC[i]=ch;
}
}
ENC[i]=ch;
}
ENC[i]='\0';
cout<<endl;
cout<<"ENCRPYTION USING CEASER CIPHER IS"<<ENC<<endl;
}