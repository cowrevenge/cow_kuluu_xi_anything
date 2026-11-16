/* f_0x1022ed70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1022ed70(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)rd32(self + 0x14u) < (int32_t)rd32(self))
    {
        eax = rd32(self + 0x14u);
        ecx = ~ecx - 1u;
        goto L_1022ed96;
    }
    return 0u;
L_1022ed96: ;
    if ((int32_t)(ecx + rd32(self + 0x18u) + 1u) <= (int32_t)rd32(self + 4u))
    {
        edi = rd32(self + 0x18u);
        goto L_1022edae;
    }
    return 0u;
L_1022edae: ;
    wr32(eax * 4u + rd32(self + 0xcu), edi);
    t1 = rd32(self + 0x14u) + 1u;
    t2 = rd32(self + 0x10u);
    t3 = rd32(self + 0x18u);
    wr32(self + 0x14u, t1);
    eax = t2 + t3;
    ebx = t1;
    esi = arg1;
L_1022edc3: ;
    t4 = rd8(esi);
    wr8(eax, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ebx = (ebx & 0xffffff00u) | t4;
        esi = esi + 1u;
        goto L_1022edc3;
    }
    t5 = ecx + rd32(self + 0x18u) + 1u;
    wr32(self + 0x18u, t5);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022ed70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022ed70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
