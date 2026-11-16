/* f_0x100eab30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100eab30(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg1 != 7u) goto L_100eab4f;
    g->eax = in_eax;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x104ca3f8u)), arg1, 5, 7u, 0u, 0u, 0u, 0u);
    return (t1 & 0xffffff00u) | 1u;
L_100eab4f: ;
    if (arg5 == 0u)
    {
        eax = arg5;
    }
    else
    {
        if (rd8(arg5) == 0u)
        {
            eax = arg5;
        }
        else
        {
            g->eax = arg2;
            g->esp = sp0;
            t2 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x104ca3f8u)), arg1, 5, arg1, arg2, arg3, arg4, arg5);
            eax = t2;
        }
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eab30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eab30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
