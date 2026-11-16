/* f_0x102896c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102896c0(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x24u) == 0u)
    {
        eax = rd32(arg1 + 0x24u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
        {
            edx = in_edx;
        }
        else
        {
            ecx = self;
            edx = in_edx;
            ebx = 0u;
            edi = 0u;
L_102896d9: ;
            t1 = ebx + rd32(arg1 + 0x24u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10289bc0u), 3, t1, in_ebx, in_edi);
            t2 = g->ecx;
            t3 = g->edx;
            if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
            {
                ecx = t2;
                edx = t3;
                ebx = ebx + 0x10u;
                edi = edi + 1u;
                goto L_102896d9;
            }
            edx = t3;
        }
        t4 = rd32(arg1 + 0x24u);
        g->ecx = t4;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t4, COW_IMG(0x103b9484u), 0x97u);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10289640u), 1, arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102896c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102896c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
