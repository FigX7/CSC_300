#include "stdafx.h"
#include "DoorSystemException.h"

namespace DoorSystem
{

	DoorSystemException::DoorSystemException( 
		const string& s )
	{
		msg = s;
	}


	DoorSystemException::~DoorSystemException()
	{
	}

	string 
	DoorSystemException::reason() const
	{
		return msg;
	}

}
