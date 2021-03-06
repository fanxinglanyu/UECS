#include <UECS/SingletonsView.h>

using namespace Ubpa::UECS;

CmptAccessPtr SingletonsView::GetSingleton(CmptAccessType t) const noexcept {
	for (const auto& singleton : singletons) {
		if (singleton.AccessType() == t)
			return singleton;
	}
	return CmptAccessPtr::Invalid();
}
