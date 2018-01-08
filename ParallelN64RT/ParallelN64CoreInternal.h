#pragma once

#include "CoreBase.h"

using namespace Platform;
using namespace LibretroRT_Shared;

namespace ParallelN64RT
{
	private ref class ParallelN64CoreInternal sealed : public CoreBase
	{
	protected private:
		ParallelN64CoreInternal();

	public:
		static property ParallelN64CoreInternal^ Instance { ParallelN64CoreInternal^ get(); }
		virtual ~ParallelN64CoreInternal();
	};
}