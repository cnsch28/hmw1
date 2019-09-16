#include "worker.hpp"

Worker::Worker() : code(""), name(""), lastname(""), age(0), job(""), status(0) { }

Worker::~Worker() { }

std::string Worker::getCode() const
{
    return code;
}

void Worker::setCode(const std::string &code)
{
    this->code = code;
}

std::string Worker::getName() const
{
    return name;
}

void Worker::setName(const std::string &name)
{
    this->name = name;
}

std::string Worker::getLastName() const
{
    return lastname;
}

void Worker::setLastName(const std::string &lastname)
{
    this->lastname = lastname;
}

int Worker::getAge() const
{
    return age;
}

void Worker::setAge(const int &age)
{
    if (age > 0) this->age = age;
}

std::string Worker::getJob() const
{
    return job;
}

void Worker::setJob(const std::string &job)
{
    this->job = job;
}

int Worker::getStatus() const
{
    return status;
}

void Worker::setStatus(const int &status)
{
    this->status = status;
}

std::string Worker::toString() const
{
    std::string str = name + "|" + lastname + "|" + std::to_string(age) + "|" +
        job + "|" + std::to_string(status);

    return str;
}
