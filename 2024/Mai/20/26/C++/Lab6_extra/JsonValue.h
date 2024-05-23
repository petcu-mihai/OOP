#ifndef JSONVALUE_H
#define JSONVALUE_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class JsonValue {
public:
    virtual ~JsonValue() = 0;
    virtual void print(ostream& out, int indent = 0) const = 0;
    virtual unsigned nodeCount() const = 0;
    operator unsigned() const { return nodeCount(); }
};

class NullValue : public JsonValue {
public:
    void print(ostream& out, int indent = 0) const override;
    unsigned nodeCount() const override { return 1; }
};

class NumberValue : public JsonValue {
private:
    double value;
public:
    NumberValue(double val) : value(val) {}
    void print(ostream& out, int indent = 0) const override;
    unsigned nodeCount() const override { return 1; }
};

class BoolValue : public JsonValue {
private:
    bool value;
public:
    BoolValue(bool val) : value(val) {}
    void print(ostream& out, int indent = 0) const override;
    unsigned nodeCount() const override { return 1; }
};

class StringValue : public JsonValue {
private:
    string value;
public:
    StringValue(const string& val) : value(val.substr(0, 255)) {}
    void print(ostream& out, int indent = 0) const override;
    unsigned nodeCount() const override { return 1; }
};

class ArrayValue : public JsonValue {
private:
    vector<unique_ptr<JsonValue>> values;
public:
    void add(JsonValue* val);
    void print(ostream& out, int indent = 0) const override;
    unsigned nodeCount() const override;
};

class ObjectValue : public JsonValue {
private:
    vector<pair<string, unique_ptr<JsonValue>>> values;
public:
    void add(const string& name, JsonValue* val);
    void print(ostream& out, int indent = 0) const override;
    unsigned nodeCount() const override;
};

#endif // JSONVALUE_H
