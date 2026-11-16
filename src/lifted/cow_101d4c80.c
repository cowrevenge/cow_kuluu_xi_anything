/* f_0x101d4c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d4c80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    if (rd32(self + 0x38u) == 0u)
    {
        loc_10 = rd32(sp0 - 0x10u) & 0xffffffu;
    }
    else
    {
        eax = rd32(self + 0x38u);
        loc_10 = rd32(sp0 - 0x10u) & 0xffffffu;
        loc_10 = (loc_10 & 0xffffffu) | (rd8(eax + 0xc0u) == 1u) << 0x18u;
    }
    edx = in_edx;
    ebx = in_ebx;
    ebp = COW_IMG(0x10338458u);
    esi = in_esi;
    loc_c = self + 0x44u;
L_101d4cb5: ;
    t1 = (esi & 0xffff0000u) | rd16(ebp);
    if (rd16(ebp) == 0u) goto L_101d4d79;
    esi = t1;
    loc_4 = t1;
    g->esp = sp0 - 0x20u;
    t2 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    if ((uint8_t)t2 == 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd32(loc_c) != 0u;
        edi = COW_IMG(0x10480af0u);
    }
    else
    {
        ebx = ebx & 0xffffff00u;
        edi = COW_IMG(0x10480af0u);
    }
L_101d4ced: ;
    if (rd32(edi) != 0u)
    {
        eax = rd32(edi);
        if (rd32(eax + 0x120u) >> 9u & 1u)
        {
            edx = rd32(eax + 0x120u) >> 9u;
            if ((rd32(eax + 0x78u) & 0xff000000u) == 0x1000000u)
            {
                if (rd16(eax + 0xfcu) == (uint16_t)esi)
                {
                    if (rd32(eax + 0xa0u) == 0u)
                    {
                        esi = rd32(eax + 0xa0u);
                    }
                    else
                    {
                        esi = rd32(eax + 0xa0u);
                        if ((uint8_t)ebx == 0u)
                        {
                            ecx = esi;
                            g->esp = sp0 - 0x20u;
                            t4 = cow_call_regs(g, COW_IMG(0x100859d0u), eax, ecx, edx, 0, 1, 0u);
                            eax = t4;
                        }
                        else
                        {
                            ecx = esi;
                            g->esp = sp0 - 0x20u;
                            t3 = cow_call_regs(g, COW_IMG(0x10085990u), eax, ecx, edx, 1, 0);
                            eax = t3;
                        }
                    }
                    if (loc_10 >> 0x18u == 0u)
                    {
                        wr8(esi + 0xc0u, 2u);
                    }
                    else
                    {
                        wr8(esi + 0xc0u, 1u);
                    }
                }
            }
        }
    }
    if ((int32_t)(edi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        edi = edi + 4u;
        goto L_101d4ce9;
    }
    if ((int32_t)(ebp + 0x84u) < (int32_t)COW_IMG(0x103384dcu))
    {
        edx = loc_c + 4u;
        ebp = ebp + 0x84u;
        loc_c = loc_c + 4u;
        goto L_101d4cb1;
    }
L_101d4d79: ;
    return;
L_101d4cb1: ;
    goto L_101d4cb5;
L_101d4ce9: ;
    esi = loc_4;
    goto L_101d4ced;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d4c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d4c80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
