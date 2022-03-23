//
// Created by nianl on 20-10-2021.
//

#ifndef COMMAND_LINE_TOOL_DBL_ARGUMENT_H
#define COMMAND_LINE_TOOL_DBL_ARGUMENT_H


#include <string>
#include "iArgument.h"
namespace argument {

    class dbl_argument : public iArgument {
    public:
        dbl_argument(std::string string_id, double value);

        double dbl_value();

    private:
        double m_dbl_value;
    };
}


#endif //COMMAND_LINE_TOOL_DBL_ARGUMENT_H
