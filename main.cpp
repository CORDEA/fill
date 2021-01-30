#include <iostream>
#include <fstream>
#include "alias.h"

std::string read_file(const char *name) {
    std::string line;
    std::string lines;
    std::ifstream file(name);
    if (file.is_open()) {
        while (std::getline(file, line)) {
            lines += line;
        }
        file.close();
    }
    return lines;
}

std::vector<fill::alias> read_json(const char *name) {
    auto l = read_file(name);
    if (l.length() > 0) {
        return json::parse(l);
    }
    return {};
}

void write_json(const char *name, const std::vector<fill::alias> *aliases) {
    std::ofstream file(name);
    json j = *aliases;
    file << std::setw(4) << j << std::endl;
}

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
