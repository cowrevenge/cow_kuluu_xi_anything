/* f_0x102c3440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c3440(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd8(arg1 + 8u) & 2u) != 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(arg1 + 8u);
        if (rd8(arg1 + 9u) != 8u)
        {
            eax = (arg1 & 0xffffff00u) | rd8(arg1 + 9u);
            ecx = rd32(arg1);
            if ((uint8_t)eax == 0x10u)
            {
                if ((uint8_t)edx != 2u)
                {
                    if ((uint8_t)edx == 6u)
                    {
                        if (ecx != 0u)
                        {
                            eax = arg2 + 1u;
                            esi = ecx;
L_102c34e0: ;
                            t9 = rd8(eax - 1u);
                            t10 = rd8(eax + 3u);
                            wr8(eax - 1u, (uint8_t)t10);
                            t11 = rd8(eax + 4u);
                            wr8(eax + 3u, (uint8_t)t9);
                            t12 = rd8(eax);
                            wr8(eax, (uint8_t)t11);
                            wr8(eax + 4u, (uint8_t)t12);
                            if (esi != 1u)
                            {
                                eax = eax + 8u;
                                ecx = ((ecx | t9) & 0xffffff00u) | t12;
                                edx = ((edx | t10) & 0xffffff00u) | t11;
                                esi = esi - 1u;
                                goto L_102c34e0;
                            }
                        }
                    }
                }
                else
                {
                    if (ecx != 0u)
                    {
                        eax = arg2 + 1u;
                        esi = ecx;
L_102c34b3: ;
                        t5 = rd8(eax - 1u);
                        t6 = rd8(eax + 3u);
                        wr8(eax - 1u, (uint8_t)t6);
                        t7 = rd8(eax + 4u);
                        wr8(eax + 3u, (uint8_t)t5);
                        t8 = rd8(eax);
                        wr8(eax, (uint8_t)t7);
                        wr8(eax + 4u, (uint8_t)t8);
                        if (esi != 1u)
                        {
                            eax = eax + 6u;
                            ecx = ((ecx | t5) & 0xffffff00u) | t8;
                            edx = ((edx | t6) & 0xffffff00u) | t7;
                            esi = esi - 1u;
                            goto L_102c34b3;
                        }
                    }
                }
            }
        }
        else
        {
            ecx = rd32(arg1);
            if ((uint8_t)edx != 2u)
            {
                if ((uint8_t)edx == 6u)
                {
                    if (ecx != 0u)
                    {
                        eax = arg2;
                        esi = ecx;
L_102c348e: ;
                        t3 = rd8(eax + 2u);
                        t4 = rd8(eax);
                        wr8(eax, (uint8_t)t3);
                        wr8(eax + 2u, (uint8_t)t4);
                        if (esi != 1u)
                        {
                            eax = eax + 4u;
                            ecx = (ecx & 0xffffff00u) | t3;
                            edx = (edx & 0xffffff00u) | t4;
                            esi = esi - 1u;
                            goto L_102c348e;
                        }
                    }
                }
            }
            else
            {
                if (ecx != 0u)
                {
                    eax = arg2;
                    esi = ecx;
L_102c346e: ;
                    t1 = rd8(eax + 2u);
                    t2 = rd8(eax);
                    wr8(eax, (uint8_t)t1);
                    wr8(eax + 2u, (uint8_t)t2);
                    if (esi != 1u)
                    {
                        eax = eax + 3u;
                        ecx = (ecx & 0xffffff00u) | t1;
                        edx = (edx & 0xffffff00u) | t2;
                        esi = esi - 1u;
                        goto L_102c346e;
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c3440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
