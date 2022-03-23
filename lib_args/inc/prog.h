//
// Created by nianl on 11-11-2021.
//

#ifndef COMMAND_LINE_TOOL_PROG_H
#define COMMAND_LINE_TOOL_PROG_H


#include <vector>
#include <memory>
#include "iArgument.h"
namespace program {
    class prog {
    public:
        prog() = default;

        void run(std::vector<std::unique_ptr<argument::iArgument>> &argument);
    };
}


#endif //COMMAND_LINE_TOOL_PROG_H
