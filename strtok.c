/*
 * 문자열 tokenizing 함수
 * token = strtok(문자열,자를분리자문자열);
 * 이러면 token에 잘라진 token들이 배열로 저장됨
 */

#include<stdio.h>
#include<string.h>

int main(void){
    char str[]="Now # is the time # for driking#";
    char delim[]="#";
    char *token;

    token = strtok(str,delim);
    while(token != NULL){
        printf("next token is :%s:%d\n",token,strlen(token));
        token = strtok(NULL,delim);
    }
    return 0;
}
