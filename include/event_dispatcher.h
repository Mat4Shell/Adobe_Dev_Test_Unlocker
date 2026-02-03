#ifndef INCLUDE_EVENT_DISPATCHER_H
#define INCLUDE_EVENT_DISPATCHER_H

#include <string>
#include <memory>
#include <vector>

namespace project {

class EventDispatcher {
public:
    EventDispatcher();
    virtual ~EventDispatcher();
    
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

#endif // INCLUDE_EVENT_DISPATCHER_H
