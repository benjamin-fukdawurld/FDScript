#include <FDScript/BaseValue.h>

FDScript::BaseValue::~BaseValue() {}

FDScript::BaseValue::operator bool() const
{
    return false;
}
