#include <iostream>
#include <stdexcept>

void throwRuntimeError()
{
    throw std::runtime_error("This is a runtime error!");
}

void throwLogicError()
{
    throw std::logic_error("This is a logic error!");
}

void throwInvalidArgument()
{
    throw std::invalid_argument("Invalid argument!");
}

void throwOutOfRange()
{
    throw std::out_of_range("Out of range error!");
}

int main()
{
    try
    {
        // Uncomment and run one function at a time to see the respective exception thrown
        // throwRuntimeError();
        // throwLogicError();
        // throwInvalidArgument();
        // throwOutOfRange();
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Caught runtime_error: " << e.what() << std::endl;
    }
    catch (const std::logic_error &e)
    {
        std::cerr << "Caught logic_error: " << e.what() << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Caught invalid_argument: " << e.what() << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Caught out_of_range: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}

/**
 *
 *

catch (const std::runtime_error& e) {
    std::cerr << "Caught runtime_error: " << e.what() << std::endl;
}
catch (const std::runtime_error& e): This line starts a catch block that catches exceptions of type std::runtime_error.
When an exception of this type is thrown in the corresponding try block or any function called within that block,
the program jumps to this catch block to handle the exception.

const std::runtime_error& e: This part specifies that the caught exception will be stored in a constant reference
variable e of type std::runtime_error. Using a reference (&) allows us to access the exception object without making a copy of it,
which is more efficient.
{: This curly brace marks the beginning of the catch block.

std::cerr << "Caught runtime_error: " << e.what() << std::endl;: This line is the body of the catch block,
where we handle the caught exception.

std::cerr: This is the standard error stream, which is typically used for error messages and warnings.
It's similar to std::cout (standard output stream) but intended for error output.

"Caught runtime_error: ": This is a message indicating that a std::runtime_error exception has been caught.
It's printed to std::cerr for error reporting.

<< e.what(): Here, e.what() is a member function of std::runtime_error (and other standard exception classes)
that returns a C-style string (const char*) describing the exception. It provides the error message associated
with the exception that was thrown.

<< std::endl;: This adds a newline character to the output stream, ensuring that subsequent output appears on a new line.

}: This curly brace marks the end of the catch block.

So, when an exception of type std::runtime_error is thrown and caught by this catch block, it prints the error
message associated with the exception using e.what() to std::cerr, along with the "Caught runtime_error: " prefix.
This helps in identifying and reporting the specific type of exception and its message for debugging and error handling purposes.

*/