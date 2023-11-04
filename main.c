#include <stdio.h>
#include <unistd.h>
#define WHITE "\033[0;37m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;36m"

void main() {
    char *name_items = NULL;
    name_items = (char *) malloc(100 * sizeof(name_items));
    puts(BLUE"Waiting...\n");
    sleep(1);
    if(name_items != NULL) {
        printf("\033[0;32m[+] Success Alocalization variable\n\n\033[0;37m");
    } else {
        printf("\033[0;31m[!] Failed to Alocalization variable\n\n\033[0;37m");
    }
    sleep(1);
    printf("\033[0;93m\033[1mAdd words: \033[0;97m");
    fgets(name_items, 100, stdin);
    name_items[strlen(name_items) - 1] = 0;
    int total = strlen(name_items);
    printf("\n- Words: \033[0;95m%s\033[0;97m\n- Total length: \033[0;95m%d\033[0;97m", name_items, total);

    int find_a_chr = 0;
    while(1) {
    
        printf("\n\nFind a \033[0;96mcharacter\033[0;97m in length: ");
        scanf("%d", &find_a_chr);
        usleep(800000);
        for(int i = 0; i < strlen(name_items); i++) {
            if(find_a_chr > 0 && find_a_chr <= total) {
                if(find_a_chr == i + 1) {
                    char uppercase = toupper(name_items[i]);
                    printf("Character for length %d is "GREEN"%c"WHITE, find_a_chr, uppercase);
                }
            } else {
                printf("The above characters only have \033[0;31m\033[1m%d"WHITE" length!", total);
                printf("\n\nFind a character in length: ");
                scanf("%d", &find_a_chr);
            }
        }
    }
    getchar();
}
