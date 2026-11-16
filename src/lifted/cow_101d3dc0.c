/* f_0x101d3dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d3dc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr16(self + 0x7e6u, 0u);
    eax = in_eax;
    edx = in_edx;
    ebp = 2u;
    esi = self + 0x4cu;
L_101d3dd5: ;
    ebx = 0x51u;
L_101d3dda: ;
    if (rd32(esi) != 0u)
    {
        edi = rd32(esi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_call_regs(g, COW_IMG(0x101cd900u), eax, edi, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, edi);
        t5 = g->edx;
        wr32(esi, 0u);
        eax = t4;
        edx = t5;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_101d3dda;
    }
    esi = esi + 4u;
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        goto L_101d3dd5;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d3dc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
