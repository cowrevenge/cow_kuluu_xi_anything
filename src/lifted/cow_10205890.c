/* f_0x10205890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10205890(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 2u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        edi = t1;
        t7 = rd32(rd32(edi) + 0x138u);
        wr8(self + 0x2cu, 0u);
        eax = t7;
    }
    else
    {
        edx = t5;
        edi = t1;
        t6 = rd32(rd32(edi) + 0x404u);
        wr8(self + 0x2cu, 1u);
        eax = t6;
    }
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    t8 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x1011ae50u), t8, 2, 1u, eax);
    t10 = g->ecx;
    t11 = g->edx;
    if (rd8(self + 0x2eu) == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t14 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 6u);
        t15 = g->edx;
        if ((uint8_t)t14 == 0u)
        {
            edx = t15;
            t17 = rd32(rd32(edi) + 0x768u);
            wr8(self + 0x2du, 0u);
            eax = t17;
        }
        else
        {
            edx = t15;
            t16 = rd32(rd32(edi) + 0x790u);
            wr8(self + 0x2du, 1u);
            eax = t16;
        }
    }
    else
    {
        t12 = rd32(rd32(edi) + 0x794u);
        t13 = rd32(edi);
        wr8(self + 0x2du, 1u);
        eax = t12;
        edx = t13;
    }
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    t18 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x1011ae50u), t18, 2, 3u, eax);
    t20 = g->ecx;
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 0xbu);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        edx = t23;
        t26 = rd32(rd32(edi) + 0xc28u);
        wr8(self + 0x2fu, 0u);
        eax = t26;
    }
    else
    {
        t24 = rd32(rd32(edi) + 0xc30u);
        t25 = rd32(edi);
        wr8(self + 0x2fu, 1u);
        eax = t24;
        edx = t25;
    }
    g->edi = edi;
    g->edx = edx;
    t27 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1011ae50u), t27, 2, 5u, eax);
    t28 = g->ecx;
    t29 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = t29;
        goto L_1020598b;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    ecx = t28;
    edx = t29;
    t30 = (ecx & 0xffff0000u) | rd16(eax + 0x3c350u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, t30);
    t32 = g->edx;
    if ((t31 & 8u) != 0u)
    {
        eax = t31;
        edx = t32;
        goto L_1020598b;
    }
    eax = t31;
    edx = t32;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t33 = cow_thiscall(g, COW_IMG(0x10118bc0u), rd32(self + 8u), 1, 3u);
    t34 = g->edx;
    if (t33 == 5u)
    {
        eax = t33;
        edx = t34;
    }
    else
    {
        eax = t33;
        edx = t34;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t35 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
        t36 = g->edx;
        eax = t35;
        edx = t36;
    }
    wr8(self + 0x2eu, 1u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1020598b: ;
    wr8(self + 0x2eu, 0u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205890(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
