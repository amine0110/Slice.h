#pragma once
class CSilce
{
public:
	
	~CSilce();
	CSilce();
	CSilce(bool b0, bool b1, bool b2, bool b3, bool b4, bool b5, bool b6, bool b7, bool b8, bool b9, bool b10, bool b11, bool b12, bool b13, bool b14, bool b15);

	bool Lut[16];
	bool Out(bool a, bool b, bool c, bool d);
};

