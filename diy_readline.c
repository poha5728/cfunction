#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int read_line(char str[], int limit);

void main(){
    char command_line[50];
    while(1){
        printf("$ ");

        if(read_line(command_line,50)<=0)
            continue;
        printf("%s\n",command_line);
    }
}

int read_line(char str[], int limit){
    int ch, i=0;
    while((ch=getchar()) != '\n'){
        if(i<limit-1)
            str[i++] = ch;
    }
    str[i]='\0';
    printf("!!%d\n",i);
    return i;
}
