class Solution {
public:
    string makeValidStringForPalCheck(string s){
        string r;
        for(char c:s){
            if((c>='a' && c<='z') || (c>='A' && c<='Z'))r.push_back(tolower(c));
            else if (c>='0' && c<='9')r.push_back(c);
        }
        return r;
    }
    bool isPalindrome(string s) {
        string resultS =  makeValidStringForPalCheck(s);
        cout<<resultS;
        int i = 0;
        int n = resultS.length();
        int j = n-1;
        while(i<j){
            if(resultS[i++]!=resultS[j--])return false;
        }
        return true;
    }
};
