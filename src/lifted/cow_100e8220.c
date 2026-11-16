/* f_0x100e8220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e8220(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    cow_frame(g, sp0, 52u);

    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x3d4u) != 2u) goto L_100e82de;
    eax = rd32(COW_IMG(0x104df770u));
    if (rd32(eax + 0x5f0u) != 2u) goto L_100e82de;
    wr32(sp0 - 0xcu, 1u);
    wr32(eax + 0x3d4u, 3u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x5f0u, 3u);
    t1 = rd32(COW_IMG(0x104df770u));
    t2 = rd32(rd32(COW_IMG(0x104df770u)) + rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) * 0x100u + 0xb2cu);
    t3 = rd32(rd32(COW_IMG(0x104df770u)) + rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) * 0x100u + 0xb28u);
    ecx = t2;
    edx = t3;
    cf = rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) >> 0x18u & 1u;
    pf = PARITY(0u);
    zf = rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) << 8u == 0u;
    sf = (int32_t)(rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) << 8u) < 0;
    of = rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) << 8u >> 0x1fu ^ (rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) >> 0x18u & 1u);
    { /* shrd edx, ecx, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = edx, b = ecx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
    wr32(sp0 - 8u, edx);
    t4 = ecx >> 1u & 0xfffu;
    wr32(sp0 - 4u, t4);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, COW_IMG(0x10361e30u));
    wr32(sp0 - 0x18u, t1 + 0x818u);
    t5 = rd32(t1 + 0x5e8u);
    wr32(sp0 - 0x1cu, t5);
    g->ecx = t1 + 0x818u;
    g->edx = t5;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x103104a6u), 7, t5, t1 + 0x818u, COW_IMG(0x10361e30u), sp0 - 8u, 1u, edx, t4);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 1u);
    t8 = rd32(COW_IMG(0x104df770u)) + 0x810u;
    wr32(sp0 - 0x28u, t8);
    g->eax = t8;
    g->edx = t7;
    g->esp = sp0 - 0x1cu;
    t9 = cow_cdecl(g, COW_IMG(0x103104b1u), 3, t8, 1u, 0u);
    t10 = g->edx;
    t11 = rd32(COW_IMG(0x104df770u)) + 0x810u;
    wr32(sp0 - 0x2cu, t11);
    wr32(sp0 - 0x30u, 1u);
    g->edx = t10;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x103104c7u), 2, 1u, t11);
    t12 = g->edx;
    g->edx = t12;
    return 1u;
L_100e82de: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
