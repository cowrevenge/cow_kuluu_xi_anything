/* f_0x10149980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10149980(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101490c0u), rd32(COW_IMG(0x10578408u)), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10149130u), rd32(COW_IMG(0x10578408u)), 0);
    t4 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t3;
        edx = t4;
        loc_4 = (self & 0xffffffu) | (uint8_t)t3 << 0x18u;
        goto L_101499d2;
    }
    eax = t3;
    edx = t4;
    loc_4 = (self & 0xffffffu) | (uint8_t)t3 << 0x18u;
    if ((uint8_t)eax != 0u) goto L_101499c4;
    t5 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x1015e790u), t5, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    t7 = g->edx;
    wr32(self + 0x14u, 0u);
    g->edx = t7;
    return t6;
L_101499c4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
    t9 = g->edx;
    eax = (t8 & 0xffffff00u) | loc_4 >> 0x18u;
    edx = t9;
L_101499d2: ;
    if ((uint8_t)eax == 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    wr32(self + 0x14u, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
