//
// Created by nianl on 20-10-2021.
//

#ifndef COMMAND_LINE_TOOL_INT_OPTION_H
#define COMMAND_LINE_TOOL_INT_OPTION_H
#include "iOption.h"
namespace option {
    class int_option : public iOption {
    public:
        using iOption::iOption;

        std::unique_ptr<iArgument> parse(const char *arg) const override;
    };
}


#endif //COMMAND_LINE_TOOL_INT_OPTION_H
