/* f_0x100b2940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    const uint32_t in_ebx = g->ebx;

    if (rd8(COW_IMG(0x1047d3ecu)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d3ecu));
        goto L_100b2a22;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
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
            g->esp = sp0 - 0xcu;
            t3 = cow_thiscall_cdecl(g, ecx, ecx, 1, eax);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
    }
    g->edx = edx;
    t5 = rd32(COW_IMG(0x1047d3e8u));
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x1014e1c0u), eax, t5, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint16_t)t6 == 0u) goto L_100b2a4f;
    eax = t6;
    ecx = t7;
    edx = t8;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    if ((uint16_t)eax != 0xffu) goto L_100b29e9;
    wr32(COW_IMG(0x104887f8u), 0xfeu);
    g->ebx = 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x100ae3a0u), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = cow_call_regs(g, COW_IMG(0x100b2a60u), t9, g->ecx, g->edx, 1, 0);
    t13 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t13;
    t14 = rd32(COW_IMG(0x10578204u));
    t15 = cow_call_regs(g, COW_IMG(0x1015e790u), t12, COW_IMG(0x10621838u), g->edx, 0, 2, t13, 1u);
    t16 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t14, 0);
    wr8(COW_IMG(0x104804c2u), 1u);
    wr8(COW_IMG(0x104808f0u), 1u);
    wr8(COW_IMG(0x10487034u), 1u);
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b29e9: ;
    t17 = (uint32_t)(int16_t)eax - 1u;
    wr32(COW_IMG(0x104887f8u), t17);
    g->ebx = 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x100ae3a0u), t17, g->ecx, g->edx, 1, 0);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_call_regs(g, COW_IMG(0x100b2a60u), t18, g->ecx, g->edx, 1, 0);
    t22 = g->edx;
    t23 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t22;
    t24 = rd32(COW_IMG(0x10578204u));
    t25 = cow_call_regs(g, COW_IMG(0x1015e790u), t21, COW_IMG(0x10621838u), g->edx, 0, 2, t23, 1u);
    t26 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t24, 0);
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b2a22: ;
    g->esp = sp0 - 0xcu;
    t27 = cow_call_regs(g, COW_IMG(0x100b2a60u), eax, g->ecx, g->edx, 1, 0);
    t28 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t28;
    t29 = rd32(COW_IMG(0x10578204u));
    t30 = cow_call_regs(g, COW_IMG(0x1015e790u), t27, COW_IMG(0x10621838u), g->edx, 0, 2, t28, 1u);
    t31 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t29, 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
L_100b2a4f: ;
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2940(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
