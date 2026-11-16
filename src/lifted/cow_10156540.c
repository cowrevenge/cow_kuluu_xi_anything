/* f_0x10156540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10156540(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
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
    unsigned zf;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    edi = arg4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    edi = arg5;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY((uint8_t)(t1 + 1u));
    af = (t1 ^ t1 + 1u) >> 4u & 1u;
    zf = t1 + 1u == 0u;
    sf = (int32_t)(t1 + 1u) < 0;
    of = t1 + 1u == 0x80000000u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (arg2 > t1 + ~ecx + 0xdu)
    {
        ebx = t1 + 1u;
        goto L_10156574;
    }
    return 0u;
L_10156574: ;
    wr32(arg1, arg3);
    eax = arg4;
    ecx = arg3;
L_10156588: ;
    t2 = rd8(eax);
    wr8(arg1 + eax - arg4 + 0xcu, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_10156588;
    }
    ecx = (ecx & 0xffffff00u) | t2;
    wr32(arg1 + 4u, arg1 + 0xcu);
    t3 = arg1 + ebx + 0xcu;
    eax = arg5;
    edx = t3;
    esi = t3 - arg5;
L_1015659f: ;
    t4 = rd8(eax);
    wr8(eax + esi, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_1015659f;
    }
    wr32(arg1 + 8u, edx);
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10156540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
