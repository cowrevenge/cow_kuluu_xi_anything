/* f_0x1022d670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1022d670(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1022d780;
    }
    ecx = (self & 0xffffff00u) | rd8(arg1);
    t1 = rd8(arg1 + 1u);
    t2 = (t1 >> 6u & 1u) - (ecx >> 6u & 1u) - (ecx >> 5u & 1u) - (ecx >> 4u & 1u) - (ecx >> 3u & 1u) - (ecx >> 2u & 1u) - (ecx >> 1u & 1u) - ((uint8_t)ecx >> 7u) + (t1 >> 5u & 1u);
    t3 = cow_divs(g, t2 + (t1 >> 2u & 1u) + (t1 >> 3u & 1u) + (t1 >> 4u & 1u) + (t1 >> 1u & 1u) - (ecx & 1u) + (t1 >> 7u) + (t1 & 1u), 5u);
    t4 = cow_mods(g, t2 + (t1 >> 2u & 1u) + (t1 >> 3u & 1u) + (t1 >> 4u & 1u) + (t1 >> 1u & 1u) - (ecx & 1u) + (t1 >> 7u) + (t1 & 1u), 5u);
    if (rd8(arg1) == 0u)
    {
        eax = (t4 & 0xffffff00u) | rd8(arg1);
        edx = (uint32_t)((int32_t)t4 >> 0x1fu);
        goto L_1022d780;
    }
    eax = (t4 & 0xffffff00u) | rd8(arg1);
    edx = (uint32_t)((int32_t)t4 >> 0x1fu);
    esi = (t4 ^ (uint32_t)((int32_t)t4 >> 0x1fu)) - (uint32_t)((int32_t)t4 >> 0x1fu);
    ecx = arg1;
L_1022d730: ;
    if (esi > 4u) goto L_1022d778;
    t5 = rd32(COW_IMG(0x1022d784u) + esi * 4u);
    switch (t5 - RD)
    {
    case 0x1022d73cu: goto L_1022d73c;
    case 0x1022d747u: goto L_1022d747;
    case 0x1022d752u: goto L_1022d752;
    case 0x1022d75eu: goto L_1022d75e;
    case 0x1022d76au: goto L_1022d76a;
    default: rt_fatal(g, COW_IMG(0x1022d735u), "switch");
    }
    return 0;
L_1022d73c: ;
    eax = (eax & 0xffffff00u) | rd8(ecx) >> 1u;
    edx = (edx & 0xffffff00u) | (uint8_t)(rd8(ecx) << 7u);
L_1022d774: ;
    wr8(ecx, (uint8_t)(edx | eax));
    edx = (edx & 0xffffff00u) | (uint8_t)(edx | eax);
L_1022d778: ;
    if (rd8(ecx + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_1022d730;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
L_1022d780: ;
    g->edx = edx;
    return eax;
L_1022d747: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(rd8(ecx) * 2u);
    edx = (edx & 0xffffff00u) | rd8(ecx) >> 7u;
    goto L_1022d774;
L_1022d752: ;
    eax = (eax & 0xffffff00u) | rd8(ecx) >> 2u;
    edx = (edx & 0xffffff00u) | (uint8_t)(rd8(ecx) << 6u);
    goto L_1022d774;
L_1022d75e: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(rd8(ecx) << 2u);
    edx = (edx & 0xffffff00u) | rd8(ecx) >> 6u;
    goto L_1022d774;
L_1022d76a: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(rd8(ecx) << 5u);
    edx = (edx & 0xffffff00u) | rd8(ecx) >> 3u;
    goto L_1022d774;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022d670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022d670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
