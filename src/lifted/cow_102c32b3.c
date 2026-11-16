/* f_0x102c32b3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c32b3(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg1 + 0xau) != 4u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(arg1 + 0xau);
        ebx = rd32(arg1);
        goto L_102c33ab;
    }
    edx = (in_edx & 0xffffff00u) | rd8(arg1 + 0xau);
    ebx = rd32(arg1);
    if (rd8(arg1 + 9u) != 8u)
    {
        if ((arg3 & 0x80u) == 0u)
        {
            if (ebx != 0u)
            {
                eax = arg2;
                ecx = arg2;
                esi = ebx;
L_102c336d: ;
                t13 = rd8(eax + 2u);
                wr8(ecx, (uint8_t)t13);
                t14 = rd8(eax + 3u);
                wr8(ecx + 1u, (uint8_t)t14);
                t15 = rd8(eax + 4u);
                wr8(ecx + 2u, (uint8_t)t15);
                t16 = rd8(eax + 5u);
                wr8(ecx + 3u, (uint8_t)t16);
                t17 = rd8(eax + 6u);
                wr8(ecx + 4u, (uint8_t)t17);
                t18 = rd8(eax + 7u);
                wr8(ecx + 5u, (uint8_t)t18);
                if (esi != 1u)
                {
                    eax = eax + 8u;
                    ecx = ecx + 6u;
                    edx = ((edx | t13 | t14 | t15 | t16 | t17) & 0xffffff00u) | t18;
                    esi = esi - 1u;
                    goto L_102c336d;
                }
            }
        }
        else
        {
            if (ebx > 1u)
            {
                eax = arg2 + 6u;
                ecx = arg2;
                edx = arg2 + 8u;
                esi = ebx - 1u;
L_102c333c: ;
                t7 = rd8(edx);
                wr8(eax, (uint8_t)t7);
                t8 = rd8(edx + 1u);
                wr8(eax + 1u, (uint8_t)t8);
                t9 = rd8(edx + 2u);
                wr8(eax + 2u, (uint8_t)t9);
                t10 = rd8(edx + 3u);
                wr8(eax + 3u, (uint8_t)t10);
                t11 = rd8(edx + 4u);
                wr8(eax + 4u, (uint8_t)t11);
                t12 = rd8(edx + 5u);
                wr8(eax + 5u, (uint8_t)t12);
                if (esi != 1u)
                {
                    eax = eax + 6u;
                    ecx = ((ecx | t7 | t8 | t9 | t10 | t11) & 0xffffff00u) | t12;
                    edx = edx + 8u;
                    esi = esi - 1u;
                    goto L_102c333c;
                }
            }
        }
        wr8(arg1 + 0xbu, 0x30u);
        eax = ebx * 6u;
    }
    else
    {
        if ((arg3 & 0x80u) == 0u)
        {
            if (ebx != 0u)
            {
                eax = arg2;
                ecx = arg2;
                esi = ebx;
L_102c3309: ;
                t4 = rd8(eax + 1u);
                wr8(ecx, (uint8_t)t4);
                t5 = rd8(eax + 2u);
                wr8(ecx + 1u, (uint8_t)t5);
                t6 = rd8(eax + 3u);
                wr8(ecx + 2u, (uint8_t)t6);
                if (esi != 1u)
                {
                    eax = eax + 4u;
                    ecx = ecx + 3u;
                    edx = ((edx | t4 | t5) & 0xffffff00u) | t6;
                    esi = esi - 1u;
                    goto L_102c3309;
                }
            }
        }
        else
        {
            if (ebx > 1u)
            {
                eax = arg2 + 3u;
                ecx = ebx - 1u;
                esi = arg2 + 4u;
L_102c32eb: ;
                t1 = rd8(esi);
                wr8(eax, (uint8_t)t1);
                t2 = rd8(esi + 1u);
                wr8(eax + 1u, (uint8_t)t2);
                t3 = rd8(esi + 2u);
                wr8(eax + 2u, (uint8_t)t3);
                if (ecx != 1u)
                {
                    eax = eax + 3u;
                    ecx = ecx - 1u;
                    edx = ((edx | t1 | t2) & 0xffffff00u) | t3;
                    esi = esi + 4u;
                    goto L_102c32eb;
                }
            }
        }
        wr8(arg1 + 0xbu, 0x18u);
        eax = ebx * 3u;
    }
    wr32(arg1 + 4u, eax);
    wr8(arg1 + 0xau, 3u);
L_102c3437: ;
    wr8(arg1 + 8u, rd8(arg1 + 8u) & 0xfbu);
L_102c343b: ;
    return;
L_102c33ab: ;
    if ((uint8_t)edx != 2u) goto L_102c343b;
    if (rd8(arg1 + 9u) != 8u)
    {
        if ((arg3 & 0x80u) == 0u)
        {
            if (ebx != 0u)
            {
                eax = arg2;
                ecx = arg2;
                esi = ebx;
L_102c3418: ;
                t23 = rd8(eax + 2u);
                wr8(ecx, (uint8_t)t23);
                t24 = rd8(eax + 3u);
                wr8(ecx + 1u, (uint8_t)t24);
                if (esi != 1u)
                {
                    eax = eax + 4u;
                    ecx = ecx + 2u;
                    edx = ((edx | t23) & 0xffffff00u) | t24;
                    esi = esi - 1u;
                    goto L_102c3418;
                }
            }
        }
        else
        {
            if (ebx > 1u)
            {
                eax = arg2 + 4u;
                ecx = ebx - 1u;
                esi = arg2 + 2u;
L_102c33ff: ;
                t21 = rd8(eax);
                wr8(esi, (uint8_t)t21);
                t22 = rd8(eax + 1u);
                wr8(esi + 1u, (uint8_t)t22);
                if (ecx != 1u)
                {
                    eax = eax + 4u;
                    ecx = ecx - 1u;
                    edx = ((edx | t21) & 0xffffff00u) | t22;
                    esi = esi + 2u;
                    goto L_102c33ff;
                }
            }
        }
        wr8(arg1 + 0xbu, 0x10u);
        wr32(arg1 + 4u, ebx * 2u);
    }
    else
    {
        if ((arg3 & 0x80u) == 0u)
        {
            if (ebx != 0u)
            {
                eax = arg2;
                ecx = arg2;
                esi = ebx;
L_102c33d8: ;
                t20 = rd8(eax + 1u);
                wr8(ecx, (uint8_t)t20);
                if (esi != 1u)
                {
                    eax = eax + 2u;
                    ecx = ecx + 1u;
                    edx = (edx & 0xffffff00u) | t20;
                    esi = esi - 1u;
                    goto L_102c33d8;
                }
            }
        }
        else
        {
            if (ebx != 0u)
            {
                eax = arg2;
                ecx = arg2;
                esi = ebx;
L_102c33c6: ;
                t19 = rd8(eax);
                wr8(ecx, (uint8_t)t19);
                if (esi != 1u)
                {
                    eax = eax + 2u;
                    ecx = ecx + 1u;
                    edx = (edx & 0xffffff00u) | t19;
                    esi = esi - 1u;
                    goto L_102c33c6;
                }
            }
        }
        wr8(arg1 + 0xbu, 8u);
        wr32(arg1 + 4u, ebx);
    }
    wr8(arg1 + 0xau, 1u);
    goto L_102c3437;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c32b3(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c32b3(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
