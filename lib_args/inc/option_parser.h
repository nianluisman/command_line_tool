//
// Created by nianl on 21-10-2021.
//

#ifndef COMMAND_LINE_TOOL_OPTION_PARSER_H
#define COMMAND_LINE_TOOL_OPTION_PARSER_H


#include <vector>
#include <memory>
#include "iArgument.h"
#include "iOption.h"
#include "int_argument.h"
namespace option_parser {
    class option_parser {
    public:
        option_parser() = default;

        std::vector<std::unique_ptr<argument::iArgument>> parse(char *arg[], int nargs);

        void addOption(std::unique_ptr<option::iOption> ptr);

    private:
        std::vector<std::unique_ptr<option::iOption>> m_options;
    };
}


#endif //COMMAND_LINE_TOOL_OPTION_PARSER_H
