/* f_0x101d1180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101d1180(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 8u) == 0u)
    {
        eax = rd32(arg1 + 8u);
        goto L_101d11bc;
    }
    eax = rd32(arg1 + 8u);
    if (rd32(eax + 0xcu) == 0u)
    {
        eax = rd32(eax + 0xcu);
        goto L_101d11bc;
    }
    eax = rd32(eax + 0xcu);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101d11bc;
    edx = rd32(COW_IMG(0x104dfd98u));
    t1 = rd32(arg1 + 4u);
    g->eax = arg2;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4950u), rd32(COW_IMG(0x10662dccu)), 4, arg2, t1, eax, 0u);
    if ((int32_t)t2 >= 0)
    {
        eax = (t2 & 0xffffff00u) | 1u;
        goto L_101d11be;
    }
    eax = (t2 & 0xffffff00u) | 1u;
L_101d11bc: ;
    eax = eax & 0xffffff00u;
L_101d11be: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d1180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d1180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
