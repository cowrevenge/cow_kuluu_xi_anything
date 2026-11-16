/* f_0x100ad060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100ad060(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu) == 0u)
    {
        eax = rd32(COW_IMG(0x1065cb04u));
        edx = in_edx;
        goto L_100ad121;
    }
    ecx = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
    edi = (-(rd32(self + 0x664u) != 0u) & 0xfc000000u) + 0x73746e69u;
    t1 = rd32(self + 0x86cu);
    wr32(sp0 - 0x10u, t1);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->edx = t1;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 - 4u, 1u, t1);
    t2 = g->edx;
    if (self == 0u)
    {
        eax = self;
        edx = t2;
        goto L_100ad121;
    }
    wr32(sp0 - 0x10u, edi);
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x100724c0u), self, rd32(self), g->edx, 0, 3, sp0 - 4u, 7u, edi);
    t4 = g->edx;
    if (rd32(t3) == 0u)
    {
        eax = rd32(t3);
        goto L_100ad10f;
    }
    eax = rd32(t3);
    edx = t4;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, self);
    wr32(sp0 - 0x1cu, self);
    g->edx = edx;
    t5 = rd32(eax);
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, t5, g->edx, 0, 4, self, self, 0u, 0u);
    t7 = g->edx;
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x10056ae0u), t5, 0);
    t8 = g->edx;
    wr32(sp0 - 0x10u, 1u);
    t9 = rd32(t5 + 0x7cu);
    wr32(self + 0x87cu, t9);
    g->eax = t9;
    g->edx = t8;
    t10 = cow_thiscall(g, COW_IMG(0x100acd30u), self, 1, 1u);
    t11 = g->edx;
    wr8(self + 0x878u, 1u);
    if ((uint8_t)arg1 != 0u)
    {
        eax = (t10 & 0xffffff00u) | (uint8_t)arg1;
        goto L_100ad12a;
    }
    edx = t11;
    wr32(sp0 - 0x10u, 0u);
    t12 = rd32(self + 0x86cu);
    wr32(sp0 - 0x14u, t12);
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x1017ac40u), rd32(COW_IMG(0x10631f24u)), 2, t12, 0u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t13;
L_100ad10f: ;
    wr32(sp0 - 0x10u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x100ad1e0u), self, 1, arg1);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t14;
L_100ad121: ;
    wr32(sp0 - 0x10u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x100ad1e0u), self, 1, 0u);
    eax = t15;
L_100ad12a: ;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ad060(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
