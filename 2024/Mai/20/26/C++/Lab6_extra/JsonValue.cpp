#include "JsonValue.h"

// Implementation of pure virtual destructor
JsonValue::~JsonValue() {}

// NullValue
void NullValue::print(ostream& out, int indent) const {
    out << "null";
}

// NumberValue
void NumberValue::print(ostream& out, int indent) const {
    out << value;
}

// BoolValue
void BoolValue::print(ostream& out, int indent) const {
    out << (value ? "true" : "false");
}

// StringValue
void StringValue::print(ostream& out, int indent) const {
    out << '"' << value << '"';
}

// ArrayValue
void ArrayValue::add(JsonValue* val) {
    if (values.size() < 16) {
        values.emplace_back(val);
    }
}

void ArrayValue::print(ostream& out, int indent) const {
    out << "[";
    for (size_t i = 0; i < values.size(); ++i) {
        if (i > 0) out << ", ";
        values[i]->print(out, indent + 2);
    }
    out << "]";
}

unsigned ArrayValue::nodeCount() const {
    unsigned count = 1; // Including itself
    for (const auto& val : values) {
        count += val->nodeCount();
    }
    return count;
}

// ObjectValue
void ObjectValue::add(const string& name, JsonValue* val) {
    if (values.size() < 16) {
        values.emplace_back(name, unique_ptr<JsonValue>(val));
    }
}

void ObjectValue::print(ostream& out, int indent) const {
    out << "{";
    for (size_t i = 0; i < values.size(); ++i) {
        if (i > 0) out << ", ";
        out << '"' << values[i].first << "\": ";
        values[i].second->print(out, indent + 2);
    }
    out << "}";
}

unsigned ObjectValue::nodeCount() const {
    unsigned count = 1; // Including itself
    for (const auto& val : values) {
        count += val.second->nodeCount();
    }
    return count;
}
