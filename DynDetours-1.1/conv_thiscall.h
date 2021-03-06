#ifndef _CONV_THISCALL_H
#define _CONV_THISCALL_H

// =======================================================================
// Includes
// =======================================================================
#include "conv_interface.h"
#include "register_class.h"
#include "AsmJit/AsmJit.h"

// =======================================================================
// The CCdecl_Convention class.
// =======================================================================
class CThiscall_Convention : public ICallConvention
{
	private:
		CRegisterObj m_Registers;

	public:
		// ------------------------------------
		// ICallConvention overrides.
		// ------------------------------------
		virtual void Stage_1( AsmJit::Assembler* pAssembler );
		virtual void Stage_2( AsmJit::Assembler* pAssembler );
		virtual void Stage_3( AsmJit::Assembler* pAssembler );
		virtual CRegisterObj* GetRegisters( void ) { return &m_Registers; }
};

#endif // _CONV_THISCALL_H
