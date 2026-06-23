#include<stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100];
    int i, freq[256]={0};

    gets(str1);
    gets(str2);

    if(strlen(str1)!=strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    for(i=0;str1[i]!='\0';i++) {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }

    for(i=0;i<256;i++) {
        if(freq[i]!=0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}