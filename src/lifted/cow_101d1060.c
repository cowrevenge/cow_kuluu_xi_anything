/* f_0x101d1060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_101d1060(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = arg2 * arg3 * 4u;
    g->eax = t1;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, t1, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_cdecl(g, COW_IMG(0x101cb770u), 3, esi, arg2, arg3);
        t6 = g->edx;
        g->ebx = in_ebx & 0xffffff00u;
        g->edx = t6;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x101d0600u), arg1, 4, arg2, arg3, esi, 0x5au);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        eax = t10;
        ebx = (in_ebx & 0xffffff00u) | t7 == 0u;
    }
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d1060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d1060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
