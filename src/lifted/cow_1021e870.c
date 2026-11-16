/* f_0x1021e870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1021e870(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd8(arg1 + 0xbu);
    t2 = rd8(arg1 + 2u);
    t3 = (t2 >> 6u & 1u) - (t1 >> 6u & 1u) - (t1 >> 5u & 1u) - (t1 >> 4u & 1u) - (t1 >> 3u & 1u) - (t1 >> 2u & 1u) - (t1 >> 1u & 1u) + (t2 >> 5u & 1u) + (t2 >> 4u & 1u);
    t4 = rd8(arg1 + 0xcu);
    t5 = t3 + (t2 >> 1u & 1u) + (t2 >> 2u & 1u) + (t2 >> 3u & 1u) - (t1 >> 7u) + (t4 >> 6u & 1u) + (t4 >> 5u & 1u) + (t4 >> 4u & 1u) + (t4 >> 3u & 1u) + (t4 >> 2u & 1u);
    t6 = cow_divs(g, t5 + (t2 >> 7u) + (t4 >> 1u & 1u) - (t1 & 1u) + (t4 >> 7u) + (t2 & 1u) + (t4 & 1u), 5u);
    t7 = cow_mods(g, t5 + (t2 >> 7u) + (t4 >> 1u & 1u) - (t1 & 1u) + (t4 >> 7u) + (t2 & 1u) + (t4 & 1u), 5u);
    if ((int32_t)arg2 <= 0)
    {
        eax = t7;
        goto L_1021e9d7;
    }
    eax = t7;
    ecx = 0u;
    edx = (uint32_t)((int32_t)t7 >> 0x1fu);
    esi = (t7 ^ (uint32_t)((int32_t)t7 >> 0x1fu)) - (uint32_t)((int32_t)t7 >> 0x1fu);
L_1021e975: ;
    if (ecx == 2u) goto L_1021e9d2;
    if (ecx == 0xbu) goto L_1021e9d2;
    if (ecx == 0xcu) goto L_1021e9d2;
    if (esi > 4u) goto L_1021e9d2;
    t8 = rd32(COW_IMG(0x1021e9dcu) + esi * 4u);
    switch (t8 - RD)
    {
    case 0x1021e990u: goto L_1021e990;
    case 0x1021e99cu: goto L_1021e99c;
    case 0x1021e9a8u: goto L_1021e9a8;
    case 0x1021e9b5u: goto L_1021e9b5;
    case 0x1021e9c2u: goto L_1021e9c2;
    default: rt_fatal(g, COW_IMG(0x1021e989u), "switch");
    }
    return 0;
L_1021e990: ;
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx) >> 7u;
    edx = (edx & 0xffffff00u) | (uint8_t)(rd8(arg1 + ecx) * 2u);
L_1021e9cd: ;
    wr8(arg1 + ecx, (uint8_t)(eax | edx));
    eax = (eax & 0xffffff00u) | (uint8_t)(eax | edx);
L_1021e9d2: ;
    if ((int32_t)(ecx + 1u) < (int32_t)arg2)
    {
        ecx = ecx + 1u;
        goto L_1021e975;
    }
L_1021e9d7: ;
    return eax;
L_1021e99c: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(rd8(arg1 + ecx) << 7u);
    edx = (edx & 0xffffff00u) | rd8(arg1 + ecx) >> 1u;
    goto L_1021e9cd;
L_1021e9a8: ;
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx) >> 6u;
    edx = (edx & 0xffffff00u) | (uint8_t)(rd8(arg1 + ecx) << 2u);
    goto L_1021e9cd;
L_1021e9b5: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(rd8(arg1 + ecx) << 6u);
    edx = (edx & 0xffffff00u) | rd8(arg1 + ecx) >> 2u;
    goto L_1021e9cd;
L_1021e9c2: ;
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx) >> 5u;
    edx = (edx & 0xffffff00u) | (uint8_t)(rd8(arg1 + ecx) << 3u);
    goto L_1021e9cd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021e870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
