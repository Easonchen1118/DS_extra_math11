#include <stdio.h>
//購票計算
int main(){
    int num;
    scanf("%d", &num);
    int ten, five, one;
    ten = num / 10;
    num -= ten*10;
    five = num / 5;
    num -= five*5;
    one = num;
    printf("NT10=%d\n", ten);
    printf("NT5=%d\n", five);
    printf("NT1=%d\n",one);
    return 0;
}
