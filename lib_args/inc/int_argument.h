//
// Created by nianl on 20-10-2021.
//

#ifndef COMMAND_LINE_TOOL_INT_ARGUMENT_H
#define COMMAND_LINE_TOOL_INT_ARGUMENT_H
#include "iArgument.h"
#include "string"
namespace argument {
    class int_argument : public iArgument {
    public:
        int_argument(std::string string_id, int value);

        [[nodiscard]] int value() const;

    private:
        int m_int_value;
    };
}


#endif //COMMAND_LINE_TOOL_INT_ARGUMENT_H
