//
// Created by nianl on 19-10-2021.
//

#ifndef COMMAND_LINE_TOOL_IARGUMENT_H
#define COMMAND_LINE_TOOL_IARGUMENT_H
#include "string"
namespace argument {
    class iArgument {
    public:
        explicit iArgument(std::string string_id);

        const std::string id();

        virtual ~iArgument() = default;

    private:
        std::string m_id;
    };
}


#endif //COMMAND_LINE_TOOL_IARGUMENT_H
