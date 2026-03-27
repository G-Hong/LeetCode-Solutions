class Solution {
public:
    string reverseWords(string s) {
        //split sentence into words and save as string type array
        //print the array in reverse
        istringstream iss(s);
        vector<string> words;
        string word;
        string result;
        while (iss >> word){
            words.push_back(word);
        }
        for (int i=words.size()-1; i>0; i--){
            result += words[i] + ' ';
        }
        result += words[0];
        return result;
    }
};