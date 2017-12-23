#include<stdio.h>
#include<string.h>

int main(void){
    FILE *fp = fopen("test.txt", "r");
    char buf1[50];
    char buf2[50];

    if(fp==NULL){
        printf("ERROR\n");
        return 0;
    }

    while((fscanf(fp,"%s",buf1))!=EOF){
        fscanf(fp, "%s", buf2);
        printf("%s : %s\n",buf1,buf2);
    }
}
