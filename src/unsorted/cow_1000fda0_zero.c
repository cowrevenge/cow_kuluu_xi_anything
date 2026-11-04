/* f_1000fda0 - `xor eax, eax` and `ret`: a virtual method whose answer is 0.

   Three bytes, two instructions, no memory touched and no call out. It is slot 0 of the table of three
   code pointers at 0x10350018, so the compiler emitted it as one of a class's virtual methods - the one
   that does nothing and reports 0 - and MSVC folded every copy of it to this address. `ecx` carries the
   object (thiscall); the body never reads it, and neither does our conversion, because reading a field
   we have not modelled would be a claim we cannot prove.

   Name: cow_return_zero (guess). Evidence: the two instructions in generated/all/funcs_000.c and the
   vtable slot that points here, both listed in the ledger's oracle_refs.
*/
#include "cow.h"

uint32_t cow_return_zero(void);

/* COW_ADAPTER BEGIN - thiscall: ecx is the object and is not read; the original pops 0 bytes above the
   return address and leaves eax zeroed. The readability gate skips this block. */
void cow_adapter_1000fda0(Guest* g)
{
    g->eax = cow_return_zero();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
