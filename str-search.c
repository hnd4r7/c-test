#include <stdio.h>
#include <string.h>

int headEqual(char * src, char* query){
    for(int i= 0; i< strlen(query); i++){
        if (src[i] !=  query[i])
        {
            return -1;
        
    }
    return 0;
}

int searchStr(char* src, char* query){
    int len = strlen(src);
    int qlen = strlen(query);
    for (int i = 0; i< len -1; i++){
        if(headEqual(&src[i], query) == 0){
            return i;
        }
    }
}

int main(int argc, char const *argv[]){
    char* src = "hhllbbkkllkjuu";
    char* query = "kk";

    printf("%d\n", query[1]); //取值
    printf("%d\n", &query[1]); 
    printf("%d\n", query + 1);

    int position = searchStr(src,query);
    printf("current pos : %d\n", position);
}
