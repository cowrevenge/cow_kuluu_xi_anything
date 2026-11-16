/* f_0x100f63c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_100f63c0(Guest* g)
{
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x103601bcu));
        edx = in_edx;
        edi = 0u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103601bcu));
        t1 = rd32(ecx + 0x80u);
        wr32(sp0 - 0x7cu, t1);
        g->eax = t1;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x78u;
        t2 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
        edi = t2;
    }
    if (arg2 > 3u) goto L_100f64ed;
    t5 = rd32(COW_IMG(0x100f64fcu) + arg2 * 4u);
    switch (t5 - RD)
    {
    case 0x100f63fau: goto L_100f63fa;
    case 0x100f6407u: goto L_100f6407;
    case 0x100f6414u: goto L_100f6414;
    case 0x100f64e0u: goto L_100f64e0;
    default: rt_fatal(g, COW_IMG(0x100f63f3u), "switch");
    }
    return 0;
L_100f63fa: ;
    g->edx = edx;
    return 3u;
L_100f6407: ;
    g->edx = edx;
    return 0x16u;
L_100f6414: ;
    wr32(arg1 + 0xd8u, 0xfffffffeu);
    if (edi == 0u) goto L_100f649e;
    if (rd8(edi) == 0u) goto L_100f649e;
    ebp = 0u;
L_100f642d: ;
    wr32(sp0 - 0x7cu, sp0 - 0x68u);
    wr32(sp0 - 0x80u, ebp);
    g->eax = sp0 - 0x68u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t6 = cow_cdecl(g, COW_IMG(0x1030ffe1u), 2, ebp, sp0 - 0x68u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 < 0)
    {
        ecx = t7;
        edx = t8;
        goto L_100f6485;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    if (!(rd8(sp0 - 0x68u) & 1u)) goto L_100f6485;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t9 = cow_stdcall(g, COW_IMG(0x1031012bu), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint16_t)t9 != rd16(sp0 - 0x66u))
    {
        ecx = t10;
        edx = t11;
        goto L_100f6485;
    }
    ecx = t10;
    edx = t11;
    eax = sp0 - 0x50u;
    esi = edi;
L_100f6458: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_100f647c;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_100f6478;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_100f647c;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_100f6458;
    }
L_100f6478: ;
    eax = 0u;
L_100f6481: ;
    if (eax == 0u) goto L_100f648d;
L_100f6485: ;
    if ((int32_t)(ebp + 1u) < 64)
    {
        ebp = ebp + 1u;
        goto L_100f642d;
    }
L_100f64c5: ;
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    g->edx = edx;
    return (-(rd32(arg1 + 0xd8u) + 2u != 0u) & 0x10u) + 7u;
L_100f647c: ;
    eax = -cf + 1u - cf;
    goto L_100f6481;
L_100f648d: ;
    t12 = rd32(sp0 - 0x58u);
    if ((t12 & 0x8000u) != 0u)
    {
        ecx = t12;
        zf = (t12 & 0x8000u) == 0u;
        sf = (int32_t)(t12 & 0x8000u) < 0;
        goto L_100f64ab;
    }
    edx = 0u;
L_100f649e: ;
    g->edx = edx;
    return 7u;
L_100f64ab: ;
    t13 = rd32(sp0 - 0x54u);
    wr32(arg1 + 0xd8u, ebp);
    eax = t13;
    cf = 0u;
    pf = PARITY(0u);
    of = 0u;
    { /* shrd ecx, eax, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = ecx, b = eax, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ecx = (uint32_t)(r); } } }
    wr32(arg1 + 0xd4u, ecx & 0x3fu);
    edx = 0u;
    goto L_100f64c5;
L_100f64e0: ;
    g->edx = edx;
    return 6u;
L_100f64ed: ;
    g->edx = edx;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f63c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f63c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
