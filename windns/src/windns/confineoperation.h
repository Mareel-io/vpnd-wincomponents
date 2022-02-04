// SPDX-FileCopyrightText: 2022 Mullvad VPN AB
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include <libcommon/logging/ilogsink.h>
#include <functional>
#include <vector>
#include <string>
#include <cstdint>

bool ConfineOperation
(
	const char *literalOperation,
	std::shared_ptr<common::logging::ILogSink> logSink,
	std::function<void()> operation
);
