/* f_0x10015510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10015510(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t37;
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        loc_4 = in_esi;
        loc_8 = in_edi;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_call_regs(g, COW_IMG(0x10021900u), t4, t4, g->edx, 1, 0);
        t7 = g->ecx;
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t10 = g->edx;
        g->edx = t10;
        t11 = cow_call_regs(g, COW_IMG(0x10021ae0u), t9, t9, g->edx, 1, 0);
        t12 = g->ecx;
        t13 = g->edx;
        if ((uint8_t)t11 != 0u)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
            goto L_10015546;
        }
        eax = t11;
        ecx = t12;
        edx = t13;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t14 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t15 = g->ecx;
        t16 = g->edx;
        if (rd8(t14 + 0xf4u) == 0u)
        {
            ecx = (t15 & 0xffffff00u) | rd8(t14 + 0xf4u);
            edx = t16;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            goto L_10015582;
        }
        eax = t14;
        ecx = (t15 & 0xffffff00u) | rd8(t14 + 0xf4u);
        edx = t16;
L_10015546: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t17 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t18 = g->ecx;
        t19 = g->edx;
        wr8(t17 + 0xf4u, 0u);
        g->edx = t19;
        t20 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t21 = g->edx;
        g->edx = t21;
        t22 = cow_thiscall(g, COW_IMG(0x10021b70u), t20, 0);
        t23 = g->edx;
        wr32(sp0 - 0xcu, t22);
        wr32(sp0 - 0x10u, 2u);
        g->edx = t23;
        t24 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, t22);
        t25 = g->edx;
        esi = t22;
        edi = sp0 - 0x48u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->ecx = ecx;
        g->edx = t25;
        g->esp = sp0 - 0x48u;
        cow_stdcall(g, COW_IMG(0x100150d0u), 0);
        t26 = g->ecx;
        t27 = g->edx;
        ecx = t26;
        edx = t27;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
    }
L_10015582: ;
    if (rd32(COW_IMG(0x104568fcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        eax = rd32(COW_IMG(0x104568fcu));
        t28 = rd32(eax + 0x2f8u);
        wr32(eax + 0x2f4u, t28);
        ecx = t28;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_stdcall(g, COW_IMG(0x10015480u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t33 = g->edx;
    wr32(sp0 - 0xcu, t32);
    wr32(sp0 - 0x10u, 3u);
    g->edx = t33;
    t34 = rd32(COW_IMG(0x1045666cu));
    t35 = cow_thiscall(g, COW_IMG(0x1000bd50u), t34, 2, 3u, t32);
    t36 = g->ecx;
    t37 = g->edx;
    g->esp = sp0;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t37;
    cow_tailcall(g, COW_IMG(0x1006b270u), t35, t36, t37);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10015510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10015510(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
