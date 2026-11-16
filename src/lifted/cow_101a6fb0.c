/* f_0x101a6fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a6fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 96u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd8(arg1 + 2u) >= 0x12u)
        {
            eax = (in_eax & 0xffffff00u) | rd8(arg1 + 2u);
            edx = in_edx;
        }
        else
        {
            eax = (in_eax & 0xffffff00u) | rd8(arg1 + 2u);
            t1 = (arg1 & 0xffffff00u) | rd8(arg1);
            wr32(sp0 - 0x58u, t1);
            wr32(sp0 - 0x5cu, (uint8_t)eax);
            g->esp = sp0 - 0x54u;
            t2 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, (uint8_t)eax, t1);
            if (t2 == 0u)
            {
                eax = t2;
                edx = t2;
            }
            else
            {
                eax = t2;
                edx = t2;
                if (rd8(COW_IMG(0x106627dcu)) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106627dcu));
                }
                else
                {
                    wr32(sp0 - 0x58u, in_edi);
                    edi = sp0 - 0x54u;
                    eax = 0u;
                    ecx = 0x15u;
                    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    wr32(sp0 - 0x5cu, sp0 - 0x54u);
                    t3 = (eax & 0xffff0000u) | rd16(edx);
                    wr32(sp0 - 0x48u, t3);
                    g->edx = edx;
                    g->esp = sp0 - 0x58u;
                    t4 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
                    t5 = g->edx;
                    eax = t4;
                    edx = t5;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
