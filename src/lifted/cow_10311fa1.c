/* f_0x10311fa1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10311fa1(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd8(arg1 + 0xcu) & 0x83u) == 0u)
    {
        edx = in_edx;
        edi = 0xffffffffu;
    }
    else
    {
        g->eax = in_eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x10318845u), 1, arg1);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->edx = t3;
        g->esp = sp0 - 4u;
        t4 = cow_cdecl(g, COW_IMG(0x103187bdu), 3, arg1, arg1, in_edi);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = rd32(arg1 + 0x10u);
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 8u;
        t8 = cow_cdecl(g, COW_IMG(0x10315ddfu), 3, t7, arg1, arg1);
        t9 = g->ecx;
        t10 = g->edx;
        if ((int32_t)t8 >= 0)
        {
            ecx = t9;
            edx = t10;
            edi = t1;
            if (rd32(arg1 + 0x1cu) != 0u)
            {
                eax = rd32(arg1 + 0x1cu);
                g->esp = sp0;
                cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_edi, in_esi);
                t11 = g->edx;
                wr32(arg1 + 0x1cu, 0u);
                edx = t11;
            }
        }
        else
        {
            edx = t10;
            edi = t1;
            edi = 0xffffffffu;
        }
    }
    wr32(arg1 + 0xcu, 0u);
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311fa1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10311fa1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
