/* f_0x1001d350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001d350(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_1001d371;
    }
    eax = rd32(self + 8u);
    if (rd8(COW_IMG(0x10456d48u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456d48u));
        goto L_1001d374;
    }
    if ((rd32(COW_IMG(0x10456d4cu)) & 0xff000000u) != 0x80000000u)
    {
        eax = rd32(COW_IMG(0x10456d4cu)) & 0xff000000u;
        goto L_1001d374;
    }
    eax = rd32(COW_IMG(0x10456d4cu)) & 0xff000000u;
L_1001d371: ;
    return eax & 0xffffff00u;
L_1001d374: ;
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), in_edx, 2, 0u, 0u);
    return (t1 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001d350(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
