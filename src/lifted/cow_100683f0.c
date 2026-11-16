/* f_0x100683f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100683f0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d16;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 4u) != 4u)
    {
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0xcu, rd32(self));
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, rd32(self));
        t1 = g->edx;
        wr32(self + 4u, 0u);
        edx = t1;
    }
    if (rd32(rd32(sp0 + 4u) + 4u) > 4u) goto L_100684c6;
    eax = rd32(rd32(sp0 + 4u) + 4u);
    esi = rd32(sp0 + 4u);
    t2 = rd32(COW_IMG(0x100684d0u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x10068423u: goto L_10068423;
    case 0x10068439u: goto L_10068439;
    case 0x1006844fu: goto L_1006844f;
    case 0x10068468u: goto L_10068468;
    case 0x1006847eu: goto L_1006847e;
    default: rt_fatal(g, COW_IMG(0x1006841cu), "switch");
    }
    return 0;
L_10068423: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x10069970u), esi, 0);
    t20 = g->edx;
    wr32(sp0 - 0xcu, t19);
    cow_thiscall(g, COW_IMG(0x100684f0u), self, 1, t19);
    return self;
L_10068439: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x100699a0u), esi, 0);
    t18 = g->edx;
    wr32(sp0 - 0xcu, t17);
    cow_thiscall(g, COW_IMG(0x10068510u), self, 1, t17);
    return self;
L_1006844f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x100699d0u), esi, 0);
    t14 = g->ecx;
    t15 = g->edx;
    d16 = cow_take_float(g);
    wr32(sp0 - 0xcu, t14);
    wrf32(sp0 - 0xcu, (float)(double)(float)d16);
    cow_thiscall(g, COW_IMG(0x10068500u), self, 1, cow_f2bits((double)(float)d16));
    return self;
L_10068468: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x10069a20u), esi, 0);
    t12 = g->edx;
    wr32(sp0 - 0xcu, t11);
    cow_thiscall(g, COW_IMG(0x10068520u), self, 1, t11);
    return self;
L_1006847e: ;
    wr32(sp0 - 0xcu, in_edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10069a50u), esi, 0);
    t4 = g->ecx;
    t5 = g->edx;
    edi = t3;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x10u, ~ecx);
    g->eax = eax;
    g->edx = t5;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, ~ecx, in_edi, in_esi);
    t7 = g->edx;
    wr32(sp0 + 4u, t6);
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, COW_IMG(0x10069a50u), esi, 0);
        t9 = g->ecx;
        eax = t8;
        ecx = t9;
        edx = rd32(sp0 + 4u);
L_100684ae: ;
        t10 = rd8(eax);
        wr8(edx, (uint8_t)t10);
        if ((uint8_t)t10 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t10;
            edx = edx + 1u;
            goto L_100684ae;
        }
        eax = eax + 1u;
        edx = edx + 1u;
    }
    wr32(sp0 - 0xcu, 4u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10068590u), self, 2, sp0 + 4u, 4u);
L_100684c6: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100683f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100683f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
