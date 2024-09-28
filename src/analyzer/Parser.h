//
// Created by barra on 9/22/2024.
//

#ifndef DYNAMIC_CODE_ANALYZER_PARSER_H
#define DYNAMIC_CODE_ANALYZER_PARSER_H

#include <vector>
#include <string>

class Parser{
public:
    Parser();
    ~Parser();

    std::vector<std::string> tokenize(const std::string& code);
    // other parsing-related methods
};


#endif //DYNAMIC_CODE_ANALYZER_PARSER_H
