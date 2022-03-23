//
// Created by nianl on 19-10-2021.
//

#ifndef COMMAND_LINE_TOOL_IOPTION_H
#define COMMAND_LINE_TOOL_IOPTION_H


#include <string>
#include <memory>
#include "iArgument.h"
#include "iArgument_parser.h"
namespace option {
    class iOption {
    public:
        iOption(const std::string &short_flag, const std::string &long_flag, const std::string &desc,
                std::unique_ptr<argument_parser::iArgument_parser> type, std::pair<int, int> range);

        iOption(const std::string &short_flag, const std::string &long_flag, const std::string &desc,
                std::unique_ptr<argument_parser::iArgument_parser> type);

        [[nodiscard]] const std::string long_flag() const;

        const std::string short_flag();

        const std::string desc();

        virtual std::string help();

        virtual bool can_parse(const char *arg) const;

        std::pair<char **, std::unique_ptr<argument::iArgument>> parse(char *args[], int nargs) const;

        virtual ~iOption() = default;

    private:
        std::string m_short;
        std::string m_desc;
        std::string m_long;
        std::unique_ptr<argument_parser::iArgument_parser> m_parser;
        std::pair<int, int> m_range;
    };
}

#endif //COMMAND_LINE_TOOL_IOPTION_H
