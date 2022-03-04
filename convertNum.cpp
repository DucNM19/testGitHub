#include <iostream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string s1[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string s2[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

string loow(string &s)
{
    for (int i = 0; i < s.size(); i++)  s[i] = tolower(s[i]);
    return s;
}

int cvert(string s)
{
    int n;
    for (int i = 0; i < 10; i++){
        if (s == s1[i] || s == s2[i])   n = i;
    }
    return n;
}

int main ()
{
    string s;
    getline(cin, s);
    s = " " + s + " ";
    int start = -1;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && s[i-1] == ' ')   start = i;
        if (s[i] != ' ' && s[i+1] == ' '){
            string w = s.substr(start, i-start+1);
            if (w != "+"){
                loow(w);
                sum += cvert(w);
            }
        }
    }
    cout << sum << endl;
    return 0;
}
