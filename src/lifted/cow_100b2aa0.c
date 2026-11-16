/* f_0x100b2aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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

    if (rd8(COW_IMG(0x1047d3ecu)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d3ecu));
        goto L_100b2b53;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1014e0a0u), rd32(COW_IMG(0x1047d3e8u)), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        if (rd32(rd32(COW_IMG(0x1047d3e8u)) + 0x53cu) != 0u)
        {
            ecx = rd32(rd32(COW_IMG(0x1047d3e8u)) + 0x53cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_thiscall_cdecl(g, ecx, ecx, 1, eax);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
    }
    g->edx = edx;
    t5 = rd32(COW_IMG(0x1047d3e8u));
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x1014e1c0u), eax, t5, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint16_t)t6 == 0u) goto L_100b2b7c;
    eax = t6;
    ecx = t7;
    edx = t8;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    if ((uint16_t)eax != 0xffu)
    {
        t14 = (uint32_t)(int16_t)eax - 1u;
        wr32(COW_IMG(0x104887f8u), t14);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_call_regs(g, COW_IMG(0x100ae3a0u), t14, g->ecx, g->edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        t18 = cow_call_regs(g, COW_IMG(0x100b2a60u), t15, g->ecx, t17, 1, 0);
        t19 = g->edx;
        t20 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        eax = t18;
        edx = t19;
        edi = rd32(COW_IMG(0x10578204u));
        loc_10 = t20;
    }
    else
    {
        wr32(COW_IMG(0x104887f8u), 0xffu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t9 = cow_call_regs(g, COW_IMG(0x100ae3a0u), eax, g->ecx, g->edx, 1, 0);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = cow_call_regs(g, COW_IMG(0x100b2a60u), t9, g->ecx, t11, 1, 0);
        t13 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        eax = t12;
        edx = t13;
        edi = rd32(COW_IMG(0x10578204u));
        loc_10 = t13;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, loc_10, 1u);
    t22 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), edi, 0);
    wr8(self + 0x25au, 1u);
    return;
L_100b2b53: ;
    g->esp = sp0 - 8u;
    t23 = cow_call_regs(g, COW_IMG(0x100b2a60u), eax, g->ecx, in_edx, 1, 0);
    t24 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t24;
    t25 = rd32(COW_IMG(0x10578204u));
    t26 = cow_call_regs(g, COW_IMG(0x1015e790u), t23, COW_IMG(0x10621838u), g->edx, 0, 2, t24, 1u);
    t27 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t25, 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
L_100b2b7c: ;
    wr8(self + 0x25au, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2aa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
