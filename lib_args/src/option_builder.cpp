//
// Created by nianl on 11-11-2021.
//

#include <int_argument_parser.h>
#include <text_argument_parser.h>

#include <utility>
#include <dbl_argument_parser.h>
#include "option_builder.h"

builder::option_builder::option_builder(): m_option_parser{new option_parser::option_parser{}} {}

builder::option_builder & builder::option_builder::with_int_option(const std::string& short_flag, const std::string& long_flag, const std::string& desc) {
    if(m_option_parser)
m_option_parser->addOption(std::make_unique<option::iOption>
                                        (short_flag,
                                         long_flag,
                                         desc,
                                        std::make_unique<argument_parser::int_argument_parser>()));
    return *this;
}

builder::option_builder & builder::option_builder::with_dbl_option(const std::string& short_flag, const std::string& long_flag, const std::string& desc) {
    if(m_option_parser)
        m_option_parser->addOption(std::make_unique<option::iOption>
                                           (short_flag,
                                            long_flag,
                                            desc,
                                            std::make_unique<argument_parser::dbl_argument_parser>()));
    return *this;
}

builder::option_builder & builder::option_builder::with_text_option(const std::string& short_flag, const std::string& long_flag, const std::string& desc) {
    if(m_option_parser)
        m_option_parser->addOption(std::make_unique<option::iOption>
                                           (short_flag,
                                            long_flag,
                                            desc,
                                            std::make_unique<argument_parser::text_argument_parser>()));
    return *this;
}

std::unique_ptr<option_parser::option_parser> builder::option_builder::get() {
    return std::move(m_option_parser);
}
