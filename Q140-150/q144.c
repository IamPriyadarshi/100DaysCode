#include <stdio.h>
typedef struct { char name[50]; int id; float value; } Item;
void printItem(Item it) {
    printf("Item name: %s\nID: %d\nValue: %.2f\n", it.name, it.id, it.value);
}
int main() {
    Item it;
    printf("Enter name: ");
    if (!fgets(it.name, sizeof it.name, stdin)) return 0;
    for (int k=0; it.name[k]; ++k) if (it.name[k]=='\n') { it.name[k]='\0'; break; }
    printf("Enter id: "); if (scanf("%d", &it.id)!=1) return 0;
    printf("Enter value: "); if (scanf("%f", &it.value)!=1) return 0;
    printItem(it);
    return 0;
}
