// Copyright 2019 SMS
// License(Apache-2.0)
// ������

#ifndef HIMCONSOLE_H_
#define HIMCONSOLE_H_

#include "console/Console.h"
#include "slave.h"



typedef ulong slave_id_t;

class Himconsole : public Console
{
public:
	Himconsole();
	~Himconsole();

	const Session& getSlave();

private:
	map<slave_id_t, Session*> slave;
};



#endif // HIMCONSOLE_H_
