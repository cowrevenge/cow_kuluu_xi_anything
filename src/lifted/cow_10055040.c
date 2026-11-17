/* f_0x10055040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10055040(Guest* g)
{
    double d16;
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (rd32(self + 0x14u) != 0u)
    {
        edi = rd32(self + 0x14u);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x100634a0u), edi + 0x54u, 0);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x100634a0u), edi + 0x2cu, 0);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x100634a0u), edi + 4u, 0);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0xcu, edi);
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, edi);
        wr32(self + 0x14u, 0u);
    }
    t8 = (rd32(COW_IMG(0x1047bc88u)) << 0x18u) + 0x30303063u;
    wr32(sp0 - 0xcu, t8);
    wr32(sp0 - 0x10u, 6u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = t8;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg1), 3, sp0 + 4u, 6u, t8);
    t10 = g->edx;
    t11 = rd32(t9);
    wr32(self + 4u, t11);
    if (t11 != 0u)
    {
        edx = t10;
        goto L_100550b8;
    }
    edx = t10;
    wr32(sp0 - 0xcu, 0x30303063u);
    wr32(sp0 - 0x10u, 6u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg1), 3, sp0 + 4u, 6u, 0x30303063u);
    t13 = g->edx;
    t14 = rd32(t12);
    wr32(self + 4u, t14);
    if (t14 == 0u) goto L_100550dd;
    edx = t13;
L_100550b8: ;
    if (rd32(self + 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 4u);
        eax = rd32(eax);
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x10055780u), eax + 0x70u, 0);
    wr32(self + 0x14u, t15);
    wr32(self + 8u, 0u);
    d16 = (double)rdf32(t15 + 0xcu);
    wrf32(self + 0xcu, (float)d16);
L_100550dd: ;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10055040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
