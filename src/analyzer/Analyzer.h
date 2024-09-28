//
// Created by barra on 9/22/2024.
//

#ifndef DYNAMIC_CODE_ANALYZER_ANALYZER_H
#define DYNAMIC_CODE_ANALYZER_ANALYZER_H

#include <string>
#include <vector>  // use for tokens, issues, metrics
#include <map>     // use for key-value pairs (variable names and their counts)

#include "Parser.h"

class CodeAnalyzer{

public:
    // use constructor and destructor to manage resources effectively
    // constructor
    CodeAnalyzer();
    // destructor
    ~CodeAnalyzer();

    // public methods for analysis
    void analyzeCode(std::string& code);
    void collectMetrics();


private:
    int memoryUsage{0}; // memory usage
    std::vector<std::string> issues; // detect issues
    Parser parser;

};

void CodeAnalyzer::analyzeCode(std::string &code) {
    collectMetrics();
}

void CodeAnalyzer::collectMetrics() {
    // decide what metrics we should collect
    // line count, variable count, issue count
    // Populate the memoryUsage and issues vector based on your analysis, with what we have.
    // Example: populate and collect metrics

}


#endif //DYNAMIC_CODE_ANALYZER_ANALYZER_H
