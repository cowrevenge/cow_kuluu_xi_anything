/* f_0x10195240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10195240(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101954d0u), self, 1, arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_101952b1;
    }
    eax = t1;
    edx = t2;
    esi = t1;
    if (arg2 != 0u)
    {
        if (rd32(esi + 0x24u) != 0u)
        {
            ecx = rd32(esi + 0x24u);
            g->esp = sp0 - 8u;
            cow_fastcall(g, COW_IMG(0x10193b60u), ecx, arg3, 2, arg2, arg3);
        }
        else
        {
            ecx = rd32(esi + 0x24u);
            g->esp = sp0;
            t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x10u, in_edi, in_esi);
            t4 = g->edx;
            if (t3 == 0u)
            {
                wr32(esi + 0x24u, 0u);
            }
            else
            {
                eax = t3;
                edx = t4;
                g->eax = eax;
                g->esp = sp0 - 8u;
                t5 = cow_thiscall(g, COW_IMG(0x10193b00u), eax, 2, arg2, arg3);
                wr32(esi + 0x24u, t5);
            }
        }
        if (rd32(esi + 0x24u) != 0u)
        {
            ecx = rd32(esi + 0x24u);
            t6 = rd32(esi + 8u);
            t7 = rd32(esi + 4u);
            g->esp = sp0 - 8u;
            cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t7, 2, t7, t6);
        }
    }
    return 1u;
L_101952b1: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10195240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10195240(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
