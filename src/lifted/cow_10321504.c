/* f_0x10321504 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10321504(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(in_ebp - 0x28u);
    wr32(in_esi - 4u, t1);
    g->eax = t1;
    t2 = cow_fastcall(g, COW_IMG(0x1031a04du), self, in_edx, 0);
    t3 = g->edx;
    t4 = rd32(in_ebp - 0x1cu);
    wr32(t2 + 0x6cu, t4);
    t5 = cow_fastcall(g, COW_IMG(0x1031a04du), t4, t3, 0);
    t6 = g->edx;
    t7 = rd32(in_ebp - 0x20u);
    wr32(t5 + 0x70u, t7);
    if (rd32(in_edi) == 0xe06d7363u)
    {
        eax = t5;
        ecx = t7;
        edx = t6;
        if (rd32(in_edi + 0x10u) == 3u)
        {
            if (rd32(in_edi + 0x14u) == 0x19930520u)
            {
                if (rd32(in_ebp - 0x24u) == 0u)
                {
                    if (rd32(in_ebp - 0x2cu) != 0u)
                    {
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0;
                        t8 = cow_stdcall(g, COW_IMG(0x10316652u), 0);
                        t9 = g->ecx;
                        t10 = g->edx;
                        g->esp = sp0 - 8u;
                        cow_thiscall(g, COW_IMG(0x10321740u), t9, 0);
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10321504(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10321504(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
