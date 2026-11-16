/* f_0x1012cc20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1012cc20(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 - 1u > 7u) goto L_1012cc98;
    t1 = rd32(COW_IMG(0x1012ccacu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1012cc32u: goto L_1012cc32;
    case 0x1012cc43u: goto L_1012cc43;
    case 0x1012cc54u: goto L_1012cc54;
    case 0x1012cc65u: goto L_1012cc65;
    case 0x1012cc76u: goto L_1012cc76;
    case 0x1012cc87u: goto L_1012cc87;
    case 0x1012cc98u: goto L_1012cc98;
    default: rt_fatal(g, COW_IMG(0x1012cc2bu), "switch");
    }
    return;
L_1012cc32: ;
    wr32(rd32(COW_IMG(0x10578474u)) + 0x1cu, 4u);
    return;
L_1012cc43: ;
    wr32(rd32(COW_IMG(0x10578474u)) + 0x1cu, 5u);
    return;
L_1012cc54: ;
    wr32(rd32(COW_IMG(0x10578474u)) + 0x1cu, 2u);
    return;
L_1012cc65: ;
    wr32(rd32(COW_IMG(0x10578474u)) + 0x1cu, 6u);
    return;
L_1012cc76: ;
    wr32(rd32(COW_IMG(0x10578474u)) + 0x1cu, 7u);
    return;
L_1012cc87: ;
    wr32(rd32(COW_IMG(0x10578474u)) + 0x1cu, 8u);
    return;
L_1012cc98: ;
    wr32(rd32(COW_IMG(0x10578474u)) + 0x1cu, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012cc20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012cc20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
