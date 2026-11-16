/* f_0x101ba740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101ba740(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;

    if (rd8(rd32(sp0 + 4u) + 1u) == 4u)
    {
        esi = rd32(sp0 + 4u);
        goto L_101ba75e;
    }
    esi = rd32(sp0 + 4u);
    wr32(rd32(sp0 + 0x10u), 1u);
    return rd32(esi + 0x44u);
L_101ba75e: ;
    edi = esi + 0x24u;
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
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x101c88a0u), eax, g->ecx, esi + 0x24u, 1, 4, esi + 6u, esi + 0x24u, t1, 0u);
    t3 = rd32(sp0 + 0x10u);
    wr32(sp0 + 0x10u, 0u);
    t4 = (t2 != 0u) + 1u;
    wr32(t3, t4);
    t5 = rd32(esi + 0x44u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t5 <= 0)
    {
        loc_4 = t5;
    }
    else
    {
        eax = t4;
        edx = t3;
        loc_4 = t5;
        ecx = 0u;
        ebx = 0u;
        ebp = rd32(sp0 + 0xcu);
        edi = rd32(sp0 + 8u);
L_101ba7ab: ;
        t6 = rd8(ecx + edi);
        wr8(sp0 + 0xcu, rd8(ecx + edi + 4u));
        if ((uint8_t)t6 < 7u)
        {
            esi = ecx + 5u;
            ecx = ecx + (uint8_t)rd32(sp0 + 0xcu) + 5u;
            goto L_101ba7d8;
        }
        edx = (edx & 0xffffff00u) | t6;
        esi = ecx + 5u;
        ecx = ecx + (uint8_t)rd32(sp0 + 0xcu) + 5u;
        if ((uint8_t)edx >= 0x13u) goto L_101ba7d8;
        eax = rd32(sp0 + 0x10u) + 1u;
L_101ba80c: ;
        wr32(sp0 + 0x10u, eax);
        t8 = rd32(sp0 + 4u) + 1u;
        t9 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t8);
        if ((int32_t)(t9 + 1u) < (int32_t)loc_4)
        {
            eax = t8;
            edx = loc_4;
            goto L_101ba7ab;
        }
    }
L_101ba821: ;
    return rd32(sp0 + 0x10u);
L_101ba7d8: ;
    t7 = rd8(ecx + edi);
    wr8(sp0 + 8u, (uint8_t)t7);
    if ((int32_t)esi >= (int32_t)ebp) goto L_101ba821;
    edx = ecx + 1u;
    ecx = ecx + (uint8_t)rd32(sp0 + 8u) + 1u;
    ebx = (ebx & 0xffffff00u) | t7;
    if ((int32_t)edx >= (int32_t)ebp) goto L_101ba821;
    if ((int32_t)esi < 0) goto L_101ba821;
    if ((int32_t)edx < 0) goto L_101ba821;
    if ((uint8_t)ebx > 1u)
    {
        eax = rd32(sp0 + 0x10u);
        eax = eax + 2u;
    }
    else
    {
        eax = rd32(sp0 + 0x10u);
        eax = eax + 1u;
    }
    goto L_101ba80c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ba740(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
