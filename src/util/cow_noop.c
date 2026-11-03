/* The shared body for entries whose generated original is a bare `ret`.

   f_100035a0, f_1000bb10, f_1000bb20, ... all compile to one instruction: `ret`. They compute
   nothing, touch no memory and return eax untouched - MSVC /OPT:ICF folds identical leaves and the
   entry table points at each of them. The faithful conversion is therefore a function that does
   nothing, and the honest thing to do about that is to write it once, name it, and let every such
   entry's adapter call it, rather than mint four copies of the same empty body.

   This is not a stub: cowdiff compares it against the generated original per entry (return registers,
   callee-saved, esp, memory, calls) and the gate allows the empty body only because
   `cowdiff.py --count` reports two instruction sites - the entry and the ret.
*/
#include "cow.h"

void cow_return_noop(void)
{
    /* the original is a bare `ret`: there is nothing here to say */
}
