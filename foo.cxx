// Global module fragment where #includes can happen
module;
#include <optional>

// first thing after the Global module fragment must be a module command
export module foo;

export class foo {};
