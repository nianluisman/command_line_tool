//
// Created by nianl on 11-11-2021.
//

#ifndef COMMAND_LINE_TOOL_OPTION_BUILDER_H
#define COMMAND_LINE_TOOL_OPTION_BUILDER_H


#include <memory>
#include "iOption.h"
#include "option_parser.h"
namespace builder {
    class option_builder {
    public:
        option_builder();

        option_builder &
        with_int_option(const std::string &short_flag, const std::string &long_flag, const std::string &desc);

        option_builder &
        with_dbl_option(const std::string &short_flag, const std::string &long_flag, const std::string &desc);

        option_builder &
        with_text_option(const std::string &short_flag, const std::string &long_flag, const std::string &desc);

        std::unique_ptr<option_parser::option_parser> get();

    private:
        std::unique_ptr<option_parser::option_parser> m_option_parser;
    };

    inline option_builder default_builder() {
        return option_builder{};
    }
}


#endif //COMMAND_LINE_TOOL_OPTION_BUILDER_H
