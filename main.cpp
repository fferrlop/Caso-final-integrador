#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "json11.hpp"


enum variant_type { Symbol, Number, List, Proc, Lambda, Cadena };

int main() {

    struct Entorno;

    class Variant {
    public:
        typedef Variant(*proc_type) ( const std::vector<Variant>& );
        typedef std::vector<Variant>::const_iterator iter;
        typedef std::map<std::string, Variant> map;

        variant_type type;
        std::string val;
        std::vector<Variant> list;
        proc_type proc;
        Entorno* env;

    }
