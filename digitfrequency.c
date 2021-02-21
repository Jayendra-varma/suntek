#include <stdio.h>
#include <string.h>
int main() {

    char s[1000];
    int n,i,j,c,t=48;
    
    scanf("%[^\n]%*c",&s);
    n=strlen(s);
    for(i=0;i<10;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(s[j]==t)
            {
                c++;
            }
        }
        printf("%d ",c);
            t++;
    }
}
