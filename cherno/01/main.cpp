#include <iostream>

class Log
{
public:
	void SetLevel(int level)
	{
        this->m_LogLevel = level;
	}
    
    void Error(const char* message)
	{
        if (this->m_LogLevel >= this->LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;   
	}

	void Warn(const char* message)
	{
        if (this->m_LogLevel >= this->LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
	}

    void Info(const char* message)
	{
        if (this->m_LogLevel >= this->LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
	}

public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo; // 默认情况下为Info
};

int main()
{
	Log log;
	log.SetLevel(log.LogLevelInfo);
    log.Error("Hello!");
	log.Warn("Hello");
	log.Info("Hello");

	std::cin.get();
}