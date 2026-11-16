/* f_0x102386b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102386b0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    ecx = self;
    loc_4 = 0u;
L_102386c7: ;
    if (arg1 > 7u) goto L_102386e0;
    t1 = rd32(COW_IMG(0x10238830u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x102386d7u: goto L_102386d7;
    case 0x102386fdu: goto L_102386fd;
    case 0x10238705u: goto L_10238705;
    case 0x1023870du: goto L_1023870d;
    case 0x10238715u: goto L_10238715;
    case 0x1023877cu: goto L_1023877c;
    case 0x102387b6u: goto L_102387b6;
    case 0x10238807u: goto L_10238807;
    default: rt_fatal(g, COW_IMG(0x102386d0u), "switch");
    }
    return 0;
L_102386c5: ;
    goto L_102386c7;
L_102386d7: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10234fc0u), 1, arg4);
    t14 = g->ecx;
    ecx = t14;
L_102386dd: ;
L_102386e0: ;
    if (rd8(arg4) != 0u) goto L_10238825;
L_102386ea: ;
    if ((int32_t)(loc_4 + 1u) < 2)
    {
        loc_4 = loc_4 + 1u;
        goto L_102386c5;
    }
    eax = loc_4 + 1u;
    loc_4 = loc_4 + 1u;
    if (rd8(arg4) == 0u) goto L_102387ad;
L_10238825: ;
    return 0u;
L_102386fd: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10234d00u), 1, arg4);
    t13 = g->ecx;
    ecx = t13;
    goto L_102386dd;
L_10238705: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10236390u), 1, arg4);
    t12 = g->ecx;
    ecx = t12;
    goto L_102386dd;
L_1023870d: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10235e00u), 1, arg4);
    t11 = g->ecx;
    ecx = t11;
    goto L_102386dd;
L_10238715: ;
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10312090u), arg1, g->ecx, g->edx, 1, 3, arg4, arg3, 0xfu);
    t7 = g->ecx;
    t8 = g->edx;
    wr8(arg4 + 0xfu, 0u);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102354d0u), 1, arg4);
    t9 = g->ecx;
    t10 = g->edx;
    eax = arg4;
    ecx = t9;
    edx = t10;
    esi = arg3;
L_1023872f: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_10238753;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1023874f;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_10238753;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1023872f;
    }
L_1023874f: ;
    eax = 0u;
L_10238758: ;
    if (eax == 0u)
    {
        wr8(arg4, (uint8_t)eax);
    }
    edi = arg4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u >= 3u)
    {
        ecx = ~ecx - 1u;
        goto L_102386e0;
    }
    ecx = ~ecx - 1u;
    wr8(arg4, (uint8_t)eax);
    goto L_102386ea;
L_10238753: ;
    eax = -cf + 1u - cf;
    goto L_10238758;
L_1023877c: ;
    if (arg2 != 5u)
    {
        if (arg2 != 7u)
        {
            eax = 3u;
        }
        else
        {
            eax = 2u;
        }
    }
    else
    {
        eax = 1u;
    }
    wr32(COW_IMG(0x10668fe0u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10235460u), 3, arg4, 1u, eax);
    eax = t5;
L_102387ad: ;
    return 0xffffffffu;
L_102387b6: ;
    if (arg2 != 5u) goto L_102387e3;
    wr32(COW_IMG(0x10668fe0u), 0u);
    g->eax = 2u;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x10235460u), 3, arg4, 0u, 2u);
    return 0xffffffffu;
L_102387e3: ;
    if (arg2 != 6u)
    {
        eax = 3u;
    }
    else
    {
        eax = 1u;
    }
    wr32(COW_IMG(0x10668fe0u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10235460u), 3, arg4, 0u, eax);
    return 0xffffffffu;
L_10238807: ;
    wr32(COW_IMG(0x10668fe0u), 0u);
    g->eax = arg1;
    g->esp = sp0 - 0x14u;
    t2 = cow_cdecl(g, COW_IMG(0x10235310u), 1, arg4);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102386b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102386b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
