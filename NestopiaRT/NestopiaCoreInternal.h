#pragma once

#include "CoreBase.h"

using namespace Platform;
using namespace LibretroRT_Shared;

namespace NestopiaRT
{
	private ref class NestopiaCoreInternal sealed : public CoreBase
	{
	protected private:
		NestopiaCoreInternal();

	public:
		static property NestopiaCoreInternal^ Instance { NestopiaCoreInternal^ get(); }
		virtual ~NestopiaCoreInternal();
	};
}