/* f_0x102d1b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102d1b10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t1);
    esi = t2 + 0x110u;
    edi = t2 + 0x328u;
    ecx = 0x86u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t1 <= 0)
    {
        ebx = t2;
        ebp = t1;
        goto L_102d1bac;
    }
    ebx = t2;
    ebp = t1;
    esi = ebx + 0x550u;
L_102d1b43: ;
    if (rd32(esi - 4u) == 0u) goto L_102d1b9c;
    t3 = rd32(esi) + 2u;
    if (rd32(ebx + (uint32_t)((int32_t)(uint32_t)((int32_t)t3 >> 6u) >> 2u) * 4u + 0x328u) == 0u) goto L_102d1c45;
    eax = (uint32_t)((int32_t)t3 >> 6u);
    edx = t3;
    if ((int32_t)rd32(eax * 0x20u + ebx + 0x340u) >= 7) goto L_102d1c45;
    ecx = rd32(eax * 0x20u + ebx + 0x340u);
    eax = eax * 0x20u + ebx + 0x340u;
    if (rd32(sp0 + 8u) == 0x40u) goto L_102d1c45;
    edi = rd32(sp0 + 8u);
    if ((int32_t)edx > 1021) goto L_102d1c45;
    wr32(eax, ecx + 1u);
    wr32(sp0 + 8u, edi + 1u);
L_102d1b9c: ;
    t4 = rd32(sp0 + 4u) + 1u;
    t5 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t4);
    if ((int32_t)(t5 + 1u) < (int32_t)ebp)
    {
        esi = esi + 0x18u;
        goto L_102d1b43;
    }
L_102d1bac: ;
    wr32(sp0 + 8u, ebp);
    if ((int32_t)ebp > 0)
    {
        wr32(sp0 + 4u, ebp);
        eax = ebp * 0x18u + ebx + 0x540u;
        edx = ebx + 0x548u;
L_102d1bcc: ;
        if (rd32(edx + 4u) != 0u)
        {
            t6 = rd32(edx + 8u) + 2u;
            t7 = rd32(sp0 + 8u);
            wr32(eax + 0x10u, t6);
            t8 = rd32(edx + 0xcu);
            wr32(eax + 0x14u, t8);
            wr32(eax, rd32(edx));
            t9 = rd32(edx + 4u);
            wr32(eax + 4u, t9);
            wr32(edx, 0u);
            wr32(eax + 8u, 0u);
            wr32(edx + 4u, 0u);
            t10 = rd32(eax + 0x10u);
            wr32(eax + 0xcu, 0u);
            wr32(sp0 + 8u, t7 + 1u);
            wr32(ebx + (uint32_t)((int32_t)t10 >> 6u) * 0x20u + rd32(ebx + (uint32_t)((int32_t)t10 >> 6u) * 0x20u + 0x128u) * 4u + 0x12cu, eax);
            t11 = rd32(ebx + (uint32_t)((int32_t)t10 >> 6u) * 0x20u + 0x128u) + 1u;
            wr32(ebx + (uint32_t)((int32_t)t10 >> 6u) * 0x20u + 0x128u, t11);
            eax = eax + 0x18u;
        }
        t12 = rd32(sp0 + 4u) - 1u;
        t13 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t12);
        if (t13 != 1u)
        {
            edx = edx + 0x18u;
            goto L_102d1bcc;
        }
    }
    return rd32(sp0 + 8u);
L_102d1c45: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d1b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d1b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
