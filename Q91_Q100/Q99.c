/* Q99: Change date format dd/04/yyyy -> dd-Apr-yyyy */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100];
    printf("Enter date (dd/04/yyyy): ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    s[strcspn(s, "\n")] = 0;
    // naive replacement of "/04/" with "-Apr-"
    char *p = strstr(s, "/04/");
    if (p) {
        char out[200];
        int prefix_len = p - s;
        strncpy(out, s, prefix_len);
        out[prefix_len] = 0;
        strcat(out, "-Apr-");
        strcat(out, p+4); // skip "/04/"
        printf("Result: %s\n", out);
    } else {
        printf("Input does not match pattern dd/04/yyyy\n");
    }
    return 0;
}
