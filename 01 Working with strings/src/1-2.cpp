// Are the following definitions valid? Why or why not?

#include <string>

const std::string exclaim = "!";
const std::string message = "Hello" + ", world" + exclaim;

// NO! The second definition is not valid as it tries to
//     concatenate two string literals, which is basically
//     like adding two const char * (it doesn't make sense)
//     It could work if one of the string literals in the
//     leftmost operation were a string eg

const std::string message
    = std::string("Hello") + ", world" + exclaim;

// NB: Although this is a bit contrived, as you could just have

const std::string message = "Hello, world" + exclaim;
