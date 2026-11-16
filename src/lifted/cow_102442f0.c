/* f_0x102442f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102442f0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(sp0 + 0xcu) <= 0)
    {
        eax = in_eax;
        goto L_10244530;
    }
    ebp = rd32(sp0 + 0xcu);
    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_10244530;
    }
    if (arg2 == 0u)
    {
        eax = in_eax;
        goto L_10244530;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10312800u), self, 4, arg1, 0x2eu, in_edi, in_esi);
    t2 = g->edx;
    wr32(sp0 + 0xcu, t1);
    esi = arg1;
    edi = COW_IMG(0x10379a08u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_10244358;
    edx = t2;
    if (rd8(COW_IMG(0x10669091u)) != (uint8_t)arg5)
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x102445f0u), 4, arg2, ebp, in_edi, in_esi);
        t3 = g->edx;
        edx = t3;
    }
L_10244510: ;
    g->eax = arg4;
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, arg1, arg2, ebp, 0u, arg4);
    return (t28 & 0xffffff00u) | 1u;
L_10244358: ;
    esi = arg1;
    edi = COW_IMG(0x10377c78u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1024438f;
    eax = (uint8_t)arg5;
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
    edx = arg1;
    zf = (uint8_t)(rd8(COW_IMG(0x10669091u)) - (uint8_t)arg5) == 0u;
L_1024437a: ;
    if (!zf)
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102445a0u), 3, arg2, ebp, in_edi);
        t14 = g->edx;
        edx = t14;
    }
    goto L_10244510;
L_1024438f: ;
    esi = arg1;
    edi = COW_IMG(0x1037aa40u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102443c9;
    if (rd8(COW_IMG(0x10669091u)) == (uint8_t)arg5)
    {
        edx = arg1;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
        g->eax = (uint8_t)arg5;
        g->ecx = ecx;
        g->edx = arg1;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x102445a0u), 3, arg2, ebp, in_edi);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102445c0u), 4, arg2, ebp, arg2, ebp);
        t7 = g->edx;
        edx = t7;
    }
    goto L_10244510;
L_102443c9: ;
    esi = arg1;
    edi = COW_IMG(0x1037aa38u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102443fc;
    if (rd8(COW_IMG(0x10669091u)) == (uint8_t)arg5)
    {
        edx = arg1;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
        g->edx = arg1;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102445a0u), 3, arg2, ebp, in_edi);
        t8 = g->edx;
        edx = t8;
    }
    goto L_10244510;
L_102443fc: ;
    esi = arg1;
    edi = COW_IMG(0x1037aa2cu);
    ecx = 0xau;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1024442f;
    if (rd8(COW_IMG(0x10669091u)) == (uint8_t)arg5)
    {
        edx = arg1;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
        g->edx = arg1;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102445a0u), 3, arg2, ebp, in_edi);
        t9 = g->edx;
        edx = t9;
    }
    goto L_10244510;
L_1024442f: ;
    edi = COW_IMG(0x1037aa70u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t10 = ~ecx - 1u;
    g->ecx = t10;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037aa70u), t10, in_edi, in_esi);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u) goto L_10244462;
    eax = t11;
    ecx = t12;
    edx = t13;
    eax = (eax & 0xffffff00u) | (uint8_t)arg5;
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
    zf = (uint8_t)(rd8(COW_IMG(0x10669091u)) - (uint8_t)arg5) == 0u;
    goto L_1024437a;
L_10244462: ;
    esi = arg1;
    edi = COW_IMG(0x1037ee1cu);
    ecx = 0xcu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_10244496;
    if (rd8(COW_IMG(0x10669091u)) == (uint8_t)arg5)
    {
        edx = arg1;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
        g->edx = arg1;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10244620u), 3, arg2, ebp, in_edi);
        t15 = g->edx;
        edx = t15;
    }
    goto L_10244510;
L_10244496: ;
    if (rd32(sp0 + 0xcu) == 0u) goto L_102444c8;
    esi = rd32(sp0 + 0xcu);
    edi = COW_IMG(0x103888b0u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102444c8;
    if (rd8(COW_IMG(0x10669091u)) == (uint8_t)arg5)
    {
        edx = arg1;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
        g->edx = arg1;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10244680u), 2, arg2, ebp);
        t16 = g->edx;
        edx = t16;
    }
    goto L_10244510;
L_102444c8: ;
    edi = COW_IMG(0x1037ab30u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t17 = ~ecx - 1u;
    g->ecx = t17;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, COW_IMG(0x1037ab30u), t17, in_edi, in_esi);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 != 0u)
    {
        eax = t18;
        goto L_10244530;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    if (rd8(COW_IMG(0x10669091u)) == (uint8_t)arg5)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg5;
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10669091u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t21 = cow_cdecl(g, COW_IMG(0x102445a0u), 3, arg2, ebp, in_edi);
        t22 = g->ecx;
        t23 = g->edx;
        g->edx = t23;
        g->esp = sp0 - 0x1cu;
        t24 = cow_thiscall_cdecl(g, COW_IMG(0x102447a0u), t22, 1, arg2);
        t25 = g->ecx;
        t26 = g->edx;
        g->edx = t26;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10244540u), 2, arg2, ebp);
        t27 = g->edx;
        edx = t27;
    }
    goto L_10244510;
L_10244530: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102442f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102442f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
