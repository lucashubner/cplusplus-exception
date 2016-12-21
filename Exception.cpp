#include "Exception.h"
#include <cstdio>
#include <cstdarg>

Exception::Exception(){
	this->message = "";
	this->wmessage = L"";
	this->unicode = false;
}
//--------------------------------------------------------------//
Exception::Exception(std::string format, ...){
	char buff[8192];
	va_list args;
	va_start(args, format);
	vsprintf(buff, format.c_str(), args);
	va_end(args);
	this->message = buff;
	this->unicode = false;
}
//--------------------------------------------------------------//
Exception::Exception(std::wstring format, ...){
	wchar_t buff[8192];
	va_list args;
	va_start(args, format);
	vswprintf(buff, 8192, format.c_str(), args);
	va_end(args);
	this->wmessage = buff;
	this->unicode = true;
}
//--------------------------------------------------------------//
bool Exception::IsUnicode(){
	return this->unicode;
}
//--------------------------------------------------------------//
std::string Exception::GetExceptionMessage(){
	return this->message;
}
//--------------------------------------------------------------//
std::wstring Exception::GetUnicodeExceptionMessage(){
	return this->wmessage;
}
//--------------------------------------------------------------//
std::string Exception::what(){
	return this->message;
}
//--------------------------------------------------------------//

