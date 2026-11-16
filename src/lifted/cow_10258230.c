/* f_0x10258230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10258230(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
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
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 <= 0)
    {
        ebp = 0u;
        loc_4 = 0u;
        goto L_102583d5;
    }
    ebx = arg3;
    ebp = 0u;
    loc_4 = 0u;
L_1025824b: ;
    if (rd8(arg5 + loc_4) == 0u) goto L_102583dd;
    edx = (loc_4 & 0xffffff00u) | rd8(arg5 + loc_4);
    esi = arg5 + loc_4;
    g->ecx = arg5;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x10258000u), 1, esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        loc_18 = esi;
        goto L_10258307;
    }
    ecx = t2;
    edx = t3;
    loc_18 = esi;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x102581f0u), 5, loc_18, in_edi, in_esi, in_ebp, in_ebx);
    t5 = g->edx;
    if (t4 == 0u) goto L_102582fd;
    eax = t4;
    edx = t5;
    if (eax - 2u > 0xdu) goto L_102582ca;
    ecx = eax - 2u;
    t6 = rd32(COW_IMG(0x102583f4u) + rd8(COW_IMG(0x10258408u) + ecx) * 4u);
    switch (t6 - RD)
    {
    case 0x10258298u: goto L_10258298;
    case 0x102582b1u: goto L_102582b1;
    case 0x102582bau: goto L_102582ba;
    case 0x102582c3u: edx = rd8(COW_IMG(0x10258408u) + ecx); goto L_102582c3;
    case 0x102582cau: edx = rd8(COW_IMG(0x10258408u) + ecx); goto L_102582ca;
    default: rt_fatal(g, COW_IMG(0x10258291u), "switch");
    }
    return 0;
L_10258298: ;
    if (eax == 8u) goto L_102582aa;
    if (eax == 0xau) goto L_102582aa;
    ecx = 0u;
    edx = 0u;
    esi = 0u;
L_102582cf: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x10258170u), 5, ebx, arg4, ecx, edx, esi);
    t8 = g->ecx;
    edi = t7;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = ~ecx - 1u;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1 + ebp, t7, t9);
L_102582fd: ;
    eax = loc_4 + 1u;
L_102583c5: ;
    if ((int32_t)ebp < (int32_t)arg2)
    {
        loc_4 = eax;
        goto L_1025824b;
    }
    loc_4 = eax;
L_102583d5: ;
    eax = ebp;
L_102583d7: ;
    return eax;
L_102582aa: ;
    ecx = 0u;
    edx = 0u;
    esi = 1u;
    goto L_102582cf;
L_102582b1: ;
    ecx = 0u;
    edx = 1u;
    esi = 0u;
    goto L_102582cf;
L_102582ba: ;
    ecx = 0u;
    edx = 2u;
    esi = 0u;
    goto L_102582cf;
L_102582c3: ;
    ecx = 1u;
L_102582cc: ;
    edx = 0xffffffffu;
    esi = 0u;
    goto L_102582cf;
L_102582ca: ;
    ecx = 0u;
    goto L_102582cc;
L_10258307: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_cdecl(g, COW_IMG(0x10258010u), 1, loc_18);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_102583a3;
    }
    edx = t12;
    if ((uint32_t)(int8_t)edx - 2u > 0xdu)
    {
        eax = (uint32_t)(int8_t)edx - 2u;
        goto L_1025836a;
    }
    eax = (uint32_t)(int8_t)edx - 2u;
    t13 = rd32(COW_IMG(0x10258418u) + eax * 4u);
    switch (t13 - RD)
    {
    case 0x1025832bu: goto L_1025832b;
    case 0x10258332u: goto L_10258332;
    case 0x10258339u: goto L_10258339;
    case 0x10258340u: goto L_10258340;
    case 0x10258347u: goto L_10258347;
    case 0x1025834eu: goto L_1025834e;
    case 0x10258355u: goto L_10258355;
    case 0x1025835au: ecx = 0u; goto L_1025835a;
    case 0x1025835eu: goto L_1025835e;
    case 0x10258363u: ecx = 0u; goto L_10258363;
    case 0x1025836au: goto L_1025836a;
    default: rt_fatal(g, COW_IMG(0x10258324u), "switch");
    }
    return 0;
L_1025832b: ;
    eax = 2u;
    ecx = 0u;
L_1025836d: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t14 = cow_cdecl(g, COW_IMG(0x10258060u), 3, arg4, ecx, eax);
    t15 = g->ecx;
    edi = t14;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t16 = ~ecx - 1u;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1 + ebp, t14, t16);
    eax = loc_4 + 1u;
    ebx = 0xffffffffu;
    goto L_102583c5;
L_10258332: ;
    eax = 3u;
    ecx = 0u;
    goto L_1025836d;
L_10258339: ;
    eax = 4u;
    ecx = 0u;
    goto L_1025836d;
L_10258340: ;
    eax = 5u;
    ecx = 0u;
    goto L_1025836d;
L_10258347: ;
    eax = 6u;
    ecx = 0u;
    goto L_1025836d;
L_1025834e: ;
    eax = 7u;
    ecx = 0u;
    goto L_1025836d;
L_10258355: ;
    ecx = 1u;
L_1025835a: ;
    eax = 0u;
    goto L_1025836d;
L_1025835e: ;
    ecx = 1u;
L_10258363: ;
    eax = 1u;
    goto L_1025836d;
L_1025836a: ;
    eax = 0xffffffffu;
    ecx = 0u;
    goto L_1025836d;
L_102583a3: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t17 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
    t18 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg1, g->ecx, g->edx, 1, 3, arg1 + ebp, esi, t17);
    eax = loc_4 + t17;
    ebp = ebp + t17;
    goto L_102583c5;
L_102583dd: ;
    if ((int32_t)ebp >= (int32_t)arg2)
    {
        eax = ebp;
        goto L_102583d7;
    }
    eax = ebp;
    wr8(arg1 + ebp, 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10258230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10258230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
