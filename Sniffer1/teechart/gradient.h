// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CSubGradient;

/////////////////////////////////////////////////////////////////////////////
// CGradient wrapper class

class CGradient : public COleDispatchDriver
{
public:
	CGradient() {}		// Calls COleDispatchDriver default constructor
	CGradient(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGradient(const CGradient& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetDirection();
	void SetDirection(long nNewValue);
	unsigned long GetStartColor();
	void SetStartColor(unsigned long newValue);
	unsigned long GetEndColor();
	void SetEndColor(unsigned long newValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	unsigned long GetMidColor();
	void SetMidColor(unsigned long newValue);
	long GetRadialX();
	void SetRadialX(long nNewValue);
	long GetRadialY();
	void SetRadialY(long nNewValue);
	long GetBalance();
	void SetBalance(long nNewValue);
	void ShowEditor(BOOL OnlyStartColor);
	long GetAngle();
	void SetAngle(long nNewValue);
	CSubGradient GetSubGradient();
};
