#ifndef IDGENERATOR_H
#define IDGENERATOR_H

using namespace std;

class IdGenerator
{
private:
	static IdGenerator* instance;
	int id;
	IdGenerator();
public:
	static IdGenerator* getInstance();
	int getId();
};

#endif

