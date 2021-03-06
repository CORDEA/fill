#include <string>
#include <nlohmann/json.hpp>

using nlohmann::json;

namespace fill {
    struct alias {
        std::string name;
        std::string pattern;

        alias();

        alias(const char *n, const char *p);
    };

    void to_json(json &j, const alias &a);

    void from_json(const json &j, alias &a);
}
