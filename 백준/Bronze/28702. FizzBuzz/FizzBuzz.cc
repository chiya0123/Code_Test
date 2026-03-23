#include <stdio.h>
#include <stdlib.h>

int main() {
    int ans,flag=0;
    char input[9];
    for (int i = 0; i < 3; i++) {
        scanf("%s", input);
        if (input[0]=='F' || input[0]=='B') continue;
        else ans=atoi(input) + 3 - i;
    }
    if (ans%3==0) printf("Fizz"),flag++;
    if (ans%5==0) printf("Buzz"),flag++;
    if (!flag) printf("%d",ans);

}