#pragma once
#include "LevelFactory.h"
#include "Item.h"
#include "Matrix4.h"

#ifdef GENERATOR_EXPORTS
#define GENERATOR_API __declspec(dllexport)
#else
#define GENERATOR_API __declspec(dllimport)
#endif

namespace Generator
{
	class GENERATOR_API ComplexObjectFactory :
		public LevelFactory
	{
	public:
		ComplexObjectFactory();
		~ComplexObjectFactory();

		void AddComposerFactory(LevelFactory* composerFactory);

		// Generates children for the parent
		virtual list<Item*> GenerateLevel(Item* parent, int childrenNumber);

	private:
		list<LevelFactory*> _itemOccurrences;
	};
}