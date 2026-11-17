/* f_0x100a1580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a1580(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 292u);

    wr32(sp0 - 0x108u, in_edi);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, 0x100u);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    wr8(sp0 - 0x104u, 0xbfu);
    edi = arg3 + 0xcu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr8(sp0 - 0x103u, 0u);
    t1 = ~ecx - 1u;
    wr32(sp0 - 0x11cu, t1);
    wr32(sp0 - 0x120u, arg3 + 0xcu);
    t2 = rd32(COW_IMG(0x10662d40u));
    wr8(sp0 - 0x102u, 0u);
    g->esp = sp0 - 0x108u;
    cow_thiscall(g, COW_IMG(0x101b7280u), t2, 6, arg3 + 0xcu, t1, sp0 - 0x100u, 0x100u, 0u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x110u, 1u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, sp0 - 0x104u);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = sp0 - 0x104u;
    t3 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x100u, sp0 - 0x104u, 0u, 1u, 0u);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a1580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
