/* f_0x100ad130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100ad130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu) == 0u)
    {
        edi = (-(rd32(self + 0x664u) != 0u) & 0xfe000000u) + 0x65746e69u;
        goto L_100ad177;
    }
    ecx = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
    edi = (-(rd32(self + 0x664u) != 0u) & 0xfe000000u) + 0x65746e69u;
    t1 = rd32(self + 0x86cu);
    wr32(sp0 - 0x10u, t1);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10072290u), 3, sp0 - 4u, 1u, t1);
    if (self == 0u)
    {
        eax = self;
        goto L_100ad1d3;
    }
L_100ad17b: ;
    wr32(sp0 - 0x10u, edi);
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x100724c0u), self, rd32(self), g->edx, 0, 3, sp0 - 4u, 7u, edi);
    t3 = g->edx;
    if (rd32(t2) == 0u)
    {
        eax = rd32(t2);
    }
    else
    {
        eax = rd32(t2);
        edx = t3;
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, self);
        wr32(sp0 - 0x1cu, self);
        g->edx = edx;
        t4 = rd32(eax);
        g->esp = sp0 - 0xcu;
        t5 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, t4, g->edx, 0, 4, self, self, 0u, 0u);
        t6 = g->edx;
        g->edx = t6;
        cow_thiscall(g, COW_IMG(0x10056ae0u), t4, 0);
        t7 = g->edx;
        wr32(sp0 - 0x10u, 0u);
        t8 = rd32(t4 + 0x7cu);
        wr32(self + 0x87cu, t8);
        g->edx = t7;
        cow_thiscall(g, COW_IMG(0x100acd30u), self, 1, 0u);
        t9 = g->edx;
        wr32(sp0 - 0x10u, 1u);
        t10 = rd32(self + 0x86cu);
        wr8(self + 0x878u, 0u);
        wr32(sp0 - 0x14u, t10);
        t11 = cow_thiscall(g, COW_IMG(0x1017ac40u), rd32(COW_IMG(0x10631f24u)), 2, t10, 1u);
        eax = t11;
    }
L_100ad1d3: ;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return eax;
L_100ad177: ;
    loc_4 = self;
    loc_8 = in_esi;
    loc_c = in_edi;
    goto L_100ad17b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ad130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
