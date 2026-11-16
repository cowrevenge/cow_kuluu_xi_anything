/* f_0x101fcfb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fcfb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if (rd8(self + 0x14u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x14u);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x14u);
        if ((int8_t)rd8(self + 0x17u) < 0)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x17u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x17u);
            if (rd8(self + 0x16u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x16u);
            }
            else
            {
                g->esi = self;
                g->edx = in_edx;
                g->esp = sp0 - 8u;
                t1 = cow_thiscall(g, COW_IMG(0x101fd600u), self, 1, self + 0x3cu);
                t2 = g->ecx;
                t3 = g->edx;
                if ((uint8_t)t1 == 0u)
                {
                    eax = t1;
                }
                else
                {
                    eax = t1;
                    ecx = t2;
                    edx = t3;
                    t4 = (eax & 0xffff0000u) | rd16(self + 0x18u);
                    t5 = (ecx & 0xffffff00u) | rd8(self + 0x17u);
                    g->esp = sp0 - 8u;
                    t6 = cow_cdecl(g, COW_IMG(0x100ec3f0u), 3, t5, t4, self + 0x3cu);
                    eax = t6;
                }
            }
        }
    }
    t7 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t7, 1u);
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fcfb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fcfb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
