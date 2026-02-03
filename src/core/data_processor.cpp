#include "data_processor.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

namespace project {

DataProcessor::DataProcessor() {
    // Constructor
    m_initialized = false;
}

DataProcessor::~DataProcessor() {
    // Destructor
    cleanup();
}

bool DataProcessor::initialize() {
    if (m_initialized) {
        return true;
    }
    
    std::cout << "Initializing DataProcessor..." << std::endl;
    
    // Initialization logic here
    m_data = std::make_shared<DataContainer>();
    m_initialized = true;
    
    return true;
}

void DataProcessor::process() {
    if (!m_initialized) {
        std::cerr << "Error: DataProcessor not initialized" << std::endl;
        return;
    }
    
    // Processing logic
    std::cout << "Processing in DataProcessor" << std::endl;
}

void DataProcessor::cleanup() {
    if (m_initialized) {
        std::cout << "Cleaning up DataProcessor" << std::endl;
        m_data.reset();
        m_initialized = false;
    }
}

std::string DataProcessor::getStatus() const {
    return m_initialized ? "Initialized" : "Not initialized";
}

} // namespace project
