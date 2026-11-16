/* f_0x10264cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10264cd0(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    esi = t1;
    edi = COW_IMG(0x1033e8c8u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = t2;
        goto L_10264d16;
    }
    eax = t1;
    edx = t2;
    esi = eax;
    edi = COW_IMG(0x1033e8b8u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf) goto L_10264d07;
    if (rd32(edx + 0x5cu) != 0u)
    {
        ecx = rd32(edx + 0x5cu);
        goto L_10264d16;
    }
    ecx = rd32(edx + 0x5cu);
L_10264d07: ;
    wr32(sp0 + 8u, eax);
    wr32(sp0 + 4u, edx);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10265a50u), eax, ecx, edx);
L_10264d16: ;
    if (edx == 0u) goto L_10264d2d;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, arg3, 0, 2, edx + 0xcu, arg3);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_10264d2d: ;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, arg3, 0, 2, 0u, arg3);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264cd0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
