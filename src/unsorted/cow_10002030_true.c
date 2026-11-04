/* f_10002030 - `mov al, 1` and `ret`: this entry answers "yes" to whoever asks.

   The whole original is two instructions. It is cdecl with one argument - the only caller in the
   image loads a field out of its object, pushes it, calls here, and adds 4 to esp itself - and the
   entry never reads that argument: it puts a 1 in al and returns. Only the low byte of eax is
   written, so the top three bytes come back exactly as the caller left them, which is why the body
   takes eax instead of returning a literal 1.

   Name: cow_always_true (guess). Evidence: generated/all/funcs_000.c has `mov al, 1` then `ret` and
   nothing else, and the caller at 0x10017c10 is a one-line forwarder that returns this value to its
   own caller - a predicate that can only be true.
*/
#include "cow.h"

uint32_t cow_always_true(uint32_t eax);

/* COW_ADAPTER BEGIN - cdecl: the caller pushes one argument and cleans it up; the original pops 0
   bytes above the return address, and leaves eax with al = 1 and the other bytes untouched.
   The readability gate skips this block. */
void cow_adapter_10002030(Guest* g)
{
    g->eax = cow_always_true(g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
