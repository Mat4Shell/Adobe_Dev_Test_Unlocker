#ifndef INCLUDE_CACHE_MANAGER_H
#define INCLUDE_CACHE_MANAGER_H

#include <string>
#include <memory>
#include <vector>

namespace project {

class CacheManager {
public:
    CacheManager();
    virtual ~CacheManager();
    
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

#endif // INCLUDE_CACHE_MANAGER_H
