#ifndef BASEINTERPRETER_H
#define BASEINTERPRETER_H

#include <string_view>
#include <FDScript/BaseValue.h>

namespace FDScript
{
    class BaseInterpreter
    {
        public:
            BaseInterpreter() = default;
            virtual ~BaseInterpreter();

            virtual void exec(const std::string_view &code, BaseValue &locals) = 0;
            virtual void execFile(const std::string_view &filePath, BaseValue &locals) = 0;

            virtual BaseValue *getVariable(std::string_view name) = 0;
            virtual void setVariable(std::string_view name, const BaseValue &value) = 0;
            virtual void unsetVariable(std::string_view name) = 0;
    };
}

#endif // BASEINTERPRETER_H
