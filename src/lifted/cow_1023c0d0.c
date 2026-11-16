/* f_0x1023c0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1023c0d0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x14u, rd32(arg2));
    t1 = rd32(arg2 + 4u);
    wr32(sp0 - 0x10u, t1);
    wr16(sp0 - 0xeu, (uint16_t)((t1 >> 0x10u) + 0xffe4u));
    g->eax = arg2;
    g->edx = t1;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, 0);
    t3 = g->edx;
    if (rd32(arg1) == 0u)
    {
        eax = t2;
        edi = in_edi;
    }
    else
    {
        edx = t3;
        wr32(sp0 - 0x1cu, in_edi);
        esi = arg1;
        edi = arg1;
L_1023c100: ;
        wr32(sp0 - 0x20u, rd32(edi));
        g->eax = rd32(edi);
        g->edx = edx;
        t4 = rd32(edi);
        g->esp = sp0 - 0x1cu;
        t5 = cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0xcu, 1, t4);
        t6 = g->edx;
        if (rd8(rd32(edi)) != 0u)
        {
            eax = (t5 & 0xffffff00u) | rd8(rd32(edi));
            edx = t6;
            wr32(sp0 - 0x20u, COW_IMG(0x1034f2b8u));
            loc_20 = COW_IMG(0x1034f2b8u);
        }
        else
        {
            eax = (t5 & 0xffffff00u) | rd8(rd32(edi));
            edx = t6;
            wr32(sp0 - 0x20u, COW_IMG(0x10388368u));
            loc_20 = COW_IMG(0x10388368u);
        }
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1018d440u), sp0 - 0xcu, 1, loc_20);
        t7 = g->edx;
        if (rd32(esi + 4u) != 0u)
        {
            edx = t7;
            edi = esi + 4u;
            esi = esi + 4u;
            goto L_1023c100;
        }
        eax = rd32(esi + 4u);
        edi = rd32(sp0 - 0x1cu);
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    g->eax = eax;
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x18u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 2, sp0 - 0x14u, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x24u, t8);
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x1011d7f0u), 3, t8, sp0 - 0x14u, 0u);
    t12 = g->edx;
    cow_thiscall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, 0);
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023c0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1023c0d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
