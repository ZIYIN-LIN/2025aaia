//week10-4
//leetcode 1399 Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};
        int largest = 0;
        for(int i=1; i<=n; i++){ //1..n人類迴圈
            int now =i;  // 現在要剝皮的數字
            int total =0; // 迴圈前total 是0
            while(now>0){
                //迴圈哩,把total 一直加起來
                total +=now % 10;//剝皮now %10 把每位數加到total裡
                now = now /10;
            }
            a[total]++;//迴圈後,要統計total的出現次數
            if( a[total] > largest) largest = a[total];
        }
        int ans = 0;//最大樹的那群,有幾群?
        for(int i=0; i<100; i++){
            if(a[i]==largest) ans++;
        }
        return ans;
    }
};
