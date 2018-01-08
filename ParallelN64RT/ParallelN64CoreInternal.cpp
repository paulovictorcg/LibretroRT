#include "pch.h"
#include "ParallelN64CoreInternal.h"

#include "libretro.h"

using namespace ParallelN64RT;
using namespace LibretroRT_Shared;

ParallelN64CoreInternal^ coreInstance = nullptr;

ParallelN64CoreInternal^ ParallelN64CoreInternal::Instance::get()
{
	if (coreInstance == nullptr)
	{
		coreInstance = ref new ParallelN64CoreInternal();
		CoreBase::SingletonInstance = coreInstance;
	}

	return coreInstance;
}

ParallelN64CoreInternal::ParallelN64CoreInternal() : CoreBase(false, false, false)
{
}

ParallelN64CoreInternal::~ParallelN64CoreInternal()
{
	coreInstance = nullptr;
	CoreBase::SingletonInstance = nullptr;
}