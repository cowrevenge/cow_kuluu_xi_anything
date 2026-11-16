/* f_0x101ce170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ce170(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;

    t1 = (in_eax & 0xffffff00u) | rd8(self + 5u);
    t2 = rd32(self + 0x10u);
    g->ecx = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd8(t3 + 0x10u) == 0u)
    {
        edx = t5;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        edx = t5;
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
    }
    else
    {
        edx = t7;
        if ((int32_t)rd32(self + 0x6cu) <= 0)
        {
            eax = rd32(self + 0x6cu);
        }
        else
        {
            ebp = 0u;
            edi = self + 0x70u;
L_101ce1ab: ;
            if (rd32(edi) != 0u)
            {
                eax = rd32(edi);
                t8 = (edx & 0xffffff00u) | rd8(eax + 5u);
                t9 = rd32(eax + 0x10u);
                g->ecx = t9;
                g->edx = t8;
                g->esp = sp0 - 0x10u;
                t10 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t9, t8);
                t11 = g->ecx;
                t12 = g->edx;
                if (rd8(t10 + 0x10u) == 0u)
                {
                    edx = t12;
                }
                else
                {
                    edx = t12;
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
            }
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(self + 0x6cu))
            {
                ebp = ebp + 1u;
                edi = edi + 4u;
                goto L_101ce1ab;
            }
            eax = rd32(self + 0x6cu);
        }
    }
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ce170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ce170(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
