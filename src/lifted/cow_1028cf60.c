/* f_0x1028cf60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028cf60(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 280u);

    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    wr32(sp0 - 0x10cu, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x110u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->esp = sp0 - 0x100u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034f7e0u), COW_IMG(0x103d3c84u), in_edi, in_esi);
    if ((rd8(arg3 * 4u + rd32(arg1 + 0x54u)) & 0x40u) != 0u)
    {
        ecx = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x10cu, sp0 - 0x100u);
        wr32(sp0 - 0x110u, COW_IMG(0x103ba2d4u));
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        g->esp = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103ba2d4u), sp0 - 0x100u, in_edi, in_esi);
    }
    if ((int8_t)rd8(arg3 * 4u + rd32(arg1 + 0x54u)) < 0)
    {
        ecx = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x10cu, sp0 - 0x100u);
        wr32(sp0 - 0x110u, COW_IMG(0x103ba2c8u));
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        g->esp = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103ba2c8u), sp0 - 0x100u, in_edi, in_esi);
    }
    if ((rd32(arg3 * 4u + rd32(arg1 + 0x54u)) >> 8u & 8u) != 0u)
    {
        ecx = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x10cu, sp0 - 0x100u);
        wr32(sp0 - 0x110u, COW_IMG(0x103ba2bcu));
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        g->esp = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103ba2bcu), sp0 - 0x100u, in_edi, in_esi);
    }
    if ((rd32(arg3 * 4u + rd32(arg1 + 0x54u)) >> 8u & 0x20u) == 0u)
    {
        ecx = rd32(arg1 + 0x54u);
    }
    else
    {
        ecx = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x10cu, sp0 - 0x100u);
        wr32(sp0 - 0x110u, COW_IMG(0x103ba2b0u));
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        g->ecx = ecx;
        g->esp = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103ba2b0u), sp0 - 0x100u, in_edi, in_esi);
        t1 = g->ecx;
        ecx = t1;
    }
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u > 2u)
    {
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        wr32(sp0 - 0x108u, COW_IMG(0x103ba2a8u));
        wr32(sp0 - 0x10cu, arg2);
        g->esp = sp0 - 0xf8u;
        cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba2a8u), sp0 - 0x100u, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028cf60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028cf60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
