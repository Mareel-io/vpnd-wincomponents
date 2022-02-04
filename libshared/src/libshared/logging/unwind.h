// SPDX-FileCopyrightText: 2022 Mullvad VPN AB
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "logsink.h"
#include <stdexcept>

namespace shared::logging
{

void UnwindAndLog(MullvadLogSink logSink, void *logSinkContext, const std::exception &err);

}
