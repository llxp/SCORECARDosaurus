#include "stdafx.h"
#include "DatasourceDatacontainer.h"


DatasourceDatacontainer::DatasourceDatacontainer()
{
}


DatasourceDatacontainer::~DatasourceDatacontainer()
{
	if (m_data != nullptr) {
		delete[] m_data;
	}
}

void DatasourceDatacontainer::allocData(size_t size)
{
	m_data = new char[size];
}
