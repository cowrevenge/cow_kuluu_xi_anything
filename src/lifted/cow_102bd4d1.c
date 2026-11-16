/* f_0x102bd4d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bd4d1(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd8(arg1 + 0x6cu) & 0x40u) != 0u)
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c7e90u));
        t4 = g->edx;
        eax = t3;
        edx = t4;
        loc_8 = COW_IMG(0x103c7e90u);
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x102c6d9fu), self, 1, arg1);
        t2 = g->edx;
        eax = t1;
        edx = t2;
        loc_8 = arg1;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102bf550u), g->eax, g->ecx, edx, 1, 2, arg1, arg2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bd4d1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bd4d1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
