/* f_0x100ebdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100ebdb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_100ebdbd;
    }
    return in_eax & 0xffffff00u;
L_100ebdbd: ;
    if ((int32_t)arg4 >= 0) goto L_100ebdc8;
    return arg4 & 0xffffff00u;
L_100ebdc8: ;
    if ((int32_t)arg4 < 10) goto L_100ebdd0;
    return arg4 & 0xffffff00u;
L_100ebdd0: ;
    if (rd8(arg4 * 0x58u + ecx + 0x1951cu) == 2u) goto L_100ebde6;
    g->edx = arg4 * 5u;
    return arg4 * 0x58u & 0xffffff00u;
L_100ebde6: ;
    if (arg1 != 0u)
    {
        wr16(arg1, rd16(arg4 * 0x58u + ecx + 0x19520u));
        ecx = rd32(COW_IMG(0x104dfd98u));
    }
    if (arg2 != 0u)
    {
        wr8(arg2, rd8(arg4 * 0x58u + ecx + 0x19524u));
        ecx = rd32(COW_IMG(0x104dfd98u));
    }
    if (arg3 == 0u)
    {
        eax = arg4 * 0x58u;
    }
    else
    {
        t1 = rd32(arg4 * 0x58u + ecx + 0x1954cu);
        wr32(arg3, t1);
        eax = t1;
    }
    g->edx = arg3;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebdb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ebdb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
