#pragma once
#ifndef ANALYSIS_DATA_BLACKBOX_API_H_
#define ANALYSIS_DATA_BLACKBOX_API_H_

#include <string>
#include <vector>
#include <map>

#include "DatasourceDatacontainer.h"

class DataBlackbox_API {
public:
	DataBlackbox_API();
	~DataBlackbox_API();

public:
	DatasourceDatacontainer Data() const;

private:
	std::string m_dataSourceType;
	DatasourceDatacontainer m_data;
};

#endif // ANALYSIS_DATA_BLACKBOX_API_H_