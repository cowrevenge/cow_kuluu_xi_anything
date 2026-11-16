/* f_0x10231000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10231000(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_10231016;
    return in_eax & 0xffffff00u;
L_10231016: ;
    if (rd16(arg1) == 0u)
    {
        eax = in_eax;
        loc_4 = self & 0xffffff00u;
    }
    else
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        esi = arg1 + 4u;
        edi = 0u;
        loc_4 = self & 0xffffff00u;
L_10231023: ;
        if (rd16(esi) == 0xe000u)
        {
            eax = (eax & 0xffff0000u) | rd16(esi);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(esi);
            if ((uint16_t)eax != 0u)
            {
                g->edx = edx;
                g->esp = sp0 - 8u;
                t1 = cow_cdecl(g, COW_IMG(0x10230f60u), 3, esi + 4u, in_esi, in_edi);
                t2 = g->edx;
                if ((uint8_t)t1 == 0u)
                {
                    eax = t1;
                    edx = t2;
                }
                else
                {
                    edx = t2;
                    t3 = rd16(esi);
                    wr16(arg2 + (uint8_t)loc_4 * 2u, (uint16_t)t3);
                    eax = (arg2 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
                    edx = (edx & 0xffff0000u) | t3;
                    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
                }
            }
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd16(arg1))
        {
            ecx = rd16(arg1);
            esi = esi + 0x14u;
            edi = edi + 1u;
            goto L_10231023;
        }
    }
    return (eax & 0xffffff00u) | (uint8_t)loc_4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10231000(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
