#include <stdio.h>
#include<string.h>

void palindrom(char a[11])
{
    int len, cnt = 0;
    
    len = strlen(a);
    for(int i = 0; i<len; i++) 
    {
        if(a[i] != a[len-1])
        {
            cnt+=1;
        }
        else{
            cnt+=0;
        }
    }
    
    if(cnt == 1)
    {
        printf("%d", 1);
    }    
    else
    {
        printf("%d", 0);  
    }
}

int main() {
    char A[11];
    scanf("%s", A);
    palindrom(A); 
    return 0;
}