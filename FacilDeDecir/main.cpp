#include <stdio.h>
#include <string.h>

char word[25];
int len;

int isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch='o' || ch=='u')
        return 1;
    return 0;
}

int rule_2(){
    int i, v=0, v=0;
    for(i=0; i<len; i++){
        if(isVowel(word[i])){
            v++;
            c=0;
        }else{
            c++;
            v=0;
        }
        if(v==3 || c==3)
            return 0;
    }
    return 1;
}
int main()
{


    return 0;
}
