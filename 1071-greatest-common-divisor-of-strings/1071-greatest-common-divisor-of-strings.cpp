/*
class Solution {
public:
    //gcd function
    string gcd(string a, string b){       
        string temp;
        //longer one = a
        //shorter one = b
        //a-b is unavailable -> no common
        //available then gcd(a-b, b)
        if(a == b){
            return a;
        }
        else if(a.length() < b.length()){
            temp = a;
            a = b;
            b = temp;
        }

        else if(a.length()==b.length()){
            return "";
        }

        if (a.substr(0, b.length()) == b){
            return gcd(a.substr(b.length()), b);
        }
        return "";

    }
    string gcdOfStrings(string str1, string str2) {
            return gcd(str1, str2);
        }
};
*/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
            if (str1+str2 != str2+str1){
                return "";
            }
            return str1.substr(0, gcd(str1.length(), str2.length()));
        }
};
