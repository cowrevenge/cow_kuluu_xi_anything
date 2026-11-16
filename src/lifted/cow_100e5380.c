/* f_0x100e5380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e5380(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x52u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebp = t1;
        goto L_100e5399;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_100e5399: ;
    t4 = rd8(ebp + 8u);
    wr8(ebp + 4u, (uint8_t)arg1);
    t5 = rd8(arg2);
    wr8(ebp + 8u, (uint8_t)(((t5 ^ t4) & 3u) ^ t4));
    t6 = rd8(arg2);
    wr8(ebp + 8u, (uint8_t)(((t5 ^ t4 ^ t4 ^ t6) & 3u) ^ t6));
    t7 = rd8(arg2 + 1u);
    wr8(ebp + 9u, (uint8_t)t7);
    wr16(ebp + 0xau, rd16(arg2 + 2u));
    eax = arg2;
    ecx = ((ecx | t6) & 0xffffff00u) | t7;
    edx = 0u;
    esi = ebp + 0xcu;
L_100e53d8: ;
    t8 = rd8(esi);
    t9 = rd8(arg3 + edx * 4u);
    wr8(esi, (uint8_t)(((t9 ^ t8) & 3u) ^ t8));
    t10 = rd8(arg3 + edx * 4u);
    wr8(esi, (uint8_t)(((t9 ^ t8 ^ t8 ^ t10) & 3u) ^ t10));
    t11 = rd8(arg3 + edx * 4u + 1u);
    wr8(esi + 1u, (uint8_t)t11);
    t12 = rd16(arg3 + edx * 4u + 2u);
    wr16(esi + 2u, (uint16_t)t12);
    if ((int32_t)(edx + 1u) < 16)
    {
        eax = ((eax | t8 | t10) & 0xffffff00u) | t11;
        ecx = ((ecx | t8 | t10) & 0xffff0000u) | t12;
        edx = edx + 1u;
        esi = esi + 4u;
        goto L_100e53d8;
    }
    eax = ((eax | t8 | t10) & 0xffffff00u) | t11;
    ecx = ((ecx | t8 | t10) & 0xffff0000u) | t12;
    edx = edx + 1u;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, ebp, 0x4cu, 0u);
    return (t13 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
