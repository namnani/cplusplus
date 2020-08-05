#ifndef __AbstractClassExample_
#define __AbstractClassExample_

namespace Nani
{
	class AbstractClassExample
	{
		public:
			AbstractClassExample() { _nani = 3; }
			virtual ~AbstractClassExample() {};
			void setNani(int nani);
			int getNani();
		protected:
			virtual void hello() = 0;
			int _nani;
	};
}
#endif

