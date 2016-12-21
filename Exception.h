#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <exception>
#include <string>

/**
 * Class that represents a Exception
 */
class Exception : public std::exception{
protected:
	std::string message;
	std::wstring wmessage;
	bool unicode;
public:
	/**
	 * Default class constructor.
	 */
	Exception();

	/**
	 * Constructor that formats a message according to the data send.
	 * @param format of the message. This format is the same uset by printf
	 * function. [NOTE] To formata a message that uses string, you must send
	 * a C format string, or use the c_str() function on the string class.
	 */
	Exception(std::string format, ...);

	/**
	 * Constructor that formats the message in unicode according to the data
	 * sent.
	 * @param format of the message. This format is the same uset by printf
	 * function. [NOTE] To formata a message that uses string, you must send
	 * a C format string, or use the c_str() function on the string class.
	 */
	Exception(std::wstring format, ...);

	/**
	 * Informs if the message came in Unicode format.
	 */
	bool IsUnicode();

	/**
	 * Returns message exception.
	 * @return string containing the except message.
	 */
	std::string GetExceptionMessage();

	/**
	 * Returns the string in unicode format.
	 * @return wstring containing the except message.
	 */
	std::wstring GetUnicodeExceptionMessage();

	/**
	 * Overrites the default exception function for exception message.
	 * @return string containing the exception message.
	 */
	std::string what();

	/**
	* Class destructor.
	*/
	virtual ~Exception() _GLIBCXX_USE_NOEXCEPT;
};
#endif /* EXCEPTION_H_ */
