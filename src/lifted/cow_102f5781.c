/* f_0x102f5781 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102f5781(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg3, 0u);
    esi = arg2;
    edi = COW_IMG(0x1034a128u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf) goto L_102f57ae;
    esi = arg2;
    edi = COW_IMG(0x1034280cu);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf) goto L_102f57bd;
L_102f57ae: ;
    wr32(arg3, arg1);
    g->edx = 0u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(arg1) + 4u), arg1, 1, arg1);
    t1 = g->edx;
    eax = 0u;
    edx = t1;
L_102f57c2: ;
    g->edx = edx;
    return eax;
L_102f57bd: ;
    eax = 0x80004002u;
    edx = 0u;
    goto L_102f57c2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5781(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f5781(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
