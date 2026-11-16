/* f_0x10155bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_10155bd0(Guest* g)
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
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    edi = arg5;
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
    edi = arg8;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY((uint8_t)(t1 + 1u));
    af = (t1 ^ t1 + 1u) >> 4u & 1u;
    zf = t1 + 1u == 0u;
    sf = (int32_t)(t1 + 1u) < 0;
    of = t1 + 1u == 0x80000000u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (arg2 > t1 + ~ecx + 0x1du)
    {
        ebx = t1 + 1u;
        goto L_10155c06;
    }
    g->edx = arg5;
    return 0u;
L_10155c06: ;
    wr32(arg1 + 4u, arg3);
    wr32(arg1 + 8u, arg4);
    wr32(arg1 + 0x10u, arg6);
    wr32(arg1 + 0x14u, arg7);
    wr32(arg1, 0u);
    ecx = arg5;
    edx = arg5;
L_10155c36: ;
    t2 = rd8(ecx);
    wr8(arg1 + ecx - arg5 + 0x1cu, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t2;
        goto L_10155c36;
    }
    edx = (edx & 0xffffff00u) | t2;
    wr32(arg1 + 0xcu, arg1 + 0x1cu);
    t3 = arg1 + ebx + 0x1cu;
    ecx = arg8;
    esi = t3;
    edi = t3 - arg8;
L_10155c4b: ;
    t4 = rd8(ecx);
    wr8(ecx + edi, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t4;
        goto L_10155c4b;
    }
    edx = (edx & 0xffffff00u) | t4;
    wr32(arg1 + 0x18u, esi);
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10155bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10155bd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
