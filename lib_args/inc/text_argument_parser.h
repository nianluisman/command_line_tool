//
// Created by nianl on 3-11-2021.
//

#ifndef COMMAND_LINE_TOOL_TEXT_ARGUMENT_PARSER_H
#define COMMAND_LINE_TOOL_TEXT_ARGUMENT_PARSER_H
#include "iArgument_parser.h"
namespace argument_parser {
    class text_argument_parser : public iArgument_parser {
    public:
        std::unique_ptr<argument::iArgument> parse(std::string id, const char *arg) const override;
    };
}

#endif //COMMAND_LINE_TOOL_TEXT_ARGUMENT_PARSER_H
