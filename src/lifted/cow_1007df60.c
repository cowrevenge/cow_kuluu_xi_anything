/* f_0x1007df60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007df60(Guest* g)
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
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr32(sp0 - 0x60u, 5u);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 5u);
    t2 = g->edx;
    if (rd32(COW_IMG(0x1047d490u)) == 2u) goto L_1007dfcb;
    eax = t1;
    edx = t2;
    if ((uint8_t)eax != 0u) goto L_1007dfa9;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(sp0 - 0x4cu, 0x7fu);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t3 = g->edx;
    g->edx = t3;
    return arg3;
L_1007dfa9: ;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(sp0 - 0x4cu, 0x80u);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t4 = g->edx;
    g->edx = t4;
    return arg3;
L_1007dfcb: ;
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
    if (eax != 0u) goto L_1007e022;
    wr32(sp0 - 0x60u, eax);
    wr32(sp0 - 0x64u, 5u);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 5u, eax);
    t6 = g->edx;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(sp0 - 0x4cu, 0x7fu);
    wr32(sp0 - 0x68u, sp0 - 0x54u);
    g->edx = t6;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t7 = g->edx;
    g->edx = t7;
    return arg3;
L_1007e022: ;
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
    if (eax != 0u) goto L_1007e071;
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 5u);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 5u, 1u);
    t8 = g->edx;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(sp0 - 0x4cu, 0x80u);
    wr32(sp0 - 0x68u, sp0 - 0x54u);
    g->edx = t8;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t9 = g->edx;
    g->edx = t9;
    return arg3;
L_1007e071: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007df60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007df60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
