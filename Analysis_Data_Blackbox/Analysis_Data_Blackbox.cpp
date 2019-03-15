// Analysis_Data_Blackbox.cpp : Definiert die exportierten Funktionen für die DLL-Anwendung.
//

#include "stdafx.h"
#include "Analysis_Data_Blackbox.h"

DataBlackbox_API::DataBlackbox_API()
{
}

DataBlackbox_API::~DataBlackbox_API()
{
}

DatasourceDatacontainer DataBlackbox_API::Data() const
{
	return m_data;
}
