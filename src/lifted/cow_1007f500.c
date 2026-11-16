/* f_0x1007f500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007f500(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x1047d490u)) == 2u) goto L_1007f51b;
    eax = rd32(COW_IMG(0x1047d490u)) - 2u;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = (t1 & 0xffffff00u) | (uint8_t)t1 == 0u;
    eax = t4;
    ecx = t2;
    edx = t3;
    loc_10 = t4;
L_1007f57f: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, 0u, loc_10);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
L_1007f589: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 0u);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        ecx = rd32(COW_IMG(0x10578158u));
        edx = t20;
        goto L_1007f5ae;
    }
    ecx = rd32(COW_IMG(0x10578158u));
    edx = t20;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0xf2u);
    t21 = g->edx;
    g->edx = t21;
    return arg3;
L_1007f51b: ;
    t5 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    esi = t5;
    edi = COW_IMG(0x10357d7cu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
        edx = t5;
    }
    else
    {
        edx = t5;
        eax = -cf + 1u - cf;
    }
    if (eax != 0u) goto L_1007f54c;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, eax, 1u);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    goto L_1007f589;
L_1007f54c: ;
    esi = edx;
    edi = COW_IMG(0x1034f488u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
        eax = -cf + 1u - cf;
    }
    if (eax != 0u) goto L_1007f574;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, eax, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    goto L_1007f589;
L_1007f574: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = (t14 & 0xffffff00u) | (uint8_t)t12 == 0u;
    eax = t12;
    ecx = t13;
    edx = t15;
    loc_10 = t15;
    goto L_1007f57f;
L_1007f5ae: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0xf3u);
    t22 = g->edx;
    g->edx = t22;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007f500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
