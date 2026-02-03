#include "event_dispatcher.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

namespace project {

EventDispatcher::EventDispatcher() {
    // Constructor
    m_initialized = false;
}

EventDispatcher::~EventDispatcher() {
    // Destructor
    cleanup();
}

bool EventDispatcher::initialize() {
    if (m_initialized) {
        return true;
    }
    
    std::cout << "Initializing EventDispatcher..." << std::endl;
    
    // Initialization logic here
    m_data = std::make_shared<DataContainer>();
    m_initialized = true;
    
    return true;
}

void EventDispatcher::process() {
    if (!m_initialized) {
        std::cerr << "Error: EventDispatcher not initialized" << std::endl;
        return;
    }
    
    // Processing logic
    std::cout << "Processing in EventDispatcher" << std::endl;
}

void EventDispatcher::cleanup() {
    if (m_initialized) {
        std::cout << "Cleaning up EventDispatcher" << std::endl;
        m_data.reset();
        m_initialized = false;
    }
}

std::string EventDispatcher::getStatus() const {
    return m_initialized ? "Initialized" : "Not initialized";
}

} // namespace project
