#pragma once
#include <string>

namespace DoorSystem
{
	using std::string;

	class DoorSystemException
	{
	public:
		DoorSystemException( const string& s );
		~DoorSystemException();
		string reason() const;
	private:
		string msg = "";
	};

}

