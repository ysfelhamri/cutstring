#include <stdio.h>
#include <stdlib.h>
#define NB 1000
char** cut(char* str,int nbr);
int main()
{
    char str[NB];
    printf("Enter the initial string : ");
    gets(str);
    cut(str,NB);
    return 0;
}
char** cut(char* str,int nbr){
    char** res;
    int i,j,k,count=1,count2,count3=0,count4=0;
   for(i=0; i<nbr&&str[i]!='\0'; i++){
        if(str[i]==' ')
            count++;
    }
    res = (char**)malloc(count*sizeof(char*));
    if(res==NULL){
        printf("Alloc Error");
        exit(33);
    }
    for(i=0; i<count; i++){
            count2=0;
        for(j=count3; j<nbr&&str[j]!='\0'; j++){
            if(str[j]!=' '){
                count2++;
                count3++;
            }
            else{
                count3++;
                break;
            }
        }
        res[i] = (char*)malloc((count2+1)*sizeof(char));
                if(res[i]==NULL){
                    printf("Alloc Error");
                    exit(33);
                }
        for(k=count4,j=0;k<nbr&&j<count2;k++,j++){
                if(str[k]!=' '){
                    res[i][j]=str[k];
                    count4++;
                    }else{
                        count4++;
                        break;
                     }
            }
            count4++;
        res[i][count2]='\0';
    }
    //verification
    for(i=0;i<count;i++){ 
        printf(" res[%d] = %s\n",i,res[i]);
        }
     return res;
}
