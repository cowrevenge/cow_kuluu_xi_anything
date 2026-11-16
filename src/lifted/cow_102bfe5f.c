/* f_0x102bfe5f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bfe5f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg1 + 8u) != 6u)
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 8u);
        edx = rd32(arg1);
        if ((uint8_t)ecx == 4u)
        {
            if (rd8(arg1 + 9u) != 8u)
            {
                eax = rd32(arg1 + 4u);
                if (edx != 0u)
                {
                    eax = arg2 + eax;
                    esi = edx;
L_102bfeee: ;
                    t6 = rd8(eax - 1u);
                    wr8(eax - 1u, (uint8_t)((uint8_t)(edx | 0xffu) - t6));
                    t7 = rd8(eax - 2u);
                    wr8(eax - 2u, (uint8_t)((uint8_t)((uint8_t)(edx | 0xffu) - t6 | 0xffu) - t7));
                    if (esi != 1u)
                    {
                        eax = eax - 4u;
                        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)(edx | 0xffu) - t6 | 0xffu) - t7);
                        esi = esi - 1u;
                        goto L_102bfeee;
                    }
                }
            }
            else
            {
                eax = rd32(arg1 + 4u);
                if (edx != 0u)
                {
                    ecx = arg2 + eax;
                    eax = arg2 + eax;
                    esi = edx;
L_102bfed1: ;
                    t4 = rd8(eax - 1u);
                    wr8(ecx - 1u, (uint8_t)((uint8_t)(edx | 0xffu) - t4));
                    t5 = rd8(eax - 2u);
                    wr8(ecx - 2u, (uint8_t)t5);
                    if (esi != 1u)
                    {
                        eax = eax - 2u;
                        ecx = ecx - 2u;
                        edx = (edx & 0xffffff00u) | t5;
                        esi = esi - 1u;
                        goto L_102bfed1;
                    }
                }
            }
        }
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 8u);
        edx = rd32(arg1);
        if (rd8(arg1 + 9u) != 8u)
        {
            eax = rd32(arg1 + 4u);
            if (edx != 0u)
            {
                eax = arg2 + eax;
                esi = edx;
L_102bfe9d: ;
                t2 = rd8(eax - 1u);
                wr8(eax - 1u, (uint8_t)((uint8_t)(edx | 0xffu) - t2));
                t3 = rd8(eax - 2u);
                wr8(eax - 2u, (uint8_t)((uint8_t)((uint8_t)(edx | 0xffu) - t2 | 0xffu) - t3));
                if (esi != 1u)
                {
                    eax = eax - 8u;
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)(edx | 0xffu) - t2 | 0xffu) - t3);
                    esi = esi - 1u;
                    goto L_102bfe9d;
                }
            }
        }
        else
        {
            eax = rd32(arg1 + 4u);
            if (edx == 0u) goto L_102bff06;
            eax = arg2 + eax;
L_102bfe84: ;
            t1 = rd8(eax - 1u);
            wr8(eax - 1u, (uint8_t)((uint8_t)(ecx | 0xffu) - t1));
            if (edx != 1u)
            {
                eax = eax - 4u;
                ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)(ecx | 0xffu) - t1);
                edx = edx - 1u;
                goto L_102bfe84;
            }
        }
    }
L_102bff06: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bfe5f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bfe5f(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
