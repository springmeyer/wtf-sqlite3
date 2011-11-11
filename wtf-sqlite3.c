
#include <sqlite3.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int is_ts = sqlite3_threadsafe();
    if (is_ts == 0) {
        printf("Single: %d\n", is_ts);
    } else if (is_ts == 2) {
        printf("Multi: %d\n", is_ts);
    } else if (is_ts == 1) {
        printf("Serial: %d\n", is_ts);
    }

    for (int i = 0; ; ++i) {
        const char * opt = sqlite3_compileoption_get(i);
        if (opt == NULL) {
            break;
        } else {
            printf("opt: %s\n", opt);
        }
    }

    return 0;
}
