#include <stdio.h>

int main() {
    char code[13];
    int sum=220;
    int index, ans;
    scanf("%s",code);
    for (int i = 0; i < 13; i++) {
        if (code[i]!='*') {
            if (i%2==0) sum-=code[i]-'0';
            else sum-=3*(code[i]-'0');
        }
        else index=i%2;
    }
    ans=sum%10;
    if (index==1) {
        for (int i = 0; i < 3; i++) {
            if ((ans+10*i)%3==0) {
                ans=(ans+10*i)/3;
                break;
            }
        }
    }
    printf("%d",ans);
}