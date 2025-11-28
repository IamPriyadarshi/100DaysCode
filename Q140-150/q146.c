#include <stdio.h>
typedef struct { int d,m,y; } Date;
typedef struct { char name[50]; int id; Date join; } Employee;
int main(){
    Employee e;
    printf("Enter name: ");
    if (!fgets(e.name, sizeof e.name, stdin)) return 0;
    for (int k=0;e.name[k];++k) if(e.name[k]=='\n'){e.name[k]='\0';break;}
    printf("Enter id: "); if (scanf("%d", &e.id)!=1) return 0;
    printf("Enter joining date (d m y): "); if (scanf("%d %d %d", &e.join.d, &e.join.m, &e.join.y)!=3) return 0;
    printf("\nEmployee: %s\nID: %d\nJoined: %02d-%02d-%04d\n", e.name, e.id, e.join.d, e.join.m, e.join.y);
    return 0;
}
