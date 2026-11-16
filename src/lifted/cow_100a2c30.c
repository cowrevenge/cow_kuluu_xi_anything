/* f_0x100a2c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a2c30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(arg1 + 8u) <= 0)
    {
        eax = arg1;
        goto L_100a2c67;
    }
    if ((int32_t)rd32(arg1 + 0xcu) < 0)
    {
        eax = arg1;
        goto L_100a2c67;
    }
    edx = rd32(arg1 + 0xcu);
    if (rd8(arg1 + 4u) != rd8(self + 0x58u))
    {
        eax = arg1;
        goto L_100a2c67;
    }
    edx = (edx & 0xffffff00u) | rd8(arg1 + 4u);
    ebx = (in_ebx & 0xffffff00u) | rd8(self + 0x58u);
    if (rd8(arg1 + 6u) != rd8(self + 0x5au))
    {
        eax = arg1;
        goto L_100a2c67;
    }
    edx = (edx & 0xffffff00u) | rd8(arg1 + 6u);
    if (rd8(arg1 + 7u) != rd8(self + 0x5bu))
    {
        eax = (arg1 & 0xffffff00u) | rd8(arg1 + 7u);
        goto L_100a2c67;
    }
    eax = (arg1 & 0xffffff00u) | rd8(arg1 + 7u);
    return (eax & 0xffffff00u) | 1u;
L_100a2c67: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2c30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
