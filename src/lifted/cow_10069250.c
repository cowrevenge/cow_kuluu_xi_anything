/* f_0x10069250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10069250(Guest* g)
{
    double d7;
    double d8;
    uint32_t eax;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
        goto L_100692cf;
    }
    eax = rd32(self + 4u);
    loc_4 = rd32(self);
    t1 = rd32(COW_IMG(0x100692ecu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10069267u: goto L_10069267;
    case 0x1006928eu: goto L_1006928e;
    case 0x100692b4u: goto L_100692b4;
    case 0x100692bbu: goto L_100692bb;
    default: rt_fatal(g, COW_IMG(0x10069260u), "switch");
    }
    return 0;
L_10069267: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    eax = t10;
L_1006926c: ;
    t11 = eax + rd32(sp0 + 8u);
    wr32(sp0 - 4u, t11);
    eax = 0u;
    loc_4 = t11;
L_10069276: ;
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, sp0 - 4u, 2, sp0 - 4u, eax);
    t13 = g->edx;
    g->edx = t13;
    return arg1;
L_1006928e: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t6 = g->edx;
    d7 = cow_take_float(g);
    wr32(sp0 - 0xcu, 2u);
    wr32(sp0 - 0x10u, sp0 + 8u);
    d8 = fr(g, d7 + (double)(int32_t)rd32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d8);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t6, 2, sp0 + 8u, 2u);
    t9 = g->edx;
    g->edx = t9;
    return arg1;
L_100692b4: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    eax = t4;
    goto L_1006926c;
L_100692bb: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    t3 = t2 + rd32(sp0 + 8u);
    wr32(sp0 - 4u, t3);
    eax = 3u;
    loc_4 = t3;
    goto L_10069276;
L_100692cf: ;
    if (eax != 2u) goto L_10069276;
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, in_edx, 2, sp0 + 8u, eax);
    t12 = g->edx;
    g->edx = t12;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10069250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10069250(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
