/* f_0x102dad5b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102dad5b(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_102dadbe;
    if (arg2 == 0u) goto L_102dadbe;
    if (arg3 == 0u) goto L_102dadbe;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x50u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x102e793du), eax, 0);
        t4 = g->edx;
        edx = t4;
        esi = t3;
    }
    if (esi != 0u)
    {
        g->esp = sp0 - 0x10u;
        t5 = cow_fastcall(g, COW_IMG(0x102e7797u), esi, edx, 2, arg1, arg2);
        t6 = g->edx;
        if ((int32_t)t5 >= 0)
        {
            wr32(arg3, esi);
            eax = 0u;
        }
        else
        {
            edx = t6;
            edi = t5;
            g->esp = sp0 - 0x10u;
            cow_fastcall(g, COW_IMG(0x102da74bu), esi, edx, 1, 1u);
            eax = edi;
        }
    }
    else
    {
        eax = 0x8007000eu;
    }
L_102dadc3: ;
    return eax;
L_102dadbe: ;
    eax = 0x8876086cu;
    goto L_102dadc3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dad5b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dad5b(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
