/* f_0x100af4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100af4c0(Guest* g)
{
    double d11;
    double d12;
    double d14;
    double d17;
    double d19;
    double d26;
    double d27;
    double d29;
    double d31;
    double d33;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100af4d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af4d9;
    case 0x100af4e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af4e0;
    case 0x100af4e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af4e5;
    case 0x100af4f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af4f9;
    case 0x100af506u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af506;
    case 0x100af50du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af50d;
    case 0x100af517u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af517;
    case 0x100af51bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af51b;
    case 0x100af526u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af526;
    case 0x100af53au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af53a;
    case 0x100af541u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af541;
    case 0x100af54bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af54b;
    case 0x100af54fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af54f;
    case 0x100af55au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af55a;
    case 0x100af56eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af56e;
    case 0x100af575u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af575;
    case 0x100af57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af57f;
    case 0x100af583u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af583;
    case 0x100af58eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af58e;
    case 0x100af5a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af5a2;
    case 0x100af5adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af5ad;
    case 0x100af5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af5be;
    case 0x100af5c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af5c4;
    case 0x100af5d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af5d2;
    case 0x100af5d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af5d9;
    case 0x100af5f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af5f4;
    case 0x100af60fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af60f;
    case 0x100af62au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af62a;
    case 0x100af65au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af65a;
    case 0x100af663u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af663;
    case 0x100af66eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af66e;
    case 0x100af67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af67c;
    case 0x100af687u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af687;
    case 0x100af690u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af690;
    case 0x100af69bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af69b;
    case 0x100af6a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6a6;
    case 0x100af6afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6af;
    case 0x100af6b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6b6;
    case 0x100af6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6c6;
    case 0x100af6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6cd;
    case 0x100af6dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6df;
    case 0x100af6e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6e5;
    case 0x100af6efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6ef;
    case 0x100af6f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af6f6;
    case 0x100af708u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af708;
    case 0x100af71au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af71a;
    case 0x100af72cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af72c;
    case 0x100af74du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af74d;
    case 0x100af758u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af758;
    case 0x100af75fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af75f;
    case 0x100af76fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100af76f;
    default: break;
    }
#endif

    COW_AT(100af4c0)
    t1 = rd32(sp0 + 4u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int8_t)((arg2 + t2) >> 8u) < 0)
    {
        eax = arg2 + t2;
        goto L_100af76f;
    }
    eax = arg2 + t2;
    ecx = t3;
    edx = t4;
    COW_AT(100af4d9)
    if ((int32_t)eax >= 2048) goto L_100af506;
    COW_AT(100af4e0)
    if ((int32_t)eax < 80) goto L_100af4f9;
    COW_AT(100af4e5)
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = in_esi;
    return 0u;
L_100af4f9: ;
    COW_AT(100af4f9)
    g->esi = in_esi;
    return rd32(eax * 4u + rd32(self + 0x260u));
L_100af506: ;
    COW_AT(100af506)
    if ((int32_t)eax >= 4352) goto L_100af53a;
    COW_AT(100af50d)
    if ((int32_t)(eax - 0x1000u) >= 96)
    {
        eax = eax - 0x1000u;
        goto L_100af526;
    }
    eax = eax - 0x1000u;
    COW_AT(100af517)
    if ((int32_t)eax < 0) goto L_100af526;
    COW_AT(100af51b)
    g->esi = in_esi;
    return rd32(COW_IMG(0x104887f8u) + eax * 4u);
L_100af526: ;
    COW_AT(100af526)
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = in_esi;
    return 0u;
L_100af53a: ;
    COW_AT(100af53a)
    if ((int32_t)eax >= 4608) goto L_100af56e;
    COW_AT(100af541)
    if ((int32_t)(eax - 0x1100u) >= 64)
    {
        eax = eax - 0x1100u;
        goto L_100af55a;
    }
    eax = eax - 0x1100u;
    COW_AT(100af54b)
    if ((int32_t)eax < 0) goto L_100af55a;
    COW_AT(100af54f)
    g->esi = in_esi;
    return rd32(COW_IMG(0x10488a00u) + eax * 4u);
L_100af55a: ;
    COW_AT(100af55a)
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = in_esi;
    return 0u;
L_100af56e: ;
    COW_AT(100af56e)
    if ((int32_t)eax >= 6144) goto L_100af5a2;
    COW_AT(100af575)
    if ((int32_t)(eax - 0x1700u) >= 32)
    {
        eax = eax - 0x1700u;
        goto L_100af58e;
    }
    eax = eax - 0x1700u;
    COW_AT(100af57f)
    if ((int32_t)eax < 0) goto L_100af58e;
    COW_AT(100af583)
    g->esi = in_esi;
    return rd32(COW_IMG(0x10488980u) + eax * 4u);
L_100af58e: ;
    COW_AT(100af58e)
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    g->esi = in_esi;
    return 0u;
L_100af5a2: ;
    COW_AT(100af5a2)
    if ((int32_t)eax >= 32640) goto L_100af6c6;
    COW_AT(100af5ad)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        ecx = rd16(self + 2u);
        edx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        goto L_100af5c4;
    }
    COW_AT(100af5be)
    g->esi = in_esi;
    return 0u;
L_100af5c4: ;
    COW_AT(100af5c4)
    if (eax - 0x7f00u > 0xbu) goto L_100af6df;
    eax = eax - 0x7f00u;
    COW_AT(100af5d2)
    t5 = rd32(COW_IMG(0x100af780u) + eax * 4u);
    switch (t5 - RD)
    {
    case 0x100af5d9u: goto L_100af5d9;
    case 0x100af5f4u: goto L_100af5f4;
    case 0x100af60fu: goto L_100af60f;
    case 0x100af62au: goto L_100af62a;
    case 0x100af65au: goto L_100af65a;
    case 0x100af67cu: goto L_100af67c;
    case 0x100af687u: goto L_100af687;
    case 0x100af6afu: goto L_100af6af;
    case 0x100af6b6u: goto L_100af6b6;
    case 0x100af6dfu: goto L_100af6df;
    default: rt_fatal(g, COW_IMG(0x100af5d2u), "switch");
    }
    return 0;
L_100af5d9: ;
    COW_AT(100af5d9)
    d19 = fr(g, (double)rdf32(rd32(self + 0x260u) + 0x140u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d19);
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    g->esi = in_esi;
    return t20;
L_100af5f4: ;
    COW_AT(100af5f4)
    t16 = rd32(self + 0x260u);
    d17 = fr(g, (double)rdf32(rd32(self + 0x260u) + 0x144u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d17);
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
    g->esi = in_esi;
    return t18;
L_100af60f: ;
    COW_AT(100af60f)
    d14 = fr(g, (double)rdf32(rd32(self + 0x260u) + 0x148u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d14);
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    g->esi = in_esi;
    return t15;
L_100af62a: ;
    COW_AT(100af62a)
    t6 = rd32(rd32(self + 0x260u) + 0x154u);
    t7 = rd32(self + 0x260u);
    wr32(sp0 + 4u, t6);
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x100dd9d0u), t6, g->ecx, g->edx, 1, 1, t6);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    d12 = fr(g, fr(g, d11 * (double)rdf32(COW_IMG(0x1032d3d8u))) * (double)rdf32(COW_IMG(0x1032d6b4u)));
    fpush(g, d12);
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    g->esi = in_esi;
    return t13;
L_100af65a: ;
    COW_AT(100af65a)
    if ((rd32(self + 8u) & 0xff000000u) != 0u) goto L_100af6df;
    COW_AT(100af663)
    if (ecx != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au))) goto L_100af6df;
L_100af66e: ;
    COW_AT(100af66e)
    g->esi = in_esi;
    return (uint8_t)rd32(COW_IMG(0x10485640u));
L_100af67c: ;
    COW_AT(100af67c)
    g->esi = in_esi;
    return (uint32_t)(int8_t)rd8(edx + 0xefu);
L_100af687: ;
    COW_AT(100af687)
    if ((rd32(self + 8u) & 0xff000000u) != 0u) goto L_100af6a6;
    COW_AT(100af690)
    if (ecx != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au))) goto L_100af6a6;
L_100af69b: ;
    COW_AT(100af69b)
    g->esi = in_esi;
    return rd8(COW_IMG(0x10485641u));
L_100af6a6: ;
    COW_AT(100af6a6)
    g->esi = in_esi;
    return 1u;
L_100af6af: ;
    COW_AT(100af6af)
    g->esi = in_esi;
    return rd32(edx + 0x78u);
L_100af6b6: ;
    COW_AT(100af6b6)
    g->esi = in_esi;
    return rd32(edx + 0x124u) >> 0x19u & 1u;
L_100af6c6: ;
    COW_AT(100af6c6)
    if ((int32_t)eax >= 32767) goto L_100af6df;
    COW_AT(100af6cd)
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_100af6e5;
    }
L_100af6df: ;
    COW_AT(100af6df)
    g->esi = in_esi;
    return 0u;
L_100af6e5: ;
    COW_AT(100af6e5)
    if (eax - 0x7f80u > 0xbu) goto L_100af6df;
    eax = eax - 0x7f80u;
    COW_AT(100af6ef)
    t21 = rd32(COW_IMG(0x100af7b0u) + eax * 4u);
    switch (t21 - RD)
    {
    case 0x100af66eu: goto L_100af66e;
    case 0x100af69bu: goto L_100af69b;
    case 0x100af6dfu: goto L_100af6df;
    case 0x100af6f6u: goto L_100af6f6;
    case 0x100af708u: goto L_100af708;
    case 0x100af71au: goto L_100af71a;
    case 0x100af72cu: goto L_100af72c;
    case 0x100af74du: goto L_100af74d;
    case 0x100af758u: goto L_100af758;
    case 0x100af75fu: goto L_100af75f;
    default: rt_fatal(g, COW_IMG(0x100af6efu), "switch");
    }
    return 0;
L_100af6f6: ;
    COW_AT(100af6f6)
    d33 = fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d33);
    g->esp = sp0 - 4u;
    t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    g->esi = in_esi;
    return t34;
L_100af708: ;
    COW_AT(100af708)
    d31 = fr(g, (double)rdf32(ecx + 8u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d31);
    g->esp = sp0 - 4u;
    t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    g->esi = in_esi;
    return t32;
L_100af71a: ;
    COW_AT(100af71a)
    d29 = fr(g, (double)rdf32(ecx + 0xcu) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d29);
    g->esp = sp0 - 4u;
    t30 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    g->esi = in_esi;
    return t30;
L_100af72c: ;
    COW_AT(100af72c)
    t22 = rd32(ecx + 0x10u);
    g->ecx = ecx;
    g->edx = t22;
    g->esp = sp0 - 4u;
    t23 = cow_call_regs(g, COW_IMG(0x100dd9d0u), eax, g->ecx, g->edx, 1, 1, t22);
    t24 = g->ecx;
    t25 = g->edx;
    d26 = cow_take_float(g);
    d27 = fr(g, fr(g, d26 * (double)rdf32(COW_IMG(0x1032d3d8u))) * (double)rdf32(COW_IMG(0x1032d6b4u)));
    fpush(g, d27);
    t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
    g->esi = in_esi;
    return t28;
L_100af74d: ;
    COW_AT(100af74d)
    g->esi = in_esi;
    return (uint32_t)(int8_t)rd8(ecx + 0xefu);
L_100af758: ;
    COW_AT(100af758)
    g->esi = in_esi;
    return rd32(ecx + 0x78u);
L_100af75f: ;
    COW_AT(100af75f)
    g->esi = in_esi;
    return rd32(ecx + 0x124u) >> 0x19u & 1u;
L_100af76f: ;
    COW_AT(100af76f)
    g->esi = in_esi;
    return rd32((eax & 0x7fffu) * 4u + rd32(self + 0x1cu));
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100af4c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100af4d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af4e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af4e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af4f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af506u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af50du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af517u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af51bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af526u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af53au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af541u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af54bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af54fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af55au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af56eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af575u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af57fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af583u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af58eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af5a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af5adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af5beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af5c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af5d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af5d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af5f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af60fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af62au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af65au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af663u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af66eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af67cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af687u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af690u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af69bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af6f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af708u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af71au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af72cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af74du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af758u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af75fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100af76fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100af4c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100af4c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
