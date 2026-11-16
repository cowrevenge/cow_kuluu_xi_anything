/* f_0x10124640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10124640(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr16(self + 0x50u, (uint16_t)arg2);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101606f0u), (in_eax & 0xffff0000u) | (uint16_t)arg2, COW_IMG(0x10621838u), g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        if (rd32(arg1) != 0u) goto L_1012466b;
        if (rd32(arg1 + 4u) == 0u)
        {
            eax = rd32(arg1 + 4u);
            goto L_1012468c;
        }
        eax = rd32(arg1 + 4u);
L_1012466b: ;
        if (rd32(COW_IMG(0x1045666cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1045666cu));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, COW_IMG(0x10009780u), ecx, 1, 1u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        wr32(self + 0x48u, 0u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t6 = cow_fastcall(g, COW_IMG(0x101252f0u), self, edx, 1, 1u);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
L_1012468c: ;
    g->ecx = ecx;
    g->edx = edx;
    t9 = rd32(arg1);
    fpush(g, (double)(int32_t)t9);
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(self + 4u, t10 + rd32(self + 4u));
    g->ecx = t11;
    g->edx = t12;
    t13 = rd32(arg1 + 4u);
    fpush(g, (double)(int32_t)t13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(self + 8u, t14 + rd32(self + 8u));
    g->ecx = t15;
    g->edx = t16;
    t17 = rd32(arg1);
    fpush(g, (double)(int32_t)t17);
    t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), t14, g->ecx, g->edx, 1, 0);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(self + 0x14u, t18);
    t21 = rd32(arg1 + 4u);
    fpush(g, (double)(int32_t)t21);
    t22 = cow_call_regs(g, COW_IMG(0x10311c6cu), t18, g->ecx, g->edx, 1, 0);
    wr32(self + 0x18u, t22);
    if ((int32_t)rd32(self + 4u) < 0)
    {
        wr32(self + 4u, 0u);
    }
    if ((int32_t)rd32(self + 8u) < 0)
    {
        wr32(self + 8u, 0u);
    }
    if ((int32_t)rd32(self + 4u) > (int16_t)rd16(COW_IMG(0x106218b8u)))
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u));
        wr32(self + 4u, eax - 1u);
    }
    if ((int32_t)rd32(self + 8u) > (int16_t)rd16(COW_IMG(0x106218bau)))
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x106218bau));
        wr32(self + 8u, eax - 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10124640(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
