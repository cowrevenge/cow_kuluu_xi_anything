/* f_0x10268980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10268980(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    esi = COW_IMG(0x1034a118u);
    edi = arg3;
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf) goto L_102689a0;
    return 0x80020001u;
L_102689a0: ;
    wr32(sp0 - 0xcu, sp0 + 0xcu);
    wr32(sp0 - 0x10u, arg4);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1);
    g->eax = arg4;
    g->edx = sp0 + 0xcu;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(rd32(arg1) + 0x10u), rd32(arg1), 4, arg1, 0u, arg4, sp0 + 0xcu);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        wr32(sp0 - 0xcu, arg9);
        wr32(sp0 - 0x10u, arg8);
        wr32(sp0 - 0x14u, arg7);
        wr32(sp0 - 0x18u, arg6);
        wr32(sp0 - 0x1cu, arg5);
        wr32(sp0 - 0x20u, arg2);
        wr32(sp0 - 0x24u, arg1);
        wr32(sp0 - 0x28u, arg3);
        g->eax = arg3;
        g->edx = arg2;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, rd32(rd32(arg3) + 0x2cu), rd32(arg3), 8, arg3, arg1, arg2, arg5, arg6, arg7, arg8, arg9);
        t4 = g->edx;
        wr32(sp0 - 0xcu, arg3);
        g->edx = t4;
        cow_thiscall(g, rd32(rd32(arg3) + 8u), rd32(arg3), 1, arg3);
        t5 = g->edx;
        eax = t3;
        edx = t5;
    }
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10268980(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
