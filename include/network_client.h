#ifndef INCLUDE_NETWORK_CLIENT_H
#define INCLUDE_NETWORK_CLIENT_H

#include <string>
#include <memory>
#include <vector>

namespace project {

class NetworkClient {
public:
    NetworkClient();
    virtual ~NetworkClient();
    
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

#endif // INCLUDE_NETWORK_CLIENT_H
