//
// Created by barra on 9/22/2024.
//

#include "Analyzer.h"
# include "Parser.h"

void CodeAnalyzer::parseCode(std::string& code) {
    std::vector<std::string> tokens = parser.tokenize(code);
    // process tokens and detect issues
    for(const auto& token : tokens){
        if(token.empty()){
            issues.push_back("Empty is found.");
        }
    }

}

void CodeAnalyzer::analyzeCode(std::string &code) {
    parseCode(code);  // call to tokenize and process
    collectMetrics();   // call to collect metrics after parsing
}

