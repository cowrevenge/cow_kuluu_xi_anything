/* f_0x1007d740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007d740(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10201690u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 2u)
    {
        ecx = t2;
        edx = t3;
        goto L_1007d755;
    }
    edx = t3;
    g->edx = edx;
    return -arg3;
L_1007d755: ;
    if (rd32(COW_IMG(0x1047d490u)) == 2u) goto L_1007d774;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100e4520u), 1, 6u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_1007d769: ;
    if ((uint8_t)eax != 1u) goto L_1007d7cf;
L_1007d76d: ;
    g->edx = edx;
    return arg3;
L_1007d774: ;
    t6 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    esi = t6;
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
        edx = t6;
    }
    else
    {
        edx = t6;
        eax = -cf + 1u - cf;
    }
    if (eax != 0u) goto L_1007d7a5;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 6u, 1u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    goto L_1007d769;
L_1007d7a5: ;
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
    if (eax != 0u) goto L_1007d76d;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 6u, eax);
    t10 = g->edx;
    if ((uint8_t)t9 == 1u)
    {
        edx = t10;
        goto L_1007d76d;
    }
    edx = t10;
L_1007d7cf: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007d740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007d740(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
