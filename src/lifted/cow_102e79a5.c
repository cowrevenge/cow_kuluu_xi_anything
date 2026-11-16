/* f_0x102e79a5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e79a5(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 248u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xecu, in_esi);
    if (arg1 != 0u)
    {
        wr32(self + 8u, arg1);
        wr32(sp0 - 0xf0u, arg1);
        g->esp = sp0 - 0xecu;
        cow_thiscall(g, rd32(rd32(arg1) + 4u), rd32(arg1), 1, arg1);
        wr32(sp0 - 0xf0u, sp0 - 0xe8u);
        t1 = rd32(self + 8u);
        wr32(sp0 - 0xf4u, t1);
        cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x1cu), rd32(rd32(self + 8u)), 2, t1, sp0 - 0xe8u);
        wr32(sp0 - 0xf0u, sp0 - 0x14u);
        t2 = rd32(self + 8u);
        wr32(sp0 - 0xf4u, t2);
        cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x24u), rd32(rd32(self + 8u)), 2, t2, sp0 - 0x14u);
        if ((rd8(sp0 - 0xc7u) & 2u) != 0u) goto L_102e79f4;
        if ((rd8(sp0 - 8u) & 0x10u) != 0u) goto L_102e79f4;
        eax = 0u;
L_102e79f7: ;
        t3 = rd8(sp0 - 0xbcu);
        wr32(self + 0x1cu, eax);
        if ((t3 & 0x10u) == 0u) goto L_102e7a0b;
        if ((rd8(sp0 - 0xb8u) & 0x20u) == 0u) goto L_102e7a0b;
        eax = 1u;
L_102e7a0d: ;
        wr32(self + 0x18u, eax);
        eax = 0u;
    }
    else
    {
        eax = 0x8876086cu;
    }
    return eax;
L_102e79f4: ;
    eax = 1u;
    goto L_102e79f7;
L_102e7a0b: ;
    eax = 0u;
    goto L_102e7a0d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e79a5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e79a5(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
