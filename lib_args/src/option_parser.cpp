//
// Created by nianl on 21-10-2021.
//

#include "option_parser.h"

#include <memory>
#include <utility>
#include <int_argument.h>

std::vector<std::unique_ptr<argument::iArgument>> option_parser::option_parser::parse(char **arg, int nargs) {
    std::vector<std::unique_ptr<argument::iArgument>> parsed;

    // calculate the pointer to the end of the sequence
    const auto end = arg + nargs;

    do {
        int matched = 0;
        for (const auto& opt: m_options){
            // if an options can be parsed by this `opt`...
            if (opt->can_parse(*arg)){
                matched++;
                auto args_val = opt->parse( arg, nargs );
                // check the returned std::unique_ptr<argument>
                if (args_val.second){
                    parsed.push_back(std::move(args_val.second));
                    // calculate how many elements were used
                    auto consumed_elements = arg - args_val.first;
                    // adjust bookkeeping
                    arg = args_val.first;
                    nargs -= static_cast<int>(consumed_elements);
                }
                else{
                    // parsing failed, just step by one and move on
                    ++arg;
                    --nargs;
                }

            }
        }
        if(matched == 0){
            ++arg;
            --nargs;
        }
    } while(arg != end); // no incrementing here!

    return parsed;
}

void option_parser::option_parser::addOption(std::unique_ptr<option::iOption> ptr) {
    m_options.push_back(std::move(ptr));
}
