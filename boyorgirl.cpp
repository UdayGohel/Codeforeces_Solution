#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ct=0;
    sort(s.begin(),s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=s[i+1])
        ct++;
    }
    if(ct%2==0)
    cout << "CHAT WITH HER!" << endl;
    else
    cout << "IGNORE HIM!" << endl;

}