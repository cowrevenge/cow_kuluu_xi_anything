/* f_0x1018e780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018e780(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x54u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x54u);
        edx = in_edx;
        ebx = 0u;
        edi = self + 4u;
L_1018e792: ;
        if (rd32(edi) != 0u)
        {
            esi = rd32(edi);
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t1 = cow_fastcall(g, COW_IMG(0x1018e0e0u), esi, edx, 0);
            t2 = g->ecx;
            t3 = g->edx;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t2, t3, 1, 1, esi);
            t4 = g->edx;
            wr32(edi, 0u);
            edx = t4;
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd8(self + 0x54u))
        {
            eax = rd8(self + 0x54u);
            ebx = ebx + 1u;
            edi = edi + 4u;
            goto L_1018e792;
        }
    }
    wr8(self + 0x60u, 0u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018e780(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
