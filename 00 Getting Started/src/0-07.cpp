// What about this one?

#include <iostream>

int main()
{
    /* This is a comment that extends over several line
        because it uses /* and */ as its starting and ending delimiters */
    std::cout << "Does this work?" << std::endl;
    return 0;
}

// Answer: NO! The */ within the comment block ends the comment
//         and so the rest of the comment is interpreted as an
//         invalid line of code. To correct it do

#include <iostream>

int main()
{
    /* This is a comment that extends over several line
        because it uses /* and *\/ as its starting and ending delimiters */
    std::cout << "Does this work?" << std::endl;
    return 0;
}

// NB: although this still gives a compiler warning for the
//     use of /* within a comment block
