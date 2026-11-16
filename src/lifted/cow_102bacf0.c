/* f_0x102bacf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102bacf0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;

    ecx = 0u;
    edx = 0u;
L_102bacf6: ;
    if (edx == 0u) goto L_102bad20;
    t1 = (ecx + 0x31u) * ecx * 4u + rd32(COW_IMG(0x109f8214u) + edx * 0xcu);
    wr32(COW_IMG(0x109f8220u) + edx * 0xcu, t1);
    if (edx > 5u) goto L_102bad4d;
L_102bad19: ;
    t2 = rd32(COW_IMG(0x102bad7cu) + edx * 4u);
    switch (t2 - RD)
    {
    case 0x102bad2cu: goto L_102bad2c;
    case 0x102bad33u: goto L_102bad33;
    case 0x102bad3au: goto L_102bad3a;
    case 0x102bad41u: goto L_102bad41;
    case 0x102bad48u: goto L_102bad48;
    default: rt_fatal(g, COW_IMG(0x102bad19u), "switch");
    }
    return;
L_102bad20: ;
    wr32(COW_IMG(0x109f8220u), COW_IMG(0x103c2530u));
    goto L_102bad19;
L_102bad2c: ;
    ecx = 0xeu;
L_102bad4d: ;
    t3 = ecx * 4u + rd32(COW_IMG(0x109f8220u) + edx * 0xcu);
    t4 = rd32(COW_IMG(0x109f8220u) + edx * 0xcu);
    wr32(COW_IMG(0x109f8224u) + edx * 0xcu, t3);
    t5 = ecx * 0xc4u + t4;
    wr32(COW_IMG(0x109f8228u) + edx * 0xcu, t5);
    if ((int32_t)(edx + 1u) < 6)
    {
        edx = edx + 1u;
        goto L_102bacf6;
    }
    return;
L_102bad33: ;
    ecx = 0x10u;
    goto L_102bad4d;
L_102bad3a: ;
    ecx = 0x12u;
    goto L_102bad4d;
L_102bad41: ;
    ecx = 0xfu;
    goto L_102bad4d;
L_102bad48: ;
    ecx = 9u;
    goto L_102bad4d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bacf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bacf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
