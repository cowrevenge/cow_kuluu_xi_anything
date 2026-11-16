/* f_0x100fb730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fb730(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg3 + 4u) == 1u) goto L_100fb7cc;
    eax = rd32(arg3 + 4u) - 1u;
    if (eax == 3u) goto L_100fb784;
    eax = eax - 3u;
    if (eax == 4u) goto L_100fb75c;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x40u);
    t1 = g->ecx;
    t2 = g->edx;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fc180u), 1, 4u);
    t3 = g->ecx;
    t4 = g->edx;
    ecx = t3;
    edx = t4;
L_100fb7d6: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xdu, 1u, 1u);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        wr16(eax + 4u, 0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100ddd20u), 3, eax, 8u, 0u);
        t21 = g->ecx;
        t22 = g->edx;
        ecx = t21;
        edx = t22;
    }
    if (rd32(arg3 + 8u) != 0u)
    {
        eax = rd32(arg3 + 8u);
        t23 = rd32(COW_IMG(0x104df770u));
        wr32(t23, eax);
        ecx = t23;
    }
    if (rd32(arg3 + 0xcu) == 0u)
    {
        eax = rd32(arg3 + 0xcu);
    }
    else
    {
        eax = rd32(arg3 + 0xcu);
        t24 = (edx & 0xffff0000u) | (uint16_t)eax;
        g->eax = eax;
        g->edx = t24;
        g->esp = sp0 - 4u;
        t25 = cow_thiscall(g, rd32(COW_IMG(0x10329480u)), ecx, 1, t24);
        t26 = g->edx;
        wr16(rd32(COW_IMG(0x104df770u)) + 0xcu, (uint16_t)t25);
        eax = t25;
        edx = t26;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100fb75c: ;
    wr8(arg1 + 0xcu, 4u);
    if (rd32(arg3 + 0x18u) != 6u)
    {
        eax = rd32(arg3 + 0x18u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa2u);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    else
    {
        eax = rd32(arg3 + 0x18u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa6u);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
L_100fb7d3: ;
    goto L_100fb7d6;
L_100fb784: ;
    t9 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c35cu);
    t10 = ~(~t9 | 0x40u) & t9;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x3c35cu, t10);
    t11 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c35cu);
    t12 = ~(~t11 | 4u) & t11;
    t13 = rd32(COW_IMG(0x104dfd98u));
    wr32(t13 + 0x3c35cu, t12);
    g->edx = t12;
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 1u);
    t15 = g->edx;
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_100fb7cc: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100fc180u), 1, 4u);
    t16 = g->ecx;
    t17 = g->edx;
    ecx = t16;
    edx = t17;
    goto L_100fb7d3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fb730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fb730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
