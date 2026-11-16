/* f_0x10157d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10157d20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;

    t1 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_10157d31;
    }
    eax = t1;
L_10157d2e: ;
    return eax & 0xffffff00u;
L_10157d31: ;
    if (rd32(COW_IMG(0x10371eccu)) == 0u) goto L_10157d57;
    ecx = rd32(COW_IMG(0x10371eccu));
    edx = COW_IMG(0x10371eccu);
L_10157d40: ;
    if (rd32(rd32(ecx) + 8u) == 0u) goto L_10157d4d;
    ecx = rd32(rd32(ecx) + 8u);
    if (ecx == eax) goto L_10157d2e;
L_10157d4d: ;
    if (rd32(edx + 4u) != 0u)
    {
        ecx = rd32(edx + 4u);
        edx = edx + 4u;
        goto L_10157d40;
    }
L_10157d57: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10157d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
