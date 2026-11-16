/* f_0x100055a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_100055a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    esi = COW_IMG(0x10455b10u);
    edi = sp0 + 4u;
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
        wr32(COW_IMG(0x10455b18u), arg3);
        wr32(COW_IMG(0x10455b10u), arg1);
        wr32(COW_IMG(0x10455b14u), arg2);
        wr32(COW_IMG(0x10455b1cu), arg4);
        if ((uint8_t)arg5 == 0u)
        {
            wr8(COW_IMG(0x10455c40u), 1u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100055a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100055a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
