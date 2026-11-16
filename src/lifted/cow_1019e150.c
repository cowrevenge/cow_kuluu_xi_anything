/* f_0x1019e150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1019e150(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)arg1 < 48) goto L_1019e162;
    if ((int8_t)arg1 > 57) goto L_1019e162;
    return (uint32_t)(int8_t)arg1;
L_1019e162: ;
    if ((int8_t)arg1 < 97) goto L_1019e170;
    if ((int8_t)arg1 > 122) goto L_1019e170;
    return (uint32_t)(int8_t)arg1;
L_1019e170: ;
    if ((int8_t)arg1 < 65) goto L_1019e17e;
    if ((int8_t)arg1 > 90) goto L_1019e17e;
    return (uint32_t)(int8_t)arg1;
L_1019e17e: ;
    if ((uint8_t)arg1 != 0x2fu) goto L_1019e18a;
    return 0x2fu;
L_1019e18a: ;
    if ((uint8_t)arg1 != 0x26u) goto L_1019e196;
    return 0x26u;
L_1019e196: ;
    if ((uint8_t)arg1 != 0x2eu) goto L_1019e1a2;
    return 0x2eu;
L_1019e1a2: ;
    if ((uint8_t)arg1 != 0x2cu) goto L_1019e1ae;
    return 0x2cu;
L_1019e1ae: ;
    if ((uint8_t)arg1 != 0x2du) goto L_1019e1ba;
    return 0x2du;
L_1019e1ba: ;
    if ((uint8_t)arg1 != 0x27u) goto L_1019e1c6;
    return 0x27u;
L_1019e1c6: ;
    if ((uint8_t)arg1 != 0xa9u) goto L_1019e1d2;
    return 0xc887u;
L_1019e1d2: ;
    if ((uint8_t)arg1 != 0x5du) goto L_1019e1de;
    return 0xc785u;
L_1019e1de: ;
    if ((uint8_t)arg1 != 0x5bu) goto L_1019e1ea;
    return 0xc885u;
L_1019e1ea: ;
    if ((uint8_t)arg1 != 0x5eu) goto L_1019e1f6;
    return 0xcd85u;
L_1019e1f6: ;
    if ((uint8_t)arg1 != 0x7du) goto L_1019e202;
    return 0xd385u;
L_1019e202: ;
    if ((uint8_t)arg1 != 0x7eu) goto L_1019e20e;
    return 0xd585u;
L_1019e20e: ;
    if ((uint8_t)arg1 != 0x7bu) goto L_1019e21a;
    return 0x20u;
L_1019e21a: ;
    if ((uint8_t)arg1 != 0x7cu) goto L_1019e226;
    return 0xdb85u;
L_1019e226: ;
    if ((uint8_t)arg1 != 0x5cu) goto L_1019e232;
    return 0xca85u;
L_1019e232: ;
    if ((uint8_t)arg1 != 0x23u) goto L_1019e23e;
    return 0xce85u;
L_1019e23e: ;
    if ((uint8_t)arg1 != 0x40u) goto L_1019e24a;
    return 0x20u;
L_1019e24a: ;
    t1 = ((uint8_t)arg1 != 0x2bu) - 2u;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019e150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019e150(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
