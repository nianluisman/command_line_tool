#ifndef COMMAND_LINE_TOOL_PROGRAM_H
#define COMMAND_LINE_TOOL_PROGRAM_H


#include <iArgument.h>
#include <vector>

class program {
public:
    program(const std::vector<argument::iArgument>& arguments);
    void run();

private:
    std::vector<argument::iArgument> m_arguments;
};


#endif //COMMAND_LINE_TOOL_PROGRAM_H
