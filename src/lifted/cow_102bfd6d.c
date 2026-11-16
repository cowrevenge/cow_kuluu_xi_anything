/* f_0x102bfd6d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bfd6d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1 + 8u) != 6u)
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 8u);
        edx = rd32(arg1);
        if ((uint8_t)ecx == 4u)
        {
            if (rd8(arg1 + 9u) != 8u)
            {
                eax = rd32(arg1 + 4u);
                t19 = eax + rd32(sp0 + 8u);
                if (edx != 0u)
                {
                    eax = t19;
                    ecx = t19;
                    ebx = in_ebx;
                    esi = edx;
L_102bfe3a: ;
                    t20 = rd8(eax - 1u);
                    t21 = rd8(eax - 2u);
                    wr8(sp0 + 0xbu, (uint8_t)t21);
                    t22 = rd8(eax - 3u);
                    wr8(ecx - 1u, (uint8_t)t22);
                    t23 = rd8(eax - 4u);
                    wr8(ecx - 2u, (uint8_t)t23);
                    wr8(ecx - 3u, (uint8_t)t20);
                    t24 = rd8(sp0 + 0xbu);
                    wr8(ecx - 4u, (uint8_t)t24);
                    if (esi != 1u)
                    {
                        eax = eax - 4u;
                        ecx = ecx - 4u;
                        edx = ((edx | t20) & 0xffffff00u) | t24;
                        ebx = ((ebx | t21 | t22) & 0xffffff00u) | t23;
                        esi = esi - 1u;
                        goto L_102bfe3a;
                    }
                }
            }
            else
            {
                eax = rd32(arg1 + 4u);
                t16 = eax + rd32(sp0 + 8u);
                if (edx != 0u)
                {
                    eax = t16;
                    ecx = t16;
                    ebx = in_ebx;
                    esi = edx;
L_102bfe1e: ;
                    t17 = rd8(eax - 1u);
                    t18 = rd8(eax - 2u);
                    wr8(ecx - 1u, (uint8_t)t18);
                    wr8(ecx - 2u, (uint8_t)t17);
                    if (esi != 1u)
                    {
                        eax = eax - 2u;
                        ecx = ecx - 2u;
                        edx = (edx & 0xffffff00u) | t17;
                        ebx = (ebx & 0xffffff00u) | t18;
                        esi = esi - 1u;
                        goto L_102bfe1e;
                    }
                }
            }
        }
    }
    else
    {
        edx = rd32(arg1);
        if (rd8(arg1 + 9u) != 8u)
        {
            eax = rd32(arg1 + 4u);
            t6 = eax + rd32(sp0 + 8u);
            if (edx != 0u)
            {
                eax = t6;
                ecx = t6;
                ebx = in_ebx;
                esi = edx;
L_102bfdca: ;
                t7 = rd8(eax - 1u);
                t8 = rd8(eax - 2u);
                wr8(sp0 + 0xbu, (uint8_t)t8);
                t9 = rd8(eax - 3u);
                wr8(ecx - 1u, (uint8_t)t9);
                t10 = rd8(eax - 4u);
                wr8(ecx - 2u, (uint8_t)t10);
                t11 = rd8(eax - 5u);
                wr8(ecx - 3u, (uint8_t)t11);
                t12 = rd8(eax - 6u);
                wr8(ecx - 4u, (uint8_t)t12);
                t13 = rd8(eax - 7u);
                wr8(ecx - 5u, (uint8_t)t13);
                t14 = rd8(eax - 8u);
                wr8(ecx - 6u, (uint8_t)t14);
                wr8(ecx - 7u, (uint8_t)t7);
                t15 = rd8(sp0 + 0xbu);
                wr8(ecx - 8u, (uint8_t)t15);
                if (esi != 1u)
                {
                    eax = eax - 8u;
                    ecx = ecx - 8u;
                    edx = ((edx | t7) & 0xffffff00u) | t15;
                    ebx = ((ebx | t8 | t9 | t10 | t11 | t12 | t13) & 0xffffff00u) | t14;
                    esi = esi - 1u;
                    goto L_102bfdca;
                }
            }
        }
        else
        {
            eax = rd32(arg1 + 4u);
            t1 = eax + rd32(sp0 + 8u);
            if (edx != 0u)
            {
                eax = t1;
                ecx = t1;
                ebx = in_ebx;
                esi = edx;
L_102bfd9b: ;
                t2 = rd8(eax - 1u);
                t3 = rd8(eax - 2u);
                wr8(ecx - 1u, (uint8_t)t3);
                t4 = rd8(eax - 3u);
                wr8(ecx - 2u, (uint8_t)t4);
                t5 = rd8(eax - 4u);
                wr8(ecx - 3u, (uint8_t)t5);
                wr8(ecx - 4u, (uint8_t)t2);
                if (esi != 1u)
                {
                    eax = eax - 4u;
                    ecx = ecx - 4u;
                    edx = (edx & 0xffffff00u) | t2;
                    ebx = ((ebx | t3 | t4) & 0xffffff00u) | t5;
                    esi = esi - 1u;
                    goto L_102bfd9b;
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bfd6d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bfd6d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
