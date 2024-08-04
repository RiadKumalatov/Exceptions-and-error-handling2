#ifndef BAD_SHAPE_CREATION_EXCEPTION_H
#define BAD_SHAPE_CREATION_EXCEPTION_H

#include <stdexcept>
#include <string>

class BadShapeCreationException : public std::domain_error {
public:
    explicit BadShapeCreationException(const std::string& message)
        : std::domain_error(message) {}
};

#endif // BAD_SHAPE_CREATION_EXCEPTION_H
