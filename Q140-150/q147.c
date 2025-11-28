#include <stdio.h>
#include <stdlib.h>
typedef struct { char name[50]; int id; float salary; } Employee;
int main(){
    Employee e;
    printf("Enter name: ");
    if (!fgets(e.name, sizeof e.name, stdin)) return 0;
    for (int k=0;e.name[k];++k) if(e.name[k]=='\n'){e.name[k]='\0';break;}
    printf("Enter id: "); if (scanf("%d", &e.id)!=1) return 0;
    printf("Enter salary: "); if (scanf("%f", &e.salary)!=1) return 0;
    FILE *f = fopen("employees.dat","wb");
    if (!f) { perror("fopen"); return 1; }
    if (fwrite(&e, sizeof e, 1, f) != 1) { perror("fwrite"); fclose(f); return 1; }
    fclose(f);
    printf("Written to employees.dat\nReading back:\n");
    f = fopen("employees.dat","rb");
    if (!f) { perror("fopen"); return 1; }
    Employee r;
    if (fread(&r, sizeof r, 1, f) != 1) { perror("fread"); fclose(f); return 1; }
    fclose(f);
    printf("Name: %s\nID: %d\nSalary: %.2f\n", r.name, r.id, r.salary);
    return 0;
}
