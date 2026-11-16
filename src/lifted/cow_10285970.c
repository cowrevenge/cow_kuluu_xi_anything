/* f_0x10285970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10285970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x109a2788u));
        g->ecx = self;
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, in_edx, 1, 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    wr32(COW_IMG(0x109a2788u), 0u);
    if (arg1 != 0u) goto L_10285997;
    g->edx = edx;
    return (arg1 & 0xffffff00u) | (uint8_t)(arg1 | 0xffu);
L_10285997: ;
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), ecx, 2, arg1, COW_IMG(0x10361d24u));
    t4 = g->edx;
    wr32(COW_IMG(0x109a2788u), t3);
    g->edx = t4;
    return (uint8_t)-(t3 != 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10285970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
