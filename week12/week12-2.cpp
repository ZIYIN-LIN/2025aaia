///week12-2.cpp
///Fiboncci�ƦC
///�e���ۥ[
#include <stdio.h>
int main()
{///�}�C���ŧi,�k�䦳�L����,�S�g��,����0
    int a[30]={0,1};///�̭���0
    printf("1 ");///���L�X1��
    for(int i=2;i<30; i++){///�b�L�᭱����
        a[i] = a[i-1] + a[i-2];///�e�ⶵ�ۥ[
        printf("%d ",a[i] );
    }
}
