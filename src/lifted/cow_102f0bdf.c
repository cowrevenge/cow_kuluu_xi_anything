/* f_0x102f0bdf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102f0bdf(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(rd32(sp0 + 4u));
    t3 = rd8(rd32(sp0 + 4u) + 8u);
    t4 = rd32(sp0 + 4u);
    wr8(sp0 + 7u, (uint8_t)(t1 >> 8u));
    if ((uint8_t)t3 != 0u)
    {
        eax = t2;
        ecx = (self & 0xffffff00u) | t3;
        edx = t1;
        ebx = t1 >> 8u;
        esi = t4;
        goto L_102f0ce2;
    }
    eax = t2;
    ecx = (self & 0xffffff00u) | t3;
    edx = t1;
    ebx = t1 >> 8u;
    esi = t4;
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        goto L_102f0c59;
    }
    if ((arg4 & 0x80u) == 0u)
    {
        ecx = arg2 + eax;
        edi = arg2 + eax * 2u;
        if (eax != 0u)
        {
            wr32(sp0 + 4u, eax);
L_102f0c3c: ;
            t7 = rd8(ecx - 1u);
            wr8(edi - 1u, (uint8_t)t7);
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
            t8 = rd32(sp0 + 4u);
            wr8(edi - 2u, (uint8_t)edx);
            if (t8 != 1u)
            {
                ecx = ecx - 1u;
                ebx = (ebx & 0xffffff00u) | t7;
                edi = edi - 2u;
                goto L_102f0c3c;
            }
        }
    }
    else
    {
        ecx = arg2 + eax;
        edi = arg2 + eax * 2u;
        if (eax > 1u)
        {
            wr32(sp0 + 4u, eax - 1u);
            ebx = eax - 1u;
L_102f0c22: ;
            wr8(edi - 1u, (uint8_t)edx);
            t5 = rd8(ecx - 1u);
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
            t6 = rd32(sp0 + 4u);
            wr8(edi - 2u, (uint8_t)t5);
            if (t6 != 1u)
            {
                ecx = ecx - 1u;
                ebx = (ebx & 0xffffff00u) | t5;
                edi = edi - 2u;
                goto L_102f0c22;
            }
            edi = edi - 2u;
        }
        wr8(edi - 1u, (uint8_t)edx);
    }
    wr8(esi + 0xau, 2u);
    wr8(esi + 0xbu, 0x10u);
    eax = eax * 2u;
L_102f0e0f: ;
    wr32(esi + 4u, eax);
L_102f0e12: ;
    g->edx = edx;
    return;
L_102f0c59: ;
    if ((uint8_t)ecx != 0x10u) goto L_102f0e12;
    if ((arg4 & 0x80u) == 0u)
    {
        wr32(sp0 + 4u, arg2 + eax);
        if (eax != 0u)
        {
            edi = arg2 + eax * 2u;
            wr32(sp0 + 0xcu, eax);
L_102f0cb1: ;
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
            t12 = rd32(sp0 + 4u);
            t13 = rd8(rd32(sp0 + 4u));
            wr32(sp0 + 4u, t12 - 1u);
            wr8(edi - 1u, (uint8_t)t13);
            wr8(edi - 2u, rd8(rd32(sp0 + 4u)));
            wr8(edi - 3u, (uint8_t)ebx);
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
            t14 = rd32(sp0 + 0xcu);
            wr8(edi - 4u, (uint8_t)edx);
            if (t14 != 1u)
            {
                edi = edi - 4u;
                goto L_102f0cb1;
            }
        }
    }
    else
    {
        if (eax <= 1u)
        {
            ecx = arg2 + eax * 2u;
        }
        else
        {
            ecx = arg2 + eax * 2u;
            loc_8 = arg2 + eax;
            wr32(sp0 + 0xcu, eax - 1u);
            edi = loc_8;
L_102f0c80: ;
            wr8(ecx - 1u, (uint8_t)ebx);
            wr8(ecx - 2u, (uint8_t)edx);
            t9 = rd8(edi - 1u);
            wr8(ecx - 3u, (uint8_t)t9);
            t10 = rd8(edi - 2u);
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
            t11 = rd32(sp0 + 0xcu);
            wr8(ecx - 4u, (uint8_t)t10);
            if (t11 != 1u)
            {
                ecx = ecx - 4u;
                ebx = ((ebx | t9 | t10) & 0xffffff00u) | rd8(sp0 + 7u);
                edi = edi - 2u;
                goto L_102f0c80;
            }
            ecx = ecx - 4u;
            ebx = ((ebx | t9 | t10) & 0xffffff00u) | rd8(sp0 + 7u);
        }
        wr8(ecx - 1u, (uint8_t)ebx);
        wr8(ecx - 2u, (uint8_t)edx);
    }
    wr8(esi + 0xau, 2u);
    wr8(esi + 0xbu, 0x20u);
    eax = eax << 2u;
    goto L_102f0e0f;
L_102f0ce2: ;
    if ((uint8_t)ecx != 2u) goto L_102f0e12;
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        goto L_102f0d67;
    }
    if ((arg4 & 0x80u) == 0u)
    {
        if (eax != 0u)
        {
            ecx = arg2 + eax * 4u;
            edi = arg2 + eax * 3u;
            wr32(sp0 + 4u, eax);
L_102f0d41: ;
            t19 = rd8(edi - 1u);
            wr8(ecx - 1u, (uint8_t)t19);
            t20 = rd8(edi - 2u);
            wr8(ecx - 2u, (uint8_t)t20);
            t21 = rd8(edi - 3u);
            wr8(ecx - 3u, (uint8_t)t21);
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
            t22 = rd32(sp0 + 4u);
            wr8(ecx - 4u, (uint8_t)edx);
            if (t22 != 1u)
            {
                ecx = ecx - 4u;
                ebx = ((ebx | t19 | t20) & 0xffffff00u) | t21;
                edi = edi - 3u;
                goto L_102f0d41;
            }
        }
    }
    else
    {
        if (eax <= 1u)
        {
            edi = arg2 + eax * 4u;
        }
        else
        {
            ecx = arg2 + eax * 3u;
            edi = arg2 + eax * 4u;
            wr32(sp0 + 4u, eax - 1u);
            ebx = eax - 1u;
L_102f0d11: ;
            wr8(edi - 1u, (uint8_t)edx);
            t15 = rd8(ecx - 1u);
            wr8(edi - 2u, (uint8_t)t15);
            t16 = rd8(ecx - 2u);
            wr8(edi - 3u, (uint8_t)t16);
            t17 = rd8(ecx - 3u);
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
            t18 = rd32(sp0 + 4u);
            wr8(edi - 4u, (uint8_t)t17);
            if (t18 != 1u)
            {
                ecx = ecx - 3u;
                ebx = ((ebx | t15 | t16) & 0xffffff00u) | t17;
                edi = edi - 4u;
                goto L_102f0d11;
            }
            edi = edi - 4u;
        }
        wr8(edi - 1u, (uint8_t)edx);
    }
    wr8(esi + 0xbu, 0x20u);
    eax = eax << 2u;
L_102f0e0b: ;
    wr8(esi + 0xau, 4u);
    goto L_102f0e0f;
L_102f0d67: ;
    if ((uint8_t)ecx != 0x10u) goto L_102f0e12;
    if ((arg4 & 0x80u) == 0u)
    {
        ecx = arg2 + eax * 4u;
        edi = arg2 + eax * 3u;
        if (eax != 0u)
        {
            wr32(sp0 + 0xcu, eax);
L_102f0dd2: ;
            t31 = rd8(edi - 1u);
            wr8(ecx - 1u, (uint8_t)t31);
            t32 = rd8(edi - 2u);
            wr8(ecx - 2u, (uint8_t)t32);
            t33 = rd8(edi - 3u);
            wr8(ecx - 3u, (uint8_t)t33);
            t34 = rd8(edi - 4u);
            wr8(ecx - 4u, (uint8_t)t34);
            t35 = rd8(edi - 5u);
            wr8(ecx - 5u, (uint8_t)t35);
            t36 = rd8(edi - 6u);
            wr8(ecx - 6u, (uint8_t)t36);
            t37 = rd8(sp0 + 7u);
            wr8(ecx - 7u, (uint8_t)t37);
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
            t38 = rd32(sp0 + 0xcu);
            wr8(ecx - 8u, (uint8_t)edx);
            if (t38 != 1u)
            {
                ecx = ecx - 8u;
                ebx = ((ebx | t31 | t32 | t33 | t34 | t35 | t36) & 0xffffff00u) | t37;
                edi = edi - 6u;
                goto L_102f0dd2;
            }
        }
    }
    else
    {
        ecx = arg2 + eax * 4u;
        edi = arg2 + eax * 3u;
        if (eax > 1u)
        {
            wr32(sp0 + 0xcu, eax - 1u);
            ebx = eax - 1u;
L_102f0d8e: ;
            t23 = rd8(sp0 + 7u);
            wr8(ecx - 1u, (uint8_t)t23);
            wr8(ecx - 2u, (uint8_t)edx);
            t24 = rd8(edi - 1u);
            wr8(ecx - 3u, (uint8_t)t24);
            t25 = rd8(edi - 2u);
            wr8(ecx - 4u, (uint8_t)t25);
            t26 = rd8(edi - 3u);
            wr8(ecx - 5u, (uint8_t)t26);
            t27 = rd8(edi - 4u);
            wr8(ecx - 6u, (uint8_t)t27);
            t28 = rd8(edi - 5u);
            wr8(ecx - 7u, (uint8_t)t28);
            t29 = rd8(edi - 6u);
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
            t30 = rd32(sp0 + 0xcu);
            wr8(ecx - 8u, (uint8_t)t29);
            if (t30 != 1u)
            {
                ecx = ecx - 8u;
                ebx = ((ebx | t23 | t24 | t25 | t26 | t27 | t28) & 0xffffff00u) | t29;
                edi = edi - 6u;
                goto L_102f0d8e;
            }
            ecx = ecx - 8u;
            ebx = ((ebx | t23 | t24 | t25 | t26 | t27 | t28) & 0xffffff00u) | t29;
            ebx = (ebx & 0xffffff00u) | rd8(sp0 + 7u);
        }
        wr8(ecx - 1u, (uint8_t)ebx);
        wr8(ecx - 2u, (uint8_t)edx);
    }
    wr8(esi + 0xbu, 0x40u);
    eax = eax << 3u;
    goto L_102f0e0b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f0bdf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f0bdf(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
