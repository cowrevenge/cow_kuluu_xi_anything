/* f_0x1024b850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1024b850(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x104u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        ebp = t1;
        edi = ebp;
        eax = 0u;
        ecx = 0x41u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        eax = arg1 + 0x1cu;
        edx = ebp;
        ebx = 8u;
L_1024b880: ;
        if (eax >= rd32(COW_IMG(0x106690e8u)) + 0x2000u)
        {
            ecx = rd32(COW_IMG(0x106690e8u));
            eax = ecx;
        }
        esi = eax;
        edi = edx;
        ecx = 8u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (ebx != 1u)
        {
            eax = eax + 0x20u;
            edx = edx + 0x20u;
            ebx = ebx - 1u;
            goto L_1024b880;
        }
        t3 = rd32(arg1 + 4u);
        g->eax = arg1;
        t4 = rd32(arg1);
        g->esp = sp0 - 0x10u;
        t5 = cow_call_regs(g, COW_IMG(0x1024afe0u), g->eax, t3, t4, 1, 3, ebp, t4, t3);
        t6 = g->ecx;
        t7 = g->edx;
        g->esp = sp0 - 0x1cu;
        t8 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t6, t7, 1, 1, ebp);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024b850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024b850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
