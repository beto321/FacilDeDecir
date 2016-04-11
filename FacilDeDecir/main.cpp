#include <stdio.h>
#include <string.h>

char word[25];
int len;

int isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch='o' || ch=='u')
        return 1;
    return 0;
}

int rule_1(){
    int i;
    for(i=0; i<len; i++)
        if(isVowel(word[i]))
            return 1;
    return 0;
}


int main()
{


    return 0;
}
