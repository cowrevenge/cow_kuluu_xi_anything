/* f_0x1019e040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1019e040(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)arg1 < 48) goto L_1019e055;
    if ((int8_t)arg1 > 57) goto L_1019e055;
    return (uint32_t)(int8_t)arg1 - 0x2bu;
L_1019e055: ;
    if ((int8_t)arg1 < 97) goto L_1019e066;
    if ((int8_t)arg1 > 122) goto L_1019e066;
    return (uint32_t)(int8_t)arg1 - 0x38u;
L_1019e066: ;
    if ((int8_t)arg1 < 65) goto L_1019e077;
    if ((int8_t)arg1 > 90) goto L_1019e077;
    return (uint32_t)(int8_t)arg1 - 0x32u;
L_1019e077: ;
    if ((uint8_t)arg1 != 0x2fu) goto L_1019e083;
    return 0x5fu;
L_1019e083: ;
    if ((uint8_t)arg1 != 0x26u) goto L_1019e08f;
    return 0x5eu;
L_1019e08f: ;
    if ((uint8_t)arg1 != 0x2eu) goto L_1019e09b;
    return 0x61u;
L_1019e09b: ;
    if ((uint8_t)arg1 != 0x2cu) goto L_1019e0a7;
    return 0x62u;
L_1019e0a7: ;
    if ((uint8_t)arg1 != 0x2du) goto L_1019e0b3;
    return 0x64u;
L_1019e0b3: ;
    if ((uint8_t)arg1 != 0xa9u) goto L_1019e0bf;
    return 0x60u;
L_1019e0bf: ;
    if ((uint8_t)arg1 != 0x5du) goto L_1019e0cb;
    return 0x69u;
L_1019e0cb: ;
    if ((uint8_t)arg1 != 0x5bu) goto L_1019e0d7;
    return 0x6au;
L_1019e0d7: ;
    if ((uint8_t)arg1 != 0x5eu) goto L_1019e0e3;
    return 0x6bu;
L_1019e0e3: ;
    if ((uint8_t)arg1 != 0x7du) goto L_1019e0ef;
    return 0x6cu;
L_1019e0ef: ;
    if ((uint8_t)arg1 != 0x7eu) goto L_1019e0fb;
    return 0x6du;
L_1019e0fb: ;
    if ((uint8_t)arg1 != 0x7bu) goto L_1019e107;
    return 0x6eu;
L_1019e107: ;
    if ((uint8_t)arg1 != 0x7cu) goto L_1019e113;
    return 0x6fu;
L_1019e113: ;
    if ((uint8_t)arg1 != 0x5cu) goto L_1019e11f;
    return 0x70u;
L_1019e11f: ;
    if ((uint8_t)arg1 != 0x23u) goto L_1019e12b;
    return 0x71u;
L_1019e12b: ;
    if ((uint8_t)arg1 != 0x40u) goto L_1019e137;
    return 0x72u;
L_1019e137: ;
    t1 = ((uint8_t)arg1 != 0x2bu) - 2u;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019e040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019e040(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
