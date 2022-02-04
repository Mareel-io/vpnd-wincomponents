// SPDX-FileCopyrightText: 2022 Mullvad VPN AB
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "logsink.h"
#include <libcommon/logging/logsink.h>

namespace shared::logging
{

//
// Adapt common::logging::LogSink C++ world to
// MullvadLogSink C world.
//
class LogSinkAdapter : public common::logging::LogSink
{
public:

	LogSinkAdapter(MullvadLogSink target, void *context);

private:

	static common::logging::LogTarget MakeAdapter(MullvadLogSink target, void *context);
};

}
