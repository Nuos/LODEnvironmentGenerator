#pragma once
#include "LevelFactoryDataModel.h"

namespace DataModel
{
	class ComplexObjectFactoryDataModel :
		public LevelFactoryDataModel
	{
	public:
		ComplexObjectFactoryDataModel();
		~ComplexObjectFactoryDataModel();

	protected:
		virtual LevelFactory* InternalRead(ifstream* stream, map<string, LevelFactory*>* previousFactories);
		virtual void InternalWrite(ofstream* stream, LevelFactory* factoryToWrite);
	};
}

