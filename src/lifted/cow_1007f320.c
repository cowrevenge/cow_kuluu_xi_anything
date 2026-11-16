/* f_0x1007f320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007f320(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x105781e4u)) == 0u)
    {
        edx = in_edx;
        goto L_1007f347;
    }
    eax = rd32(COW_IMG(0x105781e4u));
    if (rd32(eax + 8u) == 0u)
    {
        edx = rd32(eax + 8u);
        goto L_1007f347;
    }
    edx = rd32(eax + 8u);
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x45u);
    t1 = g->edx;
    g->edx = t1;
    return arg3;
L_1007f347: ;
    if (rd32(COW_IMG(0x1047d490u)) == 2u) goto L_1007f374;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 8u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_1007f3c5;
    }
    ecx = t3;
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 8u, 1u);
    t5 = g->edx;
    g->edx = t5;
    return arg3;
L_1007f374: ;
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
    if (eax != 0u) goto L_1007f3aa;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 8u, 1u);
    t7 = g->edx;
    g->edx = t7;
    return arg3;
L_1007f3aa: ;
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
    if (eax != 0u) goto L_1007f3d1;
L_1007f3c5: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 8u, 0u);
    t8 = g->edx;
    edx = t8;
L_1007f3d1: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007f320(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
