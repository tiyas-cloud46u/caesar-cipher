#include<iostream>
using namespace std;

int main(){
    int t,n,m,i,j,k,sum=0;
    string s;
    cout<<"Enter the message"<<'\n';
    cin>>s;
    cout<<"Enter key"<<'\n';
    cin>>n;
    vector<vector<char>> a(n,vector<char>(s.size(),' '));
    j=0;
    int flag=0;
    for(i=0;i<s.size();i++){
        a[j][i] = s[i];
         if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;

        if(flag==0){
            j++;
        }
        else j--;
    }
    for(i=0;i<n;i++){
        for(j=0;j<s.size();j++){
            if(a[i][j]!=' ')
                cout<<a[i][j];
        }
    }
    cout<<'\n';   
    return 0;
}