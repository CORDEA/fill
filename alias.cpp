#include "alias.h"

namespace fill {
    alias::alias() = default;

    alias::alias(const char *n, const char *p) {
        name = n;
        pattern = p;
    }

    void to_json(json &j, const alias &a) {
        j = json{
                {"name",    a.name},
                {"pattern", a.pattern}
        };
    }

    void from_json(const json &j, alias &a) {
        j.at("name").get_to(a.name);
        j.at("pattern").get_to(a.pattern);
    }
}
