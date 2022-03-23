//
// Created by nianl on 25-10-2021.
//

#include "int_argument_parser.h"

std::unique_ptr<argument::iArgument> argument_parser::int_argument_parser::parse(std::string id, const char *arg) const {
    int n;
    std::string_view sv{arg};
    auto [ptr, ec] = std::from_chars(sv.data(), sv.data() + sv.size(), n);
    if(ec == std::errc()){
        return std::make_unique<argument::int_argument>(std::move(id), n);
    }else
        return nullptr;
}
