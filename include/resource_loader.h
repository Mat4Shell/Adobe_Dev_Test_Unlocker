#ifndef INCLUDE_RESOURCE_LOADER_H
#define INCLUDE_RESOURCE_LOADER_H

#include <string>
#include <memory>
#include <vector>

namespace project {

class ResourceLoader {
public:
    ResourceLoader();
    virtual ~ResourceLoader();
    
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

#endif // INCLUDE_RESOURCE_LOADER_H
