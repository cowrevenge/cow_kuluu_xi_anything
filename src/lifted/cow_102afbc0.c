/* f_0x102afbc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102afbc0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x103bf638u)) != 1u) goto L_102afbe5;
    g->eax = in_eax;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x103129b8u), 2, 0u, COW_IMG(0x103bf63cu));
    wr32(arg1, t1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_102afc16;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_102afbe5: ;
    if (rd32(COW_IMG(0x109aebccu)) != rd32(COW_IMG(0x109aebd0u)))
    {
        eax = rd32(COW_IMG(0x109aebccu));
        goto L_102afc01;
    }
    eax = rd32(COW_IMG(0x109aebccu));
    wr32(arg1, 0u);
    return eax & 0xffffff00u;
L_102afc01: ;
    wr32(COW_IMG(0x109aebccu), eax + 1u);
    t2 = COW_IMG(0x109aaac8u) + eax * 0x80u + 0x80u;
    wr32(arg1, t2);
    eax = t2;
L_102afc16: ;
    return (uint8_t)((rd8(eax) == 0x3bu) - 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102afbc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102afbc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
