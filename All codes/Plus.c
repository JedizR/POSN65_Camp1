#include <stdio.h>
#include <string.h>
char a[10000],b[10000],temp[10000];
int c[10100],len1,len2;
int compare(){
    int i=0;
    if(len1<len2) return 0;
    else if(len1>len2) return 1;
    else{
        for(i=0;i<len1;i++){
            if(a[i]<b[i]) return 0;
            if(a[i]>b[i]) return 1;
        }
    }
    return 2;
}

void pluss(){
    int i,j,k=0;
    if(!strcmp(a,"0")){printf("%s\n",b); return;}
    if(!strcmp(b,"0")){printf("%s\n",a); return;}
    for(i=len1-1,j=len2-1;i>=0&&j>=0;i--,j--,k++){
        c[k]+=((a[i]-'0')+(b[i]-'0'))%10;
        c[k+1]+=((a[i]-'0')+(b[i]-'0'))/10;
    }
    for(;i>=0;i--,k++){
        c[k]+=a[i]-'0';
        c[k+1]+=c[k]/10;
        c[k]%=10;
    }
    for(;j>=0;j--,k++){
        c[k]+=b[j]-'0';
        c[k+1]+=c[k]/10;        c[k]%=10;
    }
    if(c[k]>0) k++;
    for(k--;k>=0;k--) printf("%d",c[k]);
    printf("\n");
    return;
}

void minuss(char* d,char* e){
    int i,j,k=0,l; len1=strlen(d),len2=strlen(e);
    if(!strcmp(e,"0")){printf("%s\n",d); return;}
    if(!strcmp(d,"0")){printf("-%s\n",e); return;}
    for(i=len1-1,j=len2-1;i>=0&&j>=0;i--,j--,k++){
        if(d[i]<e[j]){
            for(l=i-1;l>=0&&d[l]=='0';l--);
            d[l]--;
            for(l++;l<i;d[l]='9',l++);
            d[i]+=10;
        }
        c[k]+=((d[i]-'0')-(e[j]-'0'))%10;
    }
    for(;i>=0;i--,k++){
        c[k]+=(d[i]-'0')%10;
    }
    for(k--;k>=0&&c[k]==0;k--);
    for(;k>=0;k--) printf("%d",c[k]);
    printf("\n");
    return;
}

int main(){
    int s1=1,s2=1;
    scanf("%s",a);
    if(a[0]=='-'){
        strcpy(a,&a[1]); s1=-1;
    }
    scanf("%s",b);
    if(b[0]=='-'){
        strcpy(b,&b[1]); s2=-1;
    }
    len1=strlen(a),len2=strlen(b),memset(c,0,sizeof(c));
    if(compare()==1){
        if(s1==1&&s2==1) pluss();
        else if(s1==1&&s2==-1) minuss(a,b);
        else if(s1==-1&&s2==1) printf("-"),minuss(a,b);
        else if(s1==-1&&s2==-1) printf("-"),pluss();
    }
    else if(compare()==2){
        if(s1!=s2) printf("0\n");
        else if(s1==1&&s2==1) pluss();
        else if(s1==-1&&s2==-1) printf("-"),pluss();
    }
    else{
        if(s1==1&&s2==1) pluss();
        else if(s1==1&&s2==-1) printf("-"),minuss(b,a);
        else if(s1==-1&&s2==1) minuss(b,a);
        else if(s1==-1&&s2==-1) printf("-"),pluss();
    }
    return 0;
}

