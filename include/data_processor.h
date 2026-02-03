#ifndef INCLUDE_DATA_PROCESSOR_H
#define INCLUDE_DATA_PROCESSOR_H

#include <string>
#include <memory>
#include <vector>

namespace project {

class DataProcessor {
public:
    DataProcessor();
    virtual ~DataProcessor();
    
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

#endif // INCLUDE_DATA_PROCESSOR_H
