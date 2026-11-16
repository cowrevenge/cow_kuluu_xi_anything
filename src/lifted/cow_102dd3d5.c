/* f_0x102dd3d5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dd3d5(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 < 0xeu) goto L_102dd3fd;
    if (rd16(arg1) != 0x4d42u) goto L_102dd3fd;
    if (rd32(arg1 + 2u) > arg2) goto L_102dd3fd;
    g->esp = sp0;
    t1 = cow_fastcall(g, COW_IMG(0x102db144u), self, arg2 - 0xeu, 2, arg1 + 0xeu, arg2 - 0xeu);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_102dd402: ;
    g->edx = edx;
    return eax;
L_102dd3fd: ;
    eax = 0x80004005u;
    edx = arg2;
    goto L_102dd402;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dd3d5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dd3d5(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
