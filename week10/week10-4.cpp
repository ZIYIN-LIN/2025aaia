//week10-4
//leetcode 1399 Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};
        int largest = 0;
        for(int i=1; i<=n; i++){ //1..n�H���j��
            int now =i;  // �{�b�n��֪��Ʀr
            int total =0; // �j��etotal �O0
            while(now>0){
                //�j���,��total �@���[�_��
                total +=now % 10;//���now %10 ��C��ƥ[��total��
                now = now /10;
            }
            a[total]++;//�j���,�n�έptotal���X�{����
            if( a[total] > largest) largest = a[total];
        }
        int ans = 0;//�̤j�𪺨��s,���X�s?
        for(int i=0; i<100; i++){
            if(a[i]==largest) ans++;
        }
        return ans;
    }
};
