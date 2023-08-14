#pragma once

class SmartPointer
{
public:
	explicit SmartPointer (int* pointer);
	 ~SmartPointer();

private:
	int* ptr;
};

