/* f_0x100a2130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a2130(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(COW_IMG(0x10487ef4u)) != 0u) goto L_100a213c;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487ef4u));
    return eax & 0xffffff00u;
L_100a213c: ;
    if (rd32(COW_IMG(0x10487ef0u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10487ef0u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10487ef0u));
        t1 = (in_edx & 0xffffff00u) | rd8(arg3 + 4u);
        g->eax = eax;
        g->edx = t1;
        g->esp = sp0;
        t2 = cow_thiscall_cdecl(g, eax, arg3, 1, t1);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    wr8(COW_IMG(0x10487ef4u), 0u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
