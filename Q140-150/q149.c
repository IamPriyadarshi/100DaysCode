#include <stdio.h>
#include <stdlib.h>
typedef struct { char name[50]; int id; } Node;
int main(){
    Node *p = malloc(sizeof *p);
    if (!p) { perror("malloc"); return 1; }
    printf("Enter name: ");
    if (!fgets(p->name, sizeof p->name, stdin)) { free(p); return 0; }
    for (int k=0;p->name[k];++k) if(p->name[k]=='\n'){p->name[k]='\0';break;}
    printf("Enter id: "); if (scanf("%d", &p->id)!=1) { free(p); return 0; }
    printf("Name: %s\nID: %d\n", p->name, p->id);
    free(p);
    return 0;
}
