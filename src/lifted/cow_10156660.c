/* f_0x10156660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10156660(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self + 4u, arg1);
    wr32(self + 8u, arg2);
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(self + 0x10u, arg3);
    t1 = ~ecx - 1u;
    wr32(self + 0xcu, t1);
    edi = arg3;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    wr32(self + 0x14u, t2);
    if (arg1 > 3u) goto L_101566c6;
    ecx = t2;
    t3 = rd32(COW_IMG(0x101566ccu) + arg1 * 4u);
    switch (t3 - RD)
    {
    case 0x101566a0u: goto L_101566a0;
    case 0x101566adu: goto L_101566ad;
    case 0x101566bau: goto L_101566ba;
    default: rt_fatal(g, COW_IMG(0x10156699u), "switch");
    }
    return;
L_101566a0: ;
    wr32(self + 0x18u, 0u);
    return;
L_101566ad: ;
    wr32(self + 0x18u, 1u);
    return;
L_101566ba: ;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x102589b0u), eax, g->ecx, g->edx, 1, 1, arg2);
    wr32(self + 0x18u, t4);
L_101566c6: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10156660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
