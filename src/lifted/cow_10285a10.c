/* f_0x10285a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10285a10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, in_edx, 1, 4, arg1, 1u, 0x10u, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0x10u)
    {
        eax = t1;
        goto L_10285a61;
    }
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        edx = t5;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t6 = cow_cdecl(g, COW_IMG(0x10292150u), 3, arg1 + 4u, 4u, 1u);
        eax = t6;
    }
    if (rd8(arg1) != 0x44u) goto L_10285a61;
    if (rd8(arg1 + 1u) != 0x4du) goto L_10285a61;
    if (rd8(arg1 + 2u) != 0x42u) goto L_10285a61;
    if (rd8(arg1 + 3u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 3u);
        goto L_10285a61;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 3u);
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_10285a61: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10285a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
