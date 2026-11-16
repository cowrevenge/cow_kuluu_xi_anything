/* f_0x100fbc30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fbc30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg3 + 8u) < 0x900u)
    {
        edx = (in_edx & 0xffff0000u) | rd16(arg3 + 8u);
        goto L_100fbc44;
    }
    edx = (in_edx & 0xffff0000u) | rd16(arg3 + 8u);
    g->edx = edx;
    return in_eax & 0xffffff00u;
L_100fbc44: ;
    if ((rd8(arg3 + 0x30u) & 7u) == 1u)
    {
        ebx = in_ebx;
        esi = arg1 + (uint16_t)edx * 8u + 0x3c43cu;
        goto L_100fbc69;
    }
    eax = (rd8(arg3 + 0x30u) & 7u) - 1u;
    esi = arg1 + (uint16_t)edx * 8u + 0x3c43cu;
    if (eax != 6u)
    {
        ebx = (in_ebx & 0xffffff00u) | 7u;
        goto L_100fbc6b;
    }
    ebx = (in_ebx & 0xffffff00u) | 7u;
L_100fbc69: ;
    ebx = (ebx & 0xffffff00u) | 0x17u;
L_100fbc6b: ;
    if (rd32(esi) == rd32(arg3 + 4u))
    {
        eax = rd32(esi);
        ecx = arg1;
        ebp = rd32(arg3 + 4u);
    }
    else
    {
        eax = rd32(esi);
        ebp = rd32(arg3 + 4u);
        if (eax == 0u)
        {
            ecx = arg1;
        }
        else
        {
            if (eax == 0xffffffffu)
            {
                ecx = arg1;
            }
            else
            {
                if (rd8(arg3 + 0xau) == (uint8_t)ebx)
                {
                    ecx = (arg1 & 0xffffff00u) | rd8(arg3 + 0xau);
                }
                else
                {
                    ecx = (arg1 & 0xffffff00u) | rd8(arg3 + 0xau);
                    t1 = (ecx & 0xffff0000u) | (uint8_t)ecx;
                    t2 = (t1 & 0xffff0000u) | rd16(esi + 4u);
                    g->eax = eax;
                    g->ecx = t2;
                    g->esp = sp0 - 0x10u;
                    t3 = cow_cdecl(g, COW_IMG(0x100fc830u), 5, edx, ebp, eax, t2, t1);
                    t4 = g->ecx;
                    eax = t3;
                    ecx = t4;
                }
            }
        }
    }
    t5 = (eax & 0xffff0000u) | (uint8_t)ebx;
    if ((uint16_t)t5 == (uint16_t)(t5 & ((ebp & 0xffff0000u) | rd16(esi + 4u))))
    {
        eax = t5;
        edx = t5 & ((ebp & 0xffff0000u) | rd16(esi + 4u));
    }
    else
    {
        eax = t5;
        edx = t5 & ((ebp & 0xffff0000u) | rd16(esi + 4u));
        ebp = (ebp & 0xffff0000u) | rd16(esi + 4u);
        if ((uint8_t)ebx == (rd8(arg3 + 0xau) & (uint8_t)ebx))
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + 0xau);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + 0xau);
            if ((uint8_t)eax != 0x20u)
            {
                t6 = (edx & 0xffff0000u) | (uint8_t)eax;
                t7 = rd32(arg3 + 4u);
                t8 = (t6 & 0xffff0000u) | rd16(arg3 + 8u);
                g->eax = rd32(esi);
                g->edx = t8;
                t9 = rd32(esi);
                g->esp = sp0 - 0x10u;
                t10 = cow_cdecl(g, COW_IMG(0x100fc830u), 5, t8, t7, t9, ebp, t6);
                t11 = g->edx;
                eax = t10;
                edx = t11;
            }
        }
    }
    if ((rd8(arg3 + 0xau) & 0x20u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0xau);
        goto L_100fbcef;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 0xau);
    wr16(esi + 4u, 0u);
    wr32(esi, 0xffffffffu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100fbcef: ;
    wr16(esi + 4u, rd16(esi + 4u) | (uint8_t)eax);
    t12 = rd32(arg3 + 4u);
    wr32(esi, t12);
    g->edx = edx;
    return (eax & 0xffff0000u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fbc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fbc30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
