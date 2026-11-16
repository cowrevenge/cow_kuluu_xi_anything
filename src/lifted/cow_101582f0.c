/* f_0x101582f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101582f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        loc_4 = t1;
        if (rd32(self + 0xd0u) == 0u)
        {
            eax = rd32(self + 0xd0u);
        }
        else
        {
            eax = rd32(self + 0xd0u);
            t3 = rd32(self + 0x78u);
            g->eax = eax;
            g->edx = t3;
            g->esp = sp0 - 0x14u;
            t4 = cow_thiscall_cdecl(g, eax, self + 0x75u, 8, t3, self + 0x75u, self + 0x76u, self + 0x77u, self + 0x80u, self + 0x7cu, self + 0x82u, self + 0x83u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t6 = cow_call_regs(g, COW_IMG(0x10157880u), eax, self, g->edx, 1, 0);
        t7 = g->ecx;
        t8 = g->edx;
        g->edx = t8;
        t9 = rd32(sp0 - 8u);
        t10 = cow_call_regs(g, COW_IMG(0x101578a0u), t6, t7, g->edx, 1, 0);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        t13 = rd32(sp0 - 0xcu);
        t14 = cow_call_regs(g, COW_IMG(0x10157890u), t10, t11, g->edx, 1, 0);
        t15 = g->ecx;
        t16 = g->edx;
        g->edx = t16;
        t17 = rd32(sp0 - 0x10u);
        t18 = cow_call_regs(g, COW_IMG(0x101578b0u), t14, t15, g->edx, 1, 0);
        t19 = g->ecx;
        t20 = g->edx;
        g->edx = t20;
        t21 = cow_thiscall(g, COW_IMG(0x101578c0u), t19, 0);
        t22 = g->ecx;
        t23 = g->edx;
        if (rd32(self + 0xd0u) == 0u)
        {
            ebp = t18;
            edi = t21;
            loc_8 = (t9 & 0xffffff00u) | (uint8_t)t6;
            loc_c = (t13 & 0xffffff00u) | (uint8_t)t10;
            loc_10 = (t17 & 0xffffff00u) | (uint8_t)t14;
            goto L_101583a9;
        }
        eax = rd32(self + 0xd0u);
        ecx = t22;
        edx = t23;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t6;
        ebp = t18;
        edi = t21;
        loc_8 = (t9 & 0xffffff00u) | (uint8_t)t6;
        loc_c = (t13 & 0xffffff00u) | (uint8_t)t10;
        loc_10 = (t17 & 0xffffff00u) | (uint8_t)t14;
        if (rd8(self + 0x22u) != 0u) goto L_101583a9;
        eax = (eax & 0xffffff00u) | rd8(self + 0x22u);
        g->esp = sp0 - 0x20u;
        t24 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc0u);
        if (t24 != 1u) goto L_101583a9;
        eax = t24;
        if (edi == 0u) goto L_101583a9;
        if ((uint8_t)ebx == 0u) goto L_101583a9;
        if ((uint8_t)loc_10 == 0u) goto L_101583a9;
        eax = 1u;
L_101583ab: ;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x1009ade0u), loc_4, 6, eax, (uint8_t)loc_8, (uint8_t)loc_10, (uint8_t)loc_c, (uint32_t)(int16_t)ebp, edi);
    }
    return;
L_101583a9: ;
    eax = 0u;
    goto L_101583ab;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101582f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101582f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
