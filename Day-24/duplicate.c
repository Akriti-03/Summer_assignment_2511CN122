#include<stdio.h>

int main() {
    char str[100];
    int freq[256]={0}, i;

    gets(str);

    for(i=0;str[i]!='\0';i++) {
        if(freq[str[i]]==0) {
            printf("%c",str[i]);
            freq[str[i]]=1;
        }
    }

    return 0;
}