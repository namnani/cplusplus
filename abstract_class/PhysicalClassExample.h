#include "AbstractClassExample.h"

namespace Nani
{
	class PhysicalClassExample : public AbstractClassExample
	{
		public:
			PhysicalClassExample() {}
			~PhysicalClassExample() {}
			void setNani(int nani);
			int getNani();
		private:
			void hello();
	};
}
