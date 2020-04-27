#ifndef BASEVALUE_H
#define BASEVALUE_H

namespace FDScript
{
    class BaseValue
    {
        public:
            BaseValue() = default;
            virtual ~BaseValue();

            virtual operator bool() const;
    };
}

#endif // BASEVALUE_H
