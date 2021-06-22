#include<stdio.h>
#include<string.h>

int main(){

    int i=1, a, b;
    char e[5];

    while(1){
        scanf("%d %s %d", &a, e, &b);

        if ((i>12000)||!strcmp(e, "E"))
            break;

        if(!strcmp(e,">")){
            if(a>b) printf("Case %d: true\n", i++);
            else printf("Case %d: false\n", i++);
        }
        if(!strcmp(e,">=")){
            if(a>=b) printf("Case %d: true\n", i++);
            else printf("Case %d: false\n", i++);
        }
        if(!strcmp(e,"<")){
            if(a<b) printf("Case %d: true\n", i++);
            else printf("Case %d: false\n", i++);
        } 
        if(!strcmp(e,"<=")){
            if(a<=b) printf("Case %d: true\n", i++);
            else printf("Case %d: false\n", i++);
        }
        if(!strcmp(e,"==")){
            if(a==b) printf("Case %d: true\n", i++);
            else printf("Case %d: false\n", i++);
        }
        if(!strcmp(e,"!=")){
            if(a!=b) printf("Case %d: true\n", i++);
            else printf("Case %d: false\n", i++);
        }

        
    }

    return 0;
}