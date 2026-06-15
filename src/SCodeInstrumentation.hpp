#pragma once

#include <unordered_map>
#include <string>

namespace ttd::instrumentation {
void install_scode_instrumentation(std::unordered_map<std::string, uintptr_t>& inverse_symbol_map);
}