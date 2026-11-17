/* f_0x10095530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10095530(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ebx = arg2;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101c4af0u), t1, 1, arg2);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0xffffffffu)
    {
        eax = t2;
    }
    else
    {
        ecx = t3;
        edx = t4;
        esi = t2;
        g->eax = esi + 0x5dcu;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi + 0x5dcu, in_edi, in_esi);
        t6 = g->edx;
        wr32(arg1, t5);
        g->ebx = arg2;
        g->edx = t6;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, COW_IMG(0x101c4740u), rd32(COW_IMG(0x10662dccu)), 4, arg2, t5, esi, 0u);
        t8 = g->edx;
        if ((uint8_t)arg3 != 1u)
        {
            eax = t7;
        }
        else
        {
            eax = t7;
            edx = t8;
            g->esp = sp0 - 8u;
            t9 = cow_call_regs(g, COW_IMG(0x1008a890u), eax, g->ecx, edx, 1, 3, rd32(arg1), esi, in_edi);
            eax = t9;
        }
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10095530(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
