/* f_0x100693b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100693b0(Guest* g)
{
    double d6;
    double d7;
    uint32_t eax;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 4u, rd32(self));
    if (rd32(self + 4u) > 3u)
    {
        eax = rd32(self + 4u);
        loc_4 = rd32(self);
        goto L_1006942c;
    }
    eax = rd32(self + 4u);
    loc_4 = rd32(self);
    t1 = rd32(COW_IMG(0x1006944cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100693c7u: goto L_100693c7;
    case 0x100693efu: goto L_100693ef;
    case 0x10069415u: goto L_10069415;
    case 0x1006941cu: goto L_1006941c;
    default: rt_fatal(g, COW_IMG(0x100693c0u), "switch");
    }
    return 0;
L_100693c7: ;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    eax = t9;
L_100693cc: ;
    t10 = eax * rd32(sp0 + 8u);
    wr32(sp0 - 4u, t10);
    eax = 0u;
    loc_4 = t10;
L_100693d7: ;
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10068590u), arg1, 2, sp0 - 4u, eax);
    t12 = g->edx;
    g->edx = t12;
    return arg1;
L_100693ef: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t5 = g->edx;
    d6 = cow_take_float(g);
    wr32(sp0 - 0xcu, 2u);
    wr32(sp0 - 0x10u, sp0 + 8u);
    d7 = fr(g, d6 * (double)(int32_t)rd32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d7);
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x10068590u), arg1, 2, sp0 + 8u, 2u);
    t8 = g->edx;
    g->edx = t8;
    return arg1;
L_10069415: ;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    eax = t3;
    goto L_100693cc;
L_1006941c: ;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    wr32(sp0 - 4u, t2);
    eax = 3u;
    loc_4 = t2;
    goto L_100693d7;
L_1006942c: ;
    if (eax != 2u) goto L_100693d7;
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10068590u), arg1, 2, sp0 + 8u, eax);
    t11 = g->edx;
    g->edx = t11;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100693b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100693b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
