/* f_0x10080390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10080390(Guest* g)
{
    unsigned af;
    unsigned cf;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1584u);

    wr32(sp0 - 0x608u, in_ebx);
    wr8(sp0 - 0x603u, 3u);
    wr8(sp0 - 0x602u, 0u);
    t1 = rd8(COW_IMG(0x1032cf40u) + (uint8_t)arg1 * 4u);
    wr8(sp0 - 0x604u, (uint8_t)t1);
    if ((uint8_t)arg1 != 7u)
    {
        edx = (in_edx & 0xffffff00u) | t1;
        goto L_100803d9;
    }
    edx = (in_edx & 0xffffff00u) | t1;
    wr32(sp0 - 0x60cu, 0x9cu);
    g->eax = (uint8_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x608u;
    t2 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x9cu);
    t3 = g->edx;
    g->edx = t3;
    return (t2 & 0xffffff00u) | 1u;
L_100803d9: ;
    if (arg5 != 0u) goto L_100803fe;
    wr32(sp0 - 0x60cu, 0x9du);
    g->ebx = arg5;
    g->eax = (uint8_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x608u;
    t4 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x9du);
    t5 = g->edx;
    g->ebx = in_ebx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
L_100803fe: ;
    if ((uint8_t)arg1 == 2u)
    {
        ecx = 0x1bu;
    }
    else
    {
        if ((uint8_t)arg1 != 3u)
        {
            ecx = 5u;
        }
        else
        {
            ecx = 0x1eu;
        }
    }
    wr32(sp0 - 0x60cu, in_ebp);
    wr32(sp0 - 0x610u, in_esi);
    wr32(sp0 - 0x614u, in_edi);
    wr32(sp0 - 0x618u, 0u);
    wr32(sp0 - 0x61cu, ecx);
    wr32(sp0 - 0x620u, sp0 - 0x600u);
    g->ebx = arg5;
    g->eax = sp0 - 0x600u;
    g->esp = sp0 - 0x614u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x100e3750u), ecx, 3, sp0 - 0x600u, ecx, 0u);
    wr32(sp0 - 0x618u, arg4);
    wr32(sp0 - 0x61cu, arg3);
    wr32(sp0 - 0x620u, 0x34u);
    wr32(sp0 - 0x624u, 0xau);
    g->ecx = arg4;
    g->edx = arg3;
    g->esp = sp0 - 0x61cu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x34u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x620u, t7);
    wr32(sp0 - 0x624u, sp0 - 0x300u);
    g->ebx = arg5;
    g->ecx = t8;
    g->esp = sp0 - 0x610u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x300u, t7, arg3, arg4, in_edi);
    t10 = g->ecx;
    edi = sp0 - 0x300u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x614u < sp0 - 0x624u;
    pf = PARITY((uint8_t)(sp0 - 0x614u));
    af = (sp0 - 0x624u ^ 0x10u ^ sp0 - 0x614u) >> 4u & 1u;
    zf = sp0 == 0x614u;
    sf = (int32_t)(sp0 - 0x614u) < 0;
    of = ((sp0 - 0x624u ^ sp0 - 0x614u) & (sp0 - 0x614u ^ 0x10u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t11 = edi - ~ecx;
    edi = sp0 - 0x600u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t11;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x618u, eax);
    wr32(sp0 - 0x61cu, 1u);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x620u, eax);
    wr32(sp0 - 0x624u, sp0 - 0x604u);
    wr32(sp0 - 0x628u, sp0 - 0x600u);
    g->ebx = arg5;
    t12 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x614u;
    cow_thiscall(g, COW_IMG(0x10127c00u), t12, 5, sp0 - 0x600u, sp0 - 0x604u, eax, 1u, eax);
    t13 = g->ecx;
    wr32(sp0 - 0x618u, 0u);
    edi = arg5;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x61cu, 1u);
    wr32(sp0 - 0x620u, 0x280u);
    wr32(sp0 - 0x624u, sp0 - 0x600u);
    t14 = ~ecx - 1u;
    wr32(sp0 - 0x628u, t14);
    wr32(sp0 - 0x62cu, arg5);
    g->edx = sp0 - 0x600u;
    t15 = rd32(COW_IMG(0x10662d40u));
    cow_thiscall(g, COW_IMG(0x101b7280u), t15, 6, arg5, t14, sp0 - 0x600u, 0x280u, 1u, 0u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x618u, sp0 - 0x600u);
    g->edx = t17;
    cow_thiscall_cdecl(g, COW_IMG(0x101c8f40u), t16, 1, sp0 - 0x600u);
    t18 = g->ecx;
    t19 = g->edx;
    t20 = rd8(COW_IMG(0x1035813au));
    edi = sp0 - 0x600u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x61cu, 1u);
    wr32(sp0 - 0x620u, arg2);
    t21 = rd16(COW_IMG(0x10358138u));
    wr16(edi - 1u, (uint16_t)t21);
    wr8(edi + 1u, (uint8_t)t20);
    g->eax = arg2;
    g->ecx = (ecx & 0xffff0000u) | t21;
    g->esp = sp0 - 0x618u;
    t22 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, arg2, 1u);
    t23 = g->ecx;
    edi = t22;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x614u < sp0 - 0x620u;
    pf = PARITY((uint8_t)(sp0 - 0x614u));
    af = (sp0 - 0x620u ^ sp0 - 0x614u) >> 4u & 1u;
    zf = sp0 == 0x614u;
    sf = (int32_t)(sp0 - 0x614u) < 0;
    of = ((sp0 - 0x620u ^ sp0 - 0x614u) & (sp0 - 0x614u ^ 0xcu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t24 = edi - ~ecx;
    edi = sp0 - 0x600u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t24;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x618u, 0u);
    wr32(sp0 - 0x61cu, 1u);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edi = sp0 - 0x600u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x620u, 1u);
    wr32(sp0 - 0x624u, sp0 - 0x604u);
    wr32(sp0 - 0x628u, sp0 - 0x600u);
    t25 = rd16(COW_IMG(0x10353e10u));
    t26 = rd32(COW_IMG(0x10578158u));
    wr16(edi - 1u, (uint16_t)t25);
    g->ebx = ~ecx;
    g->eax = (eax & 0xffff0000u) | t25;
    g->edx = sp0 - 0x600u;
    g->esp = sp0 - 0x614u;
    t27 = cow_thiscall(g, COW_IMG(0x10127c00u), t26, 5, sp0 - 0x600u, sp0 - 0x604u, 1u, 1u, 0u);
    t28 = g->edx;
    g->ebx = in_ebx;
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10080390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
