#ifndef INCLUDE_THREAD_POOL_H
#define INCLUDE_THREAD_POOL_H

#include <string>
#include <memory>
#include <vector>

namespace project {

class ThreadPool {
public:
    ThreadPool();
    virtual ~ThreadPool();
    
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

#endif // INCLUDE_THREAD_POOL_H
