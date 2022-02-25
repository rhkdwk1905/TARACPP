#include <iostream>
#include <string>
using namespace std;

class IErrorLog //InterfaceClass는 앞에 I를 붙여주는 국룰이 있다.
{
public:
    virtual bool reportError(const char *errorMessage) = 0;

    virtual ~IErrorLog() {}
}; //InterfaceClass는 실제 내용은 없지만, 무엇을 해야하는지를 내포한다.

class FileErrorLog : public IErrorLog
{
public:
    bool reportError(const char *errorMessage) override
    {
        cout << "Writing error to a file" << endl;
        return true;
    }
};

class ConsoleErrorLog : public IErrorLog
{
public:
    bool reportError(const char *errorMessage) override
    {
        cout << "Printing error to a console" << endl;
        return true;
    }
};

void doSomething(IErrorLog &log) //파라미터로 받을 수 있다
{
    log.reportError("Runtime error!!");
}

int main()
{
    FileErrorLog file_log;
    ConsoleErrorLog console_log;

    doSomething(file_log);
    doSomething(console_log);
    return 0;
}