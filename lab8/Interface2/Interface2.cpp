#include <iostream>
#include <string>
using namespace std;

// Interface
class IPrintable {
public:
    virtual void print() const = 0;
};

class Document : public IPrintable {
    string text;
public:
    Document(const string& txt) : text(txt) {}
    void print() const override {
        cout << "Document: " << text << endl;
    }
};

class Image : public IPrintable {
    string filename;
public:
    Image(const string& file) : filename(file) {}
    void print() const override {
        cout << "Image file: " << filename << endl;
    }
};
