#ifndef INCLUDE_FILE_HANDLER_H
#define INCLUDE_FILE_HANDLER_H

#include <string>
#include <memory>
#include <vector>

namespace project {

class FileHandler {
public:
    FileHandler();
    virtual ~FileHandler();
    
    bool initialize();
    void process();
    void cleanup();
    std::string getStatus() const;
    
private:
    bool m_initialized;
    
    struct DataContainer {
        std::vector<std::string> items;
        int counter;
    };
    
    std::shared_ptr<DataContainer> m_data;
};

} // namespace project

#endif // INCLUDE_FILE_HANDLER_H
