/* f_0x10029a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10029a50(Guest* g)
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
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    cow_thiscall(g, COW_IMG(0x100279b0u), COW_IMG(0x104574b8u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(COW_IMG(0x10457148u), 0u);
    wr32(COW_IMG(0x1045714cu), 0u);
    wr32(COW_IMG(0x10457150u), 0u);
    wr32(COW_IMG(0x10457154u), 0u);
    if (rd32(COW_IMG(0x10457548u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10457548u));
        ecx = t1;
        edx = t2;
        goto L_10029b3e;
    }
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t3;
    g->esp = sp0;
    t4 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x5cu), rd32(COW_IMG(0x10457540u)), 6, t3, 0x7000u, 0x208u, 0x52u, rd32(COW_IMG(0x10457540u)), COW_IMG(0x10457148u));
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        goto L_10029b57;
    }
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t5;
    g->esp = sp0;
    t6 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x5cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 6, t5, 0x9000u, 0x208u, 0x152u, rd32(COW_IMG(0x10457540u)), COW_IMG(0x1045714cu));
    if ((int32_t)t6 < 0)
    {
        eax = t6;
        goto L_10029b57;
    }
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t7;
    g->esp = sp0;
    t8 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x5cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 6, t7, 0x8000u, 0x208u, 0x112u, rd32(COW_IMG(0x10457540u)), COW_IMG(0x10457150u));
    if ((int32_t)t8 < 0)
    {
        eax = t8;
        goto L_10029b57;
    }
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t9;
    g->edx = rd32(COW_IMG(0x10457540u));
    t10 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    t11 = rd32(COW_IMG(0x10457540u));
    g->esp = sp0;
    t12 = cow_thiscall(g, rd32(t10 + 0x5cu), t10, 6, t9, 0x4000u, 0x208u, 0x112u, t11, COW_IMG(0x10457154u));
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)t12 < 0)
    {
        eax = t12;
        goto L_10029b57;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    wr32(COW_IMG(0x10457548u), 1u);
L_10029b3e: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t15 = cow_stdcall(g, COW_IMG(0x1001d0a0u), 0);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    t18 = cow_call_regs(g, COW_IMG(0x100336b0u), g->eax, g->ecx, t17, 1, 0);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->edx = t20;
    t21 = cow_stdcall(g, COW_IMG(0x10038930u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    t24 = cow_stdcall(g, COW_IMG(0x10025bd0u), 0);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    return cow_tailcall(g, COW_IMG(0x10025200u), t24, t25, t26);
L_10029b57: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10029a50(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
