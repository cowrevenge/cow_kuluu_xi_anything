/* f_0x100b6e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b6e30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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

    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if ((int32_t)(t1 & 0x80000007u) >= 0)
    {
        eax = t1;
        edx = t1;
        edi = t1 & 0x80000007u;
    }
    else
    {
        eax = t1;
        edx = t1;
        edi = t1 & 0x80000007u;
        edi = (edi - 1u | 0xfffffff8u) + 1u;
    }
    if (eax > 0xb1u) goto L_100b6f6e;
    t2 = rd32(COW_IMG(0x100b6f74u) + rd8(COW_IMG(0x100b6f8cu) + eax) * 4u);
    switch (t2 - RD)
    {
    case 0x100b6e71u: goto L_100b6e71;
    case 0x100b6ea5u: goto L_100b6ea5;
    case 0x100b6eedu: goto L_100b6eed;
    case 0x100b6f14u: goto L_100b6f14;
    case 0x100b6f3cu: goto L_100b6f3c;
    case 0x100b6f6eu: goto L_100b6f6e;
    default: rt_fatal(g, COW_IMG(0x100b6e6au), "switch");
    }
    return;
L_100b6e71: ;
    if ((int32_t)edi < 8)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr16(COW_IMG(0x10485fe4u) + edi * 2u, (uint16_t)t17);
        wr16(COW_IMG(0x1048558cu) + edi * 2u, 0x7fu);
        wr16(COW_IMG(0x10482f1cu), 0xffffu);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100b6ea5: ;
    if ((int32_t)edi < 8)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t15 = g->edx;
        wr16(COW_IMG(0x10485fe4u) + edi * 2u, (uint16_t)t14);
        t16 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        wr16(COW_IMG(0x1048558cu) + edi * 2u, (uint16_t)t16);
        if ((uint16_t)t16 > 0xffu)
        {
            ecx = COW_IMG(0x1048558cu) + edi * 2u;
            wr16(ecx, 0xffu);
        }
        wr16(COW_IMG(0x10482f1cu), 0xffffu);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    return;
L_100b6eed: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t12 = g->ecx;
    t13 = g->edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10037a30u), t11, g->ecx, g->edx, 1, 2, t11, t9);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    return;
L_100b6f14: ;
    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        loc_c = 0xffffffffu;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1046393cu));
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_call_regs(g, COW_IMG(0x10246710u), eax, g->ecx, g->edx, 0, 2, 0u, 0xffffffffu);
        t8 = g->edx;
        eax = t7;
        edx = t8;
        loc_c = t7;
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, loc_c);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100b6f3c: ;
    if (rd32(COW_IMG(0x1046393cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1046393cu));
        g->ecx = ecx;
        g->edx = edx;
        t3 = rd32(COW_IMG(0x10463940u));
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10246710u), eax, g->ecx, g->edx, 0, 2, 0u, 0xffffffffu);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            edi = t3;
            if (edi != 0u)
            {
                g->esp = sp0 - 8u;
                cow_call_regs(g, COW_IMG(0x100378b0u), g->eax, g->ecx, edx, 1, 1, edi);
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
L_100b6f6e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b6e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
