/* f_0x1011d1b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011d1b0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    t1 = rd32(sp0 + 8u);
    wr16(arg1, 0xfffeu);
    t2 = rd8(t1);
    wr32(sp0 + 8u, t1);
    if ((uint8_t)t2 == 0u)
    {
        edx = in_edx;
        edi = 1u;
        goto L_1011d28a;
    }
    eax = t1;
    ecx = (arg1 & 0xffffff00u) | t2;
    edx = in_edx;
    esi = arg1 + 2u;
    edi = 1u;
L_1011d1d5: ;
    if (rd8(eax) != 0x7fu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edi = edi + 1u;
        if ((uint8_t)ecx != 0x1eu)
        {
            if ((uint8_t)ecx != 0x1fu)
            {
                if ((uint8_t)ecx != 0xfffffffcu)
                {
                    edx = (uint8_t)ecx;
                    if (edx != 0xfffffffbu)
                    {
                        if ((uint8_t)ecx == 7u)
                        {
                            wr16(esi, 0xffeau);
                            wr32(sp0 + 8u, eax + 1u);
                            esi = esi + 2u;
                        }
                        wr32(sp0 - 0xcu, sp0 + 8u);
                        g->ecx = ecx;
                        g->edx = sp0 + 8u;
                        g->esp = sp0;
                        t6 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 + 8u, in_edi, in_esi);
                        t7 = g->ecx;
                        t8 = g->edx;
                        wr16(esi, (uint16_t)t6);
                        eax = rd32(sp0 + 8u);
                        ecx = t7;
                        edx = t8;
                    }
                    else
                    {
                        wr16(esi, 0u);
                        wr32(sp0 + 8u, eax + 1u);
                        eax = eax + 1u;
                    }
                }
                else
                {
                    edx = (uint8_t)ecx;
                    wr16(esi, 0u);
                    wr32(sp0 + 8u, eax + 1u);
                    eax = eax + 1u;
                }
            }
            else
            {
                t5 = rd8(eax + 1u);
                wr16(esi, (uint16_t)(0xfffffe00u - ((edx & 0xffff0000u) | t5)));
                wr32(sp0 + 8u, eax + 2u);
                eax = eax + 2u;
                ecx = 0xfffffe00u - ((edx & 0xffff0000u) | t5);
                edx = (edx & 0xffff0000u) | t5;
            }
        }
        else
        {
            t4 = rd8(eax + 1u);
            wr16(esi, (uint16_t)(0xffffff00u - ((edx & 0xffff0000u) | t4)));
            wr32(sp0 + 8u, eax + 2u);
            eax = eax + 2u;
            ecx = 0xffffff00u - ((edx & 0xffff0000u) | t4);
            edx = (edx & 0xffff0000u) | t4;
        }
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edi = edi + 1u;
        t3 = rd8(eax + 1u);
        wr16(esi, (uint16_t)-((ecx & 0xffff0000u) | t3));
        wr32(sp0 + 8u, eax + 2u);
        eax = eax + 2u;
        ecx = -((ecx & 0xffff0000u) | t3);
    }
    if (rd8(eax) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        esi = esi + 2u;
        goto L_1011d1d5;
    }
L_1011d28a: ;
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d1b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d1b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
