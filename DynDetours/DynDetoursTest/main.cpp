/**
* ======================================================
* DynDetours
* Copyright (C) 2009 Deniz Sezen
* All rights reserved.
* ======================================================
*
* This software is provided 'as-is', without any express or implied warranty.
* In no event will the authors be held liable for any damages arising from 
* the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose, 
* including commercial applications, and to alter it and redistribute it 
* freely, subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented; you must not 
* claim that you wrote the original software. If you use this software in a 
* product, an acknowledgment in the product documentation would be 
* appreciated but is not required.
*
* 2. Altered source versions must be plainly marked as such, and must not be
* misrepresented as being the original software.
*
* 3. This notice may not be removed or altered from any source distribution.
*
*/

//========================================================================
// Includes
//========================================================================
#include "test_cdecl.h"
#include "test_thiscall.h"
#include "dd_detourman.h"

//========================================================================
// Main entry point.
//========================================================================
int main( void )
{
	// Initialize the detour manager
	g_pDetourManager = new CDetourManager();

	// Begin testing!

	// __cdecl
	cdecl_begin();

	// Free up memory.
	delete g_pDetourManager;

	// Pause the command prompt.
	system("pause");

	// Done!
	return 0;
}