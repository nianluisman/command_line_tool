//
// Created by nianl on 22-10-2021.
//

#ifndef COMMAND_LINE_TOOL_IARGUMENT_PARSER_H
#define COMMAND_LINE_TOOL_IARGUMENT_PARSER_H
#include "memory"
#include "string"
#include "iArgument.h"
namespace argument_parser {
    class iArgument_parser {
    public:
        virtual std::unique_ptr<argument::iArgument> parse(std::string id, const char *arg) const = 0;

        virtual ~iArgument_parser() = default;
    };
}


#endif //COMMAND_LINE_TOOL_IARGUMENT_PARSER_H
