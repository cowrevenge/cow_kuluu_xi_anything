/* f_0x101be030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_101be030(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)arg1 < 0x61u) goto L_101be041;
    if ((uint16_t)arg1 <= 0x7au) goto L_101be04d;
L_101be041: ;
    if ((uint16_t)arg1 < 0xff41u) goto L_101be052;
    if ((uint16_t)arg1 > 0xff5au) goto L_101be052;
L_101be04d: ;
    return (((in_eax & 0xffff0000u) | (uint16_t)arg1) & 0xffffff00u) | 1u;
L_101be052: ;
    if ((uint16_t)arg1 < 0xe0u) goto L_101be05e;
    if ((uint16_t)arg1 <= 0xf6u) goto L_101be076;
L_101be05e: ;
    if ((uint16_t)arg1 < 0xf8u) goto L_101be06a;
    if ((uint16_t)arg1 <= 0xffu) goto L_101be076;
L_101be06a: ;
    if ((uint16_t)arg1 < 0x430u) goto L_101be07b;
    if ((uint16_t)arg1 > 0x44fu) goto L_101be07b;
L_101be076: ;
    return (((in_eax & 0xffff0000u) | (uint16_t)arg1) & 0xffffff00u) | 1u;
L_101be07b: ;
    if ((uint16_t)arg1 < 0x21u) goto L_101be08c;
    if ((uint16_t)arg1 > 0x7eu) goto L_101be08c;
    return (((in_eax & 0xffff0000u) | (uint16_t)arg1) & 0xffffff00u) | 1u;
L_101be08c: ;
    if ((uint16_t)arg1 < 0xff66u) goto L_101be09d;
    if ((uint16_t)arg1 > 0xff9du) goto L_101be09d;
    return (((in_eax & 0xffff0000u) | (uint16_t)arg1) & 0xffffff00u) | 1u;
L_101be09d: ;
    return ((in_eax & 0xffff0000u) | (uint16_t)arg1) & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101be030(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
