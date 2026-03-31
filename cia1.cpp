#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string encrypt(string ip,int n){
    string res="";
    for(char ch:ip){
        if(ch>='A' && ch<='Z'){
            res += (ch - 'A' + n) % 26+ 'A';
        }
        else if(ch>='a' && ch<='z'){
            res += (ch - 'a' + n) % 26+ 'a';
        }
        else{
            res += ch;
        }
    }
    return res;
}
string decrypt(string ip,int n){
    string res="";
    for(char ch:ip){
        if(ch>='A' && ch <='Z'){
            res += ((ch - 'A' - n + 26) % 26) + 'A';
        }
        else if(ch>='a' && ch<='z'){
            res += ((ch - 'a' - n + 26) % 26) + 'a';
        }
        else{
            res+=ch;
        }
    }
    return res;
}
int main(){
    string text;
    cout <<"Enter a string:\n";
    getline(cin, text);
    int n;
    cout<<"Enter number of rotations:\n";
    cin >>n;
    n = n % 26;
    string res=encrypt(text,n);
    cout << "String after encrypting: " << res << endl;
    string ans=decrypt(res,n);
    cout << "String after decrypting: " << ans << endl;
}

