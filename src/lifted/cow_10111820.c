/* f_0x10111820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10111820(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd32(self + 4u);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, COW_IMG(0x1036bf4cu));
    wr32(sp0 - 0x1cu, COW_IMG(0x1036bf24u));
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, arg1);
    g->ebx = arg1;
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10112810u), self, 5, arg1, 1u, COW_IMG(0x1036bf24u), COW_IMG(0x1036bf4cu), t1);
    t3 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10110f00u), self, 1, arg1);
    t5 = g->edx;
    if (rd16(self + 0x2au) == 0u)
    {
        eax = t4;
        edx = t5;
        esi = in_esi;
        loc_c = in_ebx;
        loc_10 = in_edi;
    }
    else
    {
        eax = t4;
        edx = t5;
        wr32(sp0 - 0x14u, in_esi);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 8u, 0);
        t6 = g->edx;
        edx = t6;
        esi = rd32(self + 0x34u);
L_1011185d: ;
        if (rd32(esi + 4u) == 0u)
        {
            eax = rd32(esi + 4u);
            goto L_1011187e;
        }
        if (rd32(esi + 8u) == 0u)
        {
            eax = rd32(esi + 8u);
            goto L_1011187e;
        }
        eax = rd32(esi + 8u);
        wr32(sp0 - 0x18u, arg1);
        g->edx = rd32(rd32(esi));
        t7 = rd32(rd32(esi));
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(t7 + 0xcu), rd32(esi), 1, arg1);
        t8 = g->edx;
        if (rd32(esi + 8u) == 0u)
        {
            edx = t8;
        }
        else
        {
            eax = rd32(esi + 8u);
            edx = t8;
            esi = eax;
        }
        goto L_1011185d;
    }
L_10111888: ;
    wr32(sp0 - 0x14u, COW_IMG(0x1036bf34u));
    wr32(sp0 - 0x18u, COW_IMG(0x1036bf28u));
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, arg1);
    g->ebx = arg1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x10112780u), self, 4, arg1, 1u, COW_IMG(0x1036bf28u), COW_IMG(0x1036bf34u));
    t12 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_1011187e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    esi = rd32(sp0 - 0x14u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_10111888;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10111820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10111820(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
