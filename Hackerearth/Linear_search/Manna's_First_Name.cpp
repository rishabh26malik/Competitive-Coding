
#include<stdio.h>
int main()
{
    char str[150],s1[]="SUVO", s2[]="SUVOJIT";
    int t,i,count1=0,count2=0,len,j,flag;
    int suvo,sj;
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        len=strlen(str);
        sj=0;
        suvo=0;
        for(i=0;i<len;i++)
        {
            if(str[i]=='S')
            {
                flag=1;
                if(str[i+1]=='U' && str[i+2]=='V' && str[i+3]=='O' && str[i+4]=='J' && str[i+5]=='I' && str[i+6]=='T')
                    sj++;
                else if(str[i+1]=='U' && str[i+2]=='V' && str[i+3]=='O')
                    suvo++;
                
            }
        }
        printf("SUVO = %d, SUVOJIT = %d \n",suvo,sj);
    }
        return 0;
    }
    
