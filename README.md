### Extension of the default exception class for C++.

#### Constructor that formats the exception message according to the data send.
```c++
 // Class constructor
 Exception(std::string format, ...);
```

#### Constructor that formats the message in unicode according to the data sent.
```
// Class constructor
 Exception(std::wstring format, ...);
```

#### Informs if the message came in Unicode format.
```
bool IsUnicode();
```

#### Returns message exception.
```
std::string GetExceptionMessage();

```


####  Returns the message in unicode format.
```
std::wstring GetUnicodeExceptionMessage();
```


#### Overrites the default exception function for exception message.
```
std::string what();
```

