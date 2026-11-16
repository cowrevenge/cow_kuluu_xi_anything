/* f_0x101e2320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e2320(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) != 0u)
    {
        eax = rd32(self);
        t1 = rd16(self + 4u);
        wr16(arg1 + 2u, (uint16_t)t1);
        wr16(arg1 + 8u, rd16(self + 6u));
        wr16(arg1 + 6u, rd16(self + 0x1au));
        if (rd16(self + 0x1au) == 0u)
        {
            wr8(arg1 + 0xau, 0u);
        }
        else
        {
            wr8(arg1 + 0xau, 1u);
        }
        eax = arg1 + 0xcu;
        ecx = self + 0x1cu;
        edx = 0u;
        edi = in_edi;
L_101e2365: ;
        t2 = rd16(ecx - 0x14u);
        wr16(eax + 2u, (uint16_t)t2);
        t3 = rd16(ecx);
        t4 = rd16(eax + 2u);
        wr16(eax, (uint16_t)t3);
        wr8(eax + 4u, 0u);
        if ((uint16_t)t4 == 0u)
        {
            edi = ((edi | t2) & 0xffff0000u) | t3;
        }
        else
        {
            edi = ((edi | t2) & 0xffff0000u) | t3;
            if ((uint16_t)edi != 0u)
            {
                wr8(eax + 4u, 1u);
            }
            else
            {
                wr16(eax, (uint16_t)(0xffffu - edx));
                edi = 0xffffu - edx;
            }
        }
        if ((int32_t)(edx + 1u) < 8)
        {
            eax = eax + 6u;
            ecx = ecx + 2u;
            edx = edx + 1u;
            goto L_101e2365;
        }
        eax = eax + 6u;
        ecx = arg1 + 0xeu;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        edi = 3u;
L_101e23a7: ;
        if (rd16(ecx) != 0u)
        {
            if (rd16(ecx - 2u) != 0u)
            {
                if (rd8(ecx + 2u) != 0u)
                {
                    if ((int32_t)edi < 10)
                    {
                        eax = ecx + 8u;
                        esi = 0xau - edi;
L_101e23c8: ;
                        if (rd16(ecx) != rd16(eax - 2u))
                        {
                            ebx = (ebx & 0xffff0000u) | rd16(ecx);
                        }
                        else
                        {
                            ebx = (ebx & 0xffff0000u) | rd16(ecx);
                            if (rd16(ecx - 2u) != rd16(eax - 4u))
                            {
                                ebx = (ebx & 0xffff0000u) | rd16(ecx - 2u);
                            }
                            else
                            {
                                ebx = (ebx & 0xffff0000u) | rd16(ecx - 2u);
                                t5 = rd8(eax);
                                wr8(ecx + 2u, (uint8_t)(t5 + rd8(ecx + 2u)));
                                wr16(eax - 2u, 0u);
                                wr16(eax - 4u, 0u);
                                wr8(eax, 0u);
                                ebx = (ebx & 0xffffff00u) | t5;
                            }
                        }
                        if (esi != 1u)
                        {
                            eax = eax + 6u;
                            esi = esi - 1u;
                            goto L_101e23c8;
                        }
                    }
                }
            }
        }
        if ((int32_t)edi < 9)
        {
            eax = edi;
            ecx = ecx + 6u;
            edi = edi + 1u;
            goto L_101e23a7;
        }
        eax = edi;
        edx = 7u;
        ebp = arg1 + 0xeu;
        esi = 2u;
L_101e2409: ;
        if (rd16(ebp) != 0u) goto L_101e2467;
        if (rd16(ebp - 2u) != 0u) goto L_101e2467;
        if (rd8(ebp + 2u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ebp + 2u);
            goto L_101e2467;
        }
        if ((int32_t)esi >= 9)
        {
            edi = esi;
        }
        else
        {
            eax = ebp;
            ecx = 9u - esi;
L_101e2431: ;
            t6 = rd16(eax + 6u);
            wr16(eax, (uint16_t)t6);
            t7 = rd16(eax + 4u);
            wr16(eax - 2u, (uint16_t)t7);
            t8 = rd8(eax + 8u);
            wr8(eax + 2u, (uint8_t)t8);
            if (ecx != 1u)
            {
                eax = eax + 6u;
                ecx = ecx - 1u;
                ebx = ((((ebx | t6) & 0xffff0000u) | t7) & 0xffffff00u) | t8;
                goto L_101e2431;
            }
            ebx = ((((ebx | t6) & 0xffff0000u) | t7) & 0xffffff00u) | t8;
            edi = 9u;
        }
        wr16(arg1 + edi * 6u + 2u, 0u);
        wr16(arg1 + edi * 6u, 0u);
        wr8(arg1 + edi * 6u + 4u, 0u);
        eax = arg1 + edi * 6u;
L_101e246b: ;
        if (edx != 1u)
        {
            edx = edx - 1u;
            goto L_101e2409;
        }
    }
    return;
L_101e2467: ;
    ebp = ebp + 6u;
    esi = esi + 1u;
    goto L_101e246b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e2320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
