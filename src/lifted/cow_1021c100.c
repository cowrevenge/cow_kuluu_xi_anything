/* f_0x1021c100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1021c100(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 4u);
    }
    else
    {
        if (arg1 == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x1021bcc0u), self, 1, arg1);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
        }
        if (arg2 != 0u)
        {
            g->ebx = self;
            g->esp = sp0 - 4u;
            cow_fastcall(g, COW_IMG(0x1021bdb0u), self, edx, 1, arg2);
            t3 = g->ecx;
            t4 = g->edx;
            ecx = t3;
            edx = t4;
        }
        esi = self + 0x1224u;
        edi = 0x51u;
L_1021c135: ;
        if (rd32(esi) == 0u)
        {
            eax = rd32(esi);
        }
        else
        {
            eax = rd32(esi);
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t5 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(esi, 0u);
            eax = t5;
            ecx = t6;
            edx = t7;
        }
        if (edi != 1u)
        {
            esi = esi + 4u;
            edi = edi - 1u;
            goto L_1021c135;
        }
        wr8(self + 4u, 0u);
    }
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021c100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021c100(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
