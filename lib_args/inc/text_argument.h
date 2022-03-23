//
// Created by nianl on 20-10-2021.
//

#ifndef COMMAND_LINE_TOOL_TEXT_ARGUMENT_H
#define COMMAND_LINE_TOOL_TEXT_ARGUMENT_H
#include "iArgument.h"
#include "string"
namespace argument {
    class text_argument : public iArgument {
    public:
        text_argument(std::string string_id, std::string value);

        std::string text_value();

    private:
        std::string m_string_value;
    };
}


#endif //COMMAND_LINE_TOOL_TEXT_ARGUMENT_H
