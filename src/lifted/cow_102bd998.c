/* f_0x102bd998 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bd998(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x102c3149u), 1, t1);
    t3 = g->edx;
    t4 = rd32(t1 + 0xccu);
    wr32(t1 + 0xd0u, t4);
    if ((int32_t)t2 > 0)
    {
        eax = t2;
        ecx = t1;
        edx = t3;
        esi = t1;
        edi = t4;
        loc_8 = eax;
L_102bd9bc: ;
        if (edi != 0u)
        {
            wr32(sp0 + 4u, edi);
            ebx = arg2;
L_102bd9c6: ;
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t5 = cow_call_regs(g, COW_IMG(0x102bd511u), g->eax, ecx, edx, 1, 3, esi, rd32(ebx), 0u);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
            if (rd32(sp0 + 4u) != 1u)
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                ebx = ebx + 4u;
                goto L_102bd9c6;
            }
            eax = t5;
            ecx = t6;
            edx = t7;
        }
        if (loc_8 != 1u)
        {
            loc_8 = loc_8 - 1u;
            goto L_102bd9bc;
        }
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bd998(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bd998(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
