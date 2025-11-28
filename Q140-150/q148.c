#include <stdio.h>
#include <string.h>
typedef struct { char name[50]; int id; float marks; } S;
int identical(S *a, S *b){ return strcmp(a->name,b->name)==0 && a->id==b->id && a->marks==b->marks; }
int main(){
    S x,y;
    printf("Enter name1: ");
    if (!fgets(x.name, sizeof x.name, stdin)) return 0;
    for (int k=0;x.name[k];++k) if(x.name[k]=='\n'){x.name[k]='\0';break;}
    printf("id1 marks1: "); if (scanf("%d %f", &x.id, &x.marks)!=2) return 0;
    getchar();
    printf("Enter name2: ");
    if (!fgets(y.name, sizeof y.name, stdin)) return 0;
    for (int k=0;y.name[k];++k) if(y.name[k]=='\n'){y.name[k]='\0';break;}
    printf("id2 marks2: "); if (scanf("%d %f", &y.id, &y.marks)!=2) return 0;
    if (identical(&x,&y)) printf("Structs are identical\n"); else printf("Structs are different\n");
    return 0;
}
