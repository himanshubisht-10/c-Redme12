#include<stdio.h>
#include<math.h>
int main(){
    // count vowels and consonants in a string
    char str[100];
    int i, vowels =0, consonants =0;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] != '\0'; i++){
        char ch = str[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            ch = tolower(ch);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            } else {
                consonants++;
            }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
        }
    }
}