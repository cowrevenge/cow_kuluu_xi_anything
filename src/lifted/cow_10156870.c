/* f_0x10156870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_10156870(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
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
    edi = arg6;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY((uint8_t)(t1 + 1u));
    af = (t1 ^ t1 + 1u) >> 4u & 1u;
    zf = t1 + 1u == 0u;
    sf = (int32_t)(t1 + 1u) < 0;
    of = t1 + 1u == 0x80000000u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    edi = arg10;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY((uint8_t)(t2 + 1u));
    af = (t2 ^ t2 + 1u) >> 4u & 1u;
    zf = t2 + 1u == 0u;
    sf = (int32_t)(t2 + 1u) < 0;
    of = t2 + 1u == 0x80000000u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (arg2 > t1 + t2 + ~ecx + 0x16u)
    {
        eax = t1 + t2 + ~ecx + 0x16u;
        ebx = t2 + 1u;
        ebp = t1 + 1u;
        goto L_101568b5;
    }
    g->edx = arg5;
    return 0u;
L_101568b5: ;
    wr8(arg1 + 1u, (uint8_t)arg4);
    wr8(arg1 + 0xdu, (uint8_t)arg9);
    wr8(arg1, (uint8_t)arg3);
    wr8(arg1 + 0xcu, (uint8_t)arg8);
    ecx = arg5;
    edx = arg5;
L_101568de: ;
    t3 = rd8(ecx);
    wr8(arg1 + ecx - arg5 + 0x14u, (uint8_t)t3);
    if ((uint8_t)t3 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t3;
        goto L_101568de;
    }
    edx = (edx & 0xffffff00u) | t3;
    wr32(arg1 + 4u, arg1 + 0x14u);
    t4 = arg1 + ebp + 0x14u;
    eax = t4;
    ecx = arg6;
    edi = t4 - arg6;
L_101568f5: ;
    t5 = rd8(ecx);
    wr8(ecx + edi, (uint8_t)t5);
    if ((uint8_t)t5 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t5;
        goto L_101568f5;
    }
    edx = (edx & 0xffffff00u) | t5;
    wr32(arg1 + 8u, eax);
    t6 = eax + ebp + ebx;
    eax = t6;
    ecx = arg10;
    edi = t6 - arg10;
L_1015690e: ;
    t7 = rd8(ecx);
    wr8(ecx + edi, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t7;
        goto L_1015690e;
    }
    edx = (edx & 0xffffff00u) | t7;
    wr32(arg1 + 0x10u, eax);
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10156870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
