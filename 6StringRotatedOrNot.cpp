// https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620
bool areRotations(string s1, string s2){
    if(s1.length()!=s2.length()) return false;
    else{
        s1+=s1;
        int n=s2.length();
        for(int i=0;i<n;i++){
            string ss=s1.substr(i,n);
            if(ss==s2) return true;
        }
    }
    return false;
}