// SPDX-FileCopyrightText: 2022 Mullvad VPN AB
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include "stdafx.h"
#include <windows.h>

BOOL APIENTRY DllMain(HMODULE, DWORD, LPVOID)
{
	//
	// Avoid doing work in DllMain since the loader lock is held
	//

	return TRUE;
}
