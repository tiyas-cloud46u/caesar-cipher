#include<stdio.h>

#include<string.h>
void main()
{
            int i,j=0;
            int tmp1,tmp2;
            int dtln,kln,sum;
            char data[100],key[100],cipher[100];

            clrscr();

            printf("Enter String : ");
            gets(data);
            printf("Enter Key : ");
            gets(key);

            dtln=strlen(data);
            kln=strlen(key);
// Sender Side
            for(i=kln;i<dtln;i++)
            {
                        if(data[i]==32)
                        {
                                    i++;
                        }
                        key[i]=key[j];
                        j++;
            }

            for(i=0;i<dtln;i++)
            {
                   if(data[i]==32)
                   {
                        cipher[i]=' ';
                        i++;
                   }
                   else if(data[i]<=90 && data[i]>=65)
                   {
                                    tmp1=data[i]-65;
                   }
                   else if(data[i]<=123 && data[i]>=97)
                   {
                                    tmp1=data[i]-97;
                   }

                   tmp2=key[i]-64;
                   sum=tmp1+tmp2;

                   if(sum>26)
                   {
                                    sum=sum-26;
                                    cipher[i]=sum+64;
                   }
                   else
                   {
                                    cipher[i]=sum+64;
                   }
            }
            cipher[i++]='\0';
            puts(cipher);
//RECEIVER SIDE
            printf("Receiver Side\n");
            for(i=0;cipher[i]!='\0';i++)
            {
                   tmp1=cipher[i]-64;
                   tmp2=key[i]-65;
                   sum=tmp1-tmp2;

                   if(sum<0)
                   {
                                    sum=sum+26;
                                    cipher[i]=sum+64;
                   }
                   else
                   {
                                    cipher[i]=sum+64;
                   }
            }
            cipher[i++]='\0';
            printf(“\n\nCipher Text :”);
            puts(cipher);
            getch();
}