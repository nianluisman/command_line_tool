//
// Created by nianl on 3-11-2021.
//

#ifndef COMMAND_LINE_TOOL_DBL_ARGUMENT_PARSER_H
#define COMMAND_LINE_TOOL_DBL_ARGUMENT_PARSER_H
#include "iArgument_parser.h"
namespace argument_parser {
    class dbl_argument_parser : public iArgument_parser {
        std::unique_ptr<argument::iArgument> parse(std::string id, const char *arg) const override;
    };
}


#endif //COMMAND_LINE_TOOL_DBL_ARGUMENT_PARSER_H
