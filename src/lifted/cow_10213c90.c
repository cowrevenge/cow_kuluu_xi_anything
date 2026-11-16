/* f_0x10213c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10213c90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_ebx = g->ebx;

    t1 = rd32(self + 0x140u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_stdcall(g, COW_IMG(0x10216050u), 2, t1, 1u);
    t3 = g->edx;
    if ((int32_t)t2 <= 0)
    {
        eax = t2;
        edx = t3;
        ebx = t2;
    }
    else
    {
        eax = t2;
        ebx = t2;
        edx = self + 0x10u;
        edi = 0x1fu;
L_10213cb1: ;
        if (rd32(edx) != 0u)
        {
            ecx = rd32(edx);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_call_regs(g, COW_IMG(0x10212100u), eax, ecx, g->edx, 1, 0);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        if (edi != 1u)
        {
            edx = edx + 4u;
            edi = edi - 1u;
            goto L_10213cb1;
        }
        edx = edx + 4u;
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x10214040u), self, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    if (rd32(COW_IMG(0x10664530u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
    }
    g->ebx = in_ebx;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10213c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10213c90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
