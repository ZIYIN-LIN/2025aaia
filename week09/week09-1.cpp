///LeetCode 38. count and say

class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";///最簡單的CASE,如果1救回傳1
        string prev = countAndSay(n-1);
        string ans ="";
        char prevC = prev[0];///前一個字母
        int prevN = 1;///前一個字母,累積出現幾次
        for(int i=1;i<prev.length();i++){
            if(prevC == prev[i]) prevN++;///相同加1
            else{///字母不同時
                ans += string(to_string(prevN))+prevC;
                prevC =prev[i];///新的字母
                prevN =1;///從1開始(新的字母,有1個)
            }
        }
        ans += string(to_string(prevN))+prevC;
        return ans;
    }
};
