#include <iostream>

void register_cmd(char *cmd, char *pattern) {

}

int try_call(char *cmd, char *query) {

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc > 3) {
        char *sub = argv[1];
        if (strcmp(sub, "register") == 0) {
            register_cmd(argv[2], argv[3]);
            return 0;
        }
    }

    if (argc > 2) {
        return try_call(argv[1], argv[2]);
    }

    return 1;
}
