// SPDX-FileCopyrightText: 2022 Mullvad VPN AB
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "logsink.h"

namespace shared::logging
{

void __stdcall StdoutLogger(MULLVAD_LOG_LEVEL level, const char *msg, void *context);

}
