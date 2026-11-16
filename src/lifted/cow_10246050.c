/* f_0x10246050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10246050(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_28;
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

    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10245f50u), self, 0);
    esi = arg1;
    edi = COW_IMG(0x1035d5f8u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        ebx = t1;
        loc_28 = t1;
        goto L_102460a1;
    }
    ebx = t1;
    loc_28 = t1;
    t2 = rd32(arg1 + 8u);
    g->edx = arg2 & 0x7fu;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x1024c080u), 8, 2u, t2, loc_28, arg2 & 0x7fu, arg3 & 0x7fu, 0u, 0u, 0u);
    t3 = g->edx;
    g->edx = t3;
    return ebx;
L_102460a1: ;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x1024c080u), 8, 1u, arg1, loc_28, arg2 & 0x7fu, arg3 & 0x7fu, 0u, 0u, 0u);
    t4 = g->edx;
    g->edx = t4;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10246050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10246050(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
