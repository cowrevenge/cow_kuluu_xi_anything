/* f_0x10202960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10202960(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc510u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10202976;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_10202976: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 3u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        goto L_1020298b;
    }
    eax = t4;
    return eax & 0xffffff00u;
L_1020298b: ;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t6 = cow_stdcall(g, COW_IMG(0x10202c20u), 0);
    t7 = g->ecx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        goto L_1020299d;
    }
    eax = t6;
    return eax & 0xffffff00u;
L_1020299d: ;
    if (rd32(esi + 0xa0u) == 0u)
    {
        ebx = rd32(sp0 + 4u);
    }
    else
    {
        ebx = rd32(sp0 + 4u);
        t8 = rd8(esi + 0xecu);
        wr8(sp0 + 4u, (uint8_t)t8);
        wr8(self + 0x38u, (uint8_t)t8);
        t9 = rd32(sp0 + 4u);
        g->ebx = ebx;
        g->eax = t9;
        g->edx = ebx + 0x1au;
        g->esp = sp0 - 0xcu;
        t10 = cow_cdecl(g, COW_IMG(0x101cb090u), 4, ebx + 0x1au, arg2 + 7u, t9, self + 0x38u);
        t11 = g->edx;
        g->edx = t11;
        t12 = cow_call_regs(g, COW_IMG(0x10098320u), t10, esi, g->edx, 1, 0);
        t13 = g->ecx;
        t14 = g->edx;
        if ((uint8_t)t12 != 0u)
        {
            ecx = t13;
        }
        else
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t15 = cow_cdecl(g, COW_IMG(0x101938b0u), 1, 0xaeu);
            t16 = g->ecx;
            t17 = g->edx;
            if ((uint8_t)t15 == 0u)
            {
                ecx = t16;
            }
            else
            {
                eax = t15;
                ecx = t16;
                edx = t17;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t18 = cow_call_regs(g, COW_IMG(0x10087610u), eax, g->ecx, g->edx, 1, 0);
                t19 = g->edx;
                g->ebx = ebx;
                g->ecx = self;
                cow_stdcall(g, COW_IMG(0x10202900u), 3, ebx + 0x30u, arg2 + 0xau, t18);
                t20 = g->ecx;
                ecx = t20;
            }
        }
    }
    if (rd16(esi + 0x210u) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1b9cu));
        esi = esi + 0x7cu;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1b9cu));
        esi = esi + 0x214u;
    }
    g->esp = sp0 - 0xcu;
    t21 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x66u, ebx, arg2, esi, eax);
    g->ebx = in_ebx;
    return (t21 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10202960(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
