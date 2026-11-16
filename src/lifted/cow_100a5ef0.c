/* f_0x100a5ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100a5ef0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t in_esi = g->esi;

    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
        ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
        edx = in_edx;
        goto L_100a5f2b;
    }
    ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
        edx = in_edx;
        goto L_100a5f2b;
    }
    eax = rd32(self + 0x70u);
    if (rd32(eax + 0x120u) >> 7u & 1u)
    {
        loc_4 = self;
        goto L_100a6009;
    }
    ecx = rd32(eax + 0x120u) >> 7u;
    if (rd32(eax + 0x12cu) >> 0xdu & 1u)
    {
        loc_4 = self;
        goto L_100a6009;
    }
    edx = rd32(eax + 0x12cu) >> 0xdu;
L_100a5f2b: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3fu, 0x1cu, 1u, 0xffffffffu);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        if (rd8(COW_IMG(0x10487f81u)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
            loc_c = 1u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
            loc_c = 0u;
        }
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, loc_c);
        t3 = g->edx;
        edx = t3;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 - 2u > 0x51u)
    {
        eax = t4 - 2u;
        ecx = t5;
        edx = t6;
        goto L_100a5f7c;
    }
    eax = t4 - 2u;
    edx = t6;
    t7 = rd32(COW_IMG(0x100a600cu) + rd8(COW_IMG(0x100a6014u) + eax) * 4u);
    switch (t7 - RD)
    {
    case 0x100a5f73u: goto L_100a5f73;
    case 0x100a5f7cu: ecx = rd8(COW_IMG(0x100a6014u) + eax); goto L_100a5f7c;
    default: rt_fatal(g, COW_IMG(0x100a5f6cu), "switch");
    }
    return;
L_100a5f73: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
L_100a5f7c: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3fu, 0x10u, 1u, 0xffffffffu);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        edx = t13;
        loc_4 = self;
    }
    else
    {
        ecx = t12;
        edx = t13;
        t14 = (edx & 0xffffff00u) | rd8(COW_IMG(0x10487f80u)) == 0u;
        g->ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        g->edx = t14;
        t15 = rd8(COW_IMG(0x10487f80u));
        g->esp = sp0;
        t16 = cow_cdecl(g, COW_IMG(0x100a8cc0u), 3, t14, in_esi, self);
        t17 = g->ecx;
        t18 = g->edx;
        if (rd8(COW_IMG(0x10487f80u)) != 0u)
        {
            eax = (t16 & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
            ecx = t17;
            edx = t18;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t27 = cow_cdecl(g, COW_IMG(0x10015290u), 1, 0x438c0000u);
            t28 = g->ecx;
            t29 = g->edx;
            eax = t27;
            ecx = t28;
            edx = t29;
            loc_4 = self;
        }
        else
        {
            eax = (t16 & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
            ecx = t17;
            edx = t18;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t19 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x49u);
            t20 = g->ecx;
            t21 = g->edx;
            g->edx = t21;
            cow_cdecl(g, COW_IMG(0x10015290u), 1, cow_f2bits((double)(float)(double)(int32_t)t19));
            t22 = g->edx;
            g->eax = rd32(self);
            g->edx = t22;
            t23 = rd32(self);
            t24 = cow_thiscall(g, rd32(t23 + 0x344u), self, 1, 0u);
            t25 = g->ecx;
            t26 = g->edx;
            eax = t24;
            ecx = t25;
            edx = t26;
            loc_4 = t19;
        }
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10037ef0u), ecx, 0);
        t30 = g->edx;
        edx = t30;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t31 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t32 = g->ecx;
    t33 = g->edx;
    if (t31 == 2u)
    {
        ecx = t32;
        edx = t33;
        goto L_100a5fff;
    }
    edx = t33;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t34 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t35 = g->ecx;
    t36 = g->edx;
    if (t34 != 3u) goto L_100a6009;
    ecx = t35;
    edx = t36;
L_100a5fff: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100a8cc0u), 3, 0u, in_esi, loc_4);
L_100a6009: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a5ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a5ef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
