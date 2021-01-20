#include <bits/stdc++.h>
using namespace std;

string trim(string str) {
    const char* WhiteSpace = " \t\v\r\n";
    int start = str.find_first_not_of(WhiteSpace);
    int end = str.find_last_not_of(WhiteSpace);
    return start == end ? std::string() : str.substr(start, end - start+1);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t; cin>>t;
    while(t--) {
        string str;
        getline(cin,str);
        while(str.length()==0) 
            getline(cin,str);
        str= trim(str);
        cout <<str<< '\n';
    }
    return 0;
}

