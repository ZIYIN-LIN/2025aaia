///LeetCode 38. count and say

class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";///��²�檺CASE,�p�G1�Ϧ^��1
        string prev = countAndSay(n-1);
        string ans ="";
        char prevC = prev[0];///�e�@�Ӧr��
        int prevN = 1;///�e�@�Ӧr��,�ֿn�X�{�X��
        for(int i=1;i<prev.length();i++){
            if(prevC == prev[i]) prevN++;///�ۦP�[1
            else{///�r�����P��
                ans += string(to_string(prevN))+prevC;
                prevC =prev[i];///�s���r��
                prevN =1;///�q1�}�l(�s���r��,��1��)
            }
        }
        ans += string(to_string(prevN))+prevC;
        return ans;
    }
};
