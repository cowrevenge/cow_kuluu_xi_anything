/* f_0x10143950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10143950(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2beu);
        t2 = g->edx;
        g->edx = t2;
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t1, 1u);
        t3 = g->edx;
        t4 = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        t5 = cow_fastcall(g, COW_IMG(0x10143930u), self, t3, 1, t4);
        t6 = g->ecx;
        t7 = g->edx;
        g->edx = t7;
        t8 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, t5);
        t9 = g->edx;
        if ((uint16_t)t8 == 0u)
        {
            eax = t8;
            ecx = rd32(COW_IMG(0x10578204u));
            edx = t9;
            goto L_101439b5;
        }
        eax = t8;
        ecx = rd32(COW_IMG(0x10578204u));
        if (rd32(ecx + 8u) == 0u)
        {
            edx = rd32(ecx + 8u);
            goto L_101439b5;
        }
        edx = rd32(ecx + 8u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t10 = cow_call_regs(g, COW_IMG(0x1013e260u), eax + 0x7400u, ecx, g->edx, 0, 4, eax + 0x7400u, 0u, 0u, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
L_101439be: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x101420a0u), eax, g->ecx, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t19 = cow_thiscall(g, COW_IMG(0x101420d0u), ecx, 0);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    t22 = rd16(COW_IMG(0x10485668u));
    wr16(self + 0x46u, (uint16_t)t22);
    t23 = rd16(COW_IMG(0x1048566au));
    wr16(self + 0x66u, (uint16_t)t23);
    t24 = rd16(COW_IMG(0x1048566cu));
    wr16(self + 0x86u, (uint16_t)t24);
    t25 = rd16(COW_IMG(0x1048566eu));
    wr16(self + 0xa6u, (uint16_t)t25);
    t26 = rd16(COW_IMG(0x10485670u));
    wr16(self + 0xc6u, (uint16_t)t26);
    t27 = rd16(COW_IMG(0x10485672u));
    wr16(self + 0xe6u, (uint16_t)t27);
    t28 = rd16(COW_IMG(0x10485674u));
    wr16(self + 0x106u, (uint16_t)t28);
    t29 = rd16(COW_IMG(0x10485676u));
    wr16(self + 0x126u, (uint16_t)t29);
    t30 = rd16(COW_IMG(0x10485664u));
    wr16(self + 0x146u, (uint16_t)t30);
    wr16(self + 0x166u, rd16(COW_IMG(0x10485666u)));
    g->edx = ((edx | t23 | t26) & 0xffff0000u) | t29;
    return ((eax | t24 | t27) & 0xffff0000u) | t30;
L_101439b5: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    goto L_101439be;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143950(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
