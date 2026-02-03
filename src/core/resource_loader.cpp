#include "resource_loader.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

namespace project {

ResourceLoader::ResourceLoader() {
    // Constructor
    m_initialized = false;
}

ResourceLoader::~ResourceLoader() {
    // Destructor
    cleanup();
}

bool ResourceLoader::initialize() {
    if (m_initialized) {
        return true;
    }
    
    std::cout << "Initializing ResourceLoader..." << std::endl;
    
    // Initialization logic here
    m_data = std::make_shared<DataContainer>();
    m_initialized = true;
    
    return true;
}

void ResourceLoader::process() {
    if (!m_initialized) {
        std::cerr << "Error: ResourceLoader not initialized" << std::endl;
        return;
    }
    
    // Processing logic
    std::cout << "Processing in ResourceLoader" << std::endl;
}

void ResourceLoader::cleanup() {
    if (m_initialized) {
        std::cout << "Cleaning up ResourceLoader" << std::endl;
        m_data.reset();
        m_initialized = false;
    }
}

std::string ResourceLoader::getStatus() const {
    return m_initialized ? "Initialized" : "Not initialized";
}

} // namespace project
