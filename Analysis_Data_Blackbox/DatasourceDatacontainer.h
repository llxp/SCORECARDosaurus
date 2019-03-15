#pragma once
class DatasourceDatacontainer
{
public:
	DatasourceDatacontainer();
	~DatasourceDatacontainer();

protected:
	void allocData(size_t size);

private:
	char * m_data;
};

