// https://practice.geeksforgeeks.org/problems/anagram-1587115620/
#include <iostream>
#include <algorithm>
using namespace std;
bool checkAnagrams(string str1, string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}
int main()
{
  string Str1 = "INTEGER";
  string Str2 = "TEGERNI";
  if(checkAnagrams(Str1, Str2))
  cout << "True" << endl;
  else
  cout<<"False"<<endl;
  return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    int freq[26]={0};
    for(int i=0;i<str1.length();i++){
        freq[str1[i]-'A']++;
    }
    for(int i=0;i<str2.length();i++){
        freq[str2[i]-'A']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}

int main()
{
  string Str1 = "INTEGER";
  string Str2 = "TEGERNI";
  if(CheckAnagrams(Str1, Str2))
  cout << "True" << endl;
  else
  cout<<"False"<<endl;
  return 0;
}