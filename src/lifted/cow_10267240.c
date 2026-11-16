/* f_0x10267240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10267240(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(sp0 + 0xcu) != 0u)
    {
        eax = rd32(sp0 + 0xcu);
        goto L_10267250;
    }
    return 0x80004003u;
L_10267030: ;
    t4 = rd32(sp0 + 8u);
    esi = t4;
    edi = COW_IMG(0x1033eeb8u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t4;
        goto L_1026705f;
    }
    t5 = rd32(sp0 + 0xcu);
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, arg1 - 4u, t5);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1026705f: ;
    wr32(sp0 + 8u, eax);
    g->esp = sp0;
    g->edx = 0u;
    return cow_tailcall(g, COW_IMG(0x10265a50u), eax, ecx, 0u);
L_10267250: ;
    t1 = rd32(sp0 + 8u);
    wr32(eax, 0u);
    esi = t1;
    edi = COW_IMG(0x1033e878u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = t1;
        goto L_10267283;
    }
    edx = t1;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, edx, 0, 2, arg1 - 8u, eax);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10267283: ;
    wr32(sp0 + 0xcu, eax);
    wr32(sp0 + 8u, edx);
    goto L_10267030;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10267240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10267240(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
