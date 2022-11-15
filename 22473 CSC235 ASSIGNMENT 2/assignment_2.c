#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int N;
    FILE *fp;
    fp = fopen("eve.in","r");
    if(fp==NULL){
        printf("The file in question does not exist!");
        exit(0);
    }

    fscanf(fp,"%d",&N);
    printf("%d \n",N);

    for(int i=0;i<N;i++){
        char str[100];
        fscanf(fp,"%s",str);
        int len=strlen(str);
        int count=0;
        for(int j=0;j<len;j++){

            if(str[j]=='U'){
                count++;
            }
            else{
                break;
            }
        }
        printf("%s %d \n",str,count);
    }
    return 0;
}
