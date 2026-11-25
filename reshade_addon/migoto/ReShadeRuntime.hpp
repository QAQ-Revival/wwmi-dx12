#pragma once
#include <windows.h>

// The add-on receives the device and input from its ReShade host. The embedded
// DX11 engine must report its standalone hook and logging requests as unavailable.
inline bool InitializeHooksLog() { return false; }

template <typename Fn, typename Hook>
bool QueueHook(HMODULE, const char *, Hook, Fn *) { return false; }

inline bool InstallQueuedHooks() { return false; }
