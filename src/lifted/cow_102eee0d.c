/* f_0x102eee0d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102eee0d(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x178u) != 0u)
    {
        edx = in_edx;
        goto L_102eee26;
    }
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x102eeab2u), g->eax, self, in_edx, 1, 1, arg1);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_102eee87;
    }
    edx = t2;
L_102eee26: ;
    if (rd32(arg1 + 0x178u) != rd32(rd32(arg1 + 0x190u) + 0x54u) + 0xd0u)
    {
        eax = rd32(rd32(arg1 + 0x190u) + 0x54u);
        goto L_102eee79;
    }
    wr32(rd32(arg1) + 0x14u, 0x61u);
    t3 = rd32(rd32(arg1 + 0x190u) + 0x54u);
    t4 = rd32(arg1);
    wr32(t4 + 0x18u, t3);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1) + 4u), t4, 2, arg1, 3u);
    t5 = g->edx;
    wr32(arg1 + 0x178u, 0u);
    edx = t5;
L_102eee65: ;
    t8 = rd32(rd32(arg1 + 0x190u) + 0x54u) + 1u & 7u;
    wr32(rd32(arg1 + 0x190u) + 0x54u, t8);
    g->edx = edx;
    return (t8 & 0xffffff00u) | 1u;
L_102eee79: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall_cdecl(g, rd32(rd32(arg1 + 0x14u) + 0x14u), rd32(arg1 + 0x14u), 2, arg1, eax);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        edx = t7;
        goto L_102eee65;
    }
    eax = t6;
    edx = t7;
L_102eee87: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eee0d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102eee0d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
