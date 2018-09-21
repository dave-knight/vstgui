// This file is part of VSTGUI. It is subject to the license terms
// in the LICENSE file found in the top-level directory of this
// distribution and at http://github.com/steinbergmedia/vstgui/LICENSE

#include "../../../include/iasync.h"

//------------------------------------------------------------------------
namespace VSTGUI {
namespace Standalone {
namespace Platform {
namespace GDK {

//------------------------------------------------------------------------
} // GDK
} // Platform

//------------------------------------------------------------------------
namespace Async {

//------------------------------------------------------------------------
void perform (Context context, Task&& task)
{
	// TODO: Not implemented yet
	task ();
}

//------------------------------------------------------------------------
} // Async
} // Standalone
} // VSTGUI
