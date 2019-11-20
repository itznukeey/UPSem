//
// Created by itznukeey on 20.11.19.
//

#include "JSONParser.h"
#include <stdlib.h>

using namespace std;

string JSONParser::parseValue(string field, string message) {
    try {
        json jsonString = message;
        string value = jsonString.value(field, "");
        return value;
    }
    catch (nlohmann::detail::type_error &ex) {
        throw invalid_argument("Not a valid response");
    }
}
