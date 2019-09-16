#ifndef WORKER_HPP
#define WORKER_HPP

#include <string>

class Worker
{
public:
    Worker();
    explicit Worker(const std::string&);
    ~Worker();
    std::string getCode() const;
    void setCode(const std::string&);
    std::string getName() const;
    void setName(const std::string&);
    std::string getLastName() const;
    void setLastName(const std::string&);
    int getAge() const;
    void setAge(const int&);
    std::string getJob() const;
    void setJob(const std::string&);
    int getStatus() const;
    void setStatus(const int&);
    std::string toString() const;

private:
    std::string code;
    std::string name;
    std::string lastname;
    int age;
    std::string job;
    int status;
};

#endif // WORKER_HPP
