#include "rules.h"
#include <unordered_map>

#ifndef _COLLECTION
#define _COLLECTION

class collection
{
    std::unordered_map<int, rules> map;

    bool init;

public:
    collection() { makeNull(); reset(); }
    ~collection() { cleanup(); }

    bool initalised() { return init; }
    void reset()
    {
        init = false; cleanup();

        map[30] = rules(false, false, false, true, true, true, true, false);
        map[90] = rules(false, true, false, true, true, false, true, false);        
        map[110] = rules(false, true, true, false, true, true, true, false);
        map[250] = rules(true, true, true, true, true, false, true, false);        
        map[254] = rules(true, true, true, true, true, true, true, false);
        
        init = true;
    }

    rules lookup(int rule)
    {
        return map[rule];
    }

protected:
    void makeNull() { }
    void cleanup() { }
};

#endif