/* f_0x100a2160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a2160(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg3 + 0xcu);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100a21a0u), 1, t1);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_100a2179;
    }
    eax = t2;
    edx = t3;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a2179: ;
    if (rd32(eax + 0xd4u) == 0u)
    {
        eax = rd32(eax + 0xd4u);
    }
    else
    {
        eax = rd32(eax + 0xd4u);
        t4 = rd16(arg3 + 6u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, COW_IMG(0x100bab20u), eax, 1, t4);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
