#include <bits/stdc++.h>

using namespace std;

typedef struct node{
    int num;
    struct node *left,*right;
}node;

node* newnode(int num){
    node *p;
    p=(node *)malloc(sizeof(node));
    p->num=num;
    p->left=p->right=NULL;
    return p;
}

int main(){
    int n,i,num;
    char a[100];
    scanf("%d",&n);
    node *head,*run,*last,*use;
    head=newnode(999);
    run=newnode(0);
    last=newnode(0);
    use=newnode(0);
    run=last=head;
    for(i=0;i<n;i++){
        scanf(" %s",a);
        if(!strcmp(a,"head")){
            run=head;
        }
        else if(!strcmp(a,"next")){
            if(run->right!=NULL)
                run=run->right;
        }
        else if(!strcmp(a,"tail")){
            run=last;
        }
        else if(!strcmp(a,"add")){
            scanf("%d",&num);
            if(run==last){
                use=newnode(num);
                use->left=run;
                run->right=use;
                last=use;
            }
            else{
                use=newnode(num);
                run->right->left=use;
                use->right=run->right;
                run->right=use;
                use->left=run;
                while(last->right!=NULL)
                    last=last->right;
            }
        }
        else if(!strcmp(a,"remove")){
            if(run!=last){
                use=run->right;
                if(use->right!=NULL){
                    run->right=use->right;
                    run->right->left=run;
                }
                else
                    run->right=NULL;
                for(last=run;last->right!=NULL;)
                    last=last->right;
            }
        }
        else if(!strcmp(a,"call")){
            printf("%d\n",run->num);
        }
        else if(!strcmp(a,"list")){
            while(run->right!=NULL){
                printf("%d ",run->num);
                run=run->right;
            }
            printf("%d\n",run->num);
        }
    }
    return 0;
}
/*
14
call
add 5
add 6
list
head
next
add 7
tail
list
head
list
head
remove
list
*/
