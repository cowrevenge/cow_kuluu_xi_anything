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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
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
    if ((int32_t)eax >= 2048) goto L_100af506;
    if ((int32_t)eax < 80) goto L_100af4f9;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0u;
L_100af4f9: ;
    return rd32(eax * 4u + rd32(self + 0x260u));
L_100af506: ;
    if ((int32_t)eax >= 4352) goto L_100af53a;
    if ((int32_t)(eax - 0x1000u) >= 96)
    {
        eax = eax - 0x1000u;
        goto L_100af526;
    }
    eax = eax - 0x1000u;
    if ((int32_t)eax < 0) goto L_100af526;
    return rd32(COW_IMG(0x104887f8u) + eax * 4u);
L_100af526: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0u;
L_100af53a: ;
    if ((int32_t)eax >= 4608) goto L_100af56e;
    if ((int32_t)(eax - 0x1100u) >= 64)
    {
        eax = eax - 0x1100u;
        goto L_100af55a;
    }
    eax = eax - 0x1100u;
    if ((int32_t)eax < 0) goto L_100af55a;
    return rd32(COW_IMG(0x10488a00u) + eax * 4u);
L_100af55a: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0u;
L_100af56e: ;
    if ((int32_t)eax >= 6144) goto L_100af5a2;
    if ((int32_t)(eax - 0x1700u) >= 32)
    {
        eax = eax - 0x1700u;
        goto L_100af58e;
    }
    eax = eax - 0x1700u;
    if ((int32_t)eax < 0) goto L_100af58e;
    return rd32(COW_IMG(0x10488980u) + eax * 4u);
L_100af58e: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0u;
L_100af5a2: ;
    if ((int32_t)eax >= 32640) goto L_100af6c6;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        ecx = rd16(self + 2u);
        edx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        goto L_100af5c4;
    }
    return 0u;
L_100af5c4: ;
    if (eax - 0x7f00u > 0xbu) goto L_100af6df;
    eax = eax - 0x7f00u;
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
    d19 = fr(g, (double)rdf32(rd32(self + 0x260u) + 0x140u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d19);
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    return t20;
L_100af5f4: ;
    t16 = rd32(self + 0x260u);
    d17 = fr(g, (double)rdf32(rd32(self + 0x260u) + 0x144u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d17);
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
    return t18;
L_100af60f: ;
    d14 = fr(g, (double)rdf32(rd32(self + 0x260u) + 0x148u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d14);
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    return t15;
L_100af62a: ;
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
    return t13;
L_100af65a: ;
    if ((rd32(self + 8u) & 0xff000000u) != 0u) goto L_100af6df;
    if (ecx != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au))) goto L_100af6df;
L_100af66e: ;
    return (uint8_t)rd32(COW_IMG(0x10485640u));
L_100af67c: ;
    return (uint32_t)(int8_t)rd8(edx + 0xefu);
L_100af687: ;
    if ((rd32(self + 8u) & 0xff000000u) != 0u) goto L_100af6a6;
    if (ecx != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au))) goto L_100af6a6;
L_100af69b: ;
    return rd8(COW_IMG(0x10485641u));
L_100af6a6: ;
    return 1u;
L_100af6af: ;
    return rd32(edx + 0x78u);
L_100af6b6: ;
    return rd32(edx + 0x124u) >> 0x19u & 1u;
L_100af6c6: ;
    if ((int32_t)eax >= 32767) goto L_100af6df;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_100af6e5;
    }
L_100af6df: ;
    return 0u;
L_100af6e5: ;
    if (eax - 0x7f80u > 0xbu) goto L_100af6df;
    eax = eax - 0x7f80u;
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
    d33 = fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d33);
    g->esp = sp0 - 4u;
    t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    return t34;
L_100af708: ;
    d31 = fr(g, (double)rdf32(ecx + 8u) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d31);
    g->esp = sp0 - 4u;
    t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    return t32;
L_100af71a: ;
    d29 = fr(g, (double)rdf32(ecx + 0xcu) * (double)rdf32(COW_IMG(0x10329cd8u)));
    fpush(g, d29);
    g->esp = sp0 - 4u;
    t30 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    return t30;
L_100af72c: ;
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
    return t28;
L_100af74d: ;
    return (uint32_t)(int8_t)rd8(ecx + 0xefu);
L_100af758: ;
    return rd32(ecx + 0x78u);
L_100af75f: ;
    return rd32(ecx + 0x124u) >> 0x19u & 1u;
L_100af76f: ;
    return rd32((eax & 0x7fffu) * 4u + rd32(self + 0x1cu));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100af4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100af4c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
