//
// Created by nianl on 25-10-2021.
//

#ifndef COMMAND_LINE_TOOL_INT_ARGUMENT_PARSER_H
#define COMMAND_LINE_TOOL_INT_ARGUMENT_PARSER_H
#include "memory"
#include "iArgument_parser.h"
#include "charconv"
#include "int_argument.h"
namespace argument_parser {
    class int_argument_parser : public iArgument_parser {
    public:
        std::unique_ptr<argument::iArgument> parse(std::string id, const char *arg) const override;
    };
}


#endif //COMMAND_LINE_TOOL_INT_ARGUMENT_PARSER_H
