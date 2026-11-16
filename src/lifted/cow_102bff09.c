/* f_0x102bff09 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102bff09(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u));
    t2 = rd8(rd32(sp0 + 4u) + 8u);
    t3 = rd32(sp0 + 4u);
    wr8(sp0 + 7u, (uint8_t)(arg3 >> 8u));
    if ((uint8_t)t2 != 0u)
    {
        eax = t1;
        ecx = (self & 0xffffff00u) | t2;
        esi = t3;
        goto L_102c000b;
    }
    eax = t1;
    ecx = (self & 0xffffff00u) | t2;
    esi = t3;
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        goto L_102bff82;
    }
    if ((rd8(sp0 + 0x10u) & 0x80u) == 0u)
    {
        ecx = eax + rd32(sp0 + 8u);
        edi = eax * 2u + rd32(sp0 + 8u);
        if (eax != 0u)
        {
            wr32(sp0 + 8u, eax);
            ebx = arg3 >> 8u;
L_102bff65: ;
            t6 = rd8(ecx - 1u);
            wr8(edi - 1u, (uint8_t)t6);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t7 = rd32(sp0 + 8u);
            wr8(edi - 2u, (uint8_t)arg3);
            if (t7 != 1u)
            {
                ecx = ecx - 1u;
                ebx = (ebx & 0xffffff00u) | t6;
                edi = edi - 2u;
                goto L_102bff65;
            }
        }
    }
    else
    {
        ecx = eax + rd32(sp0 + 8u);
        edi = eax * 2u + rd32(sp0 + 8u);
        if (eax > 1u)
        {
            wr32(sp0 + 8u, eax - 1u);
            ebx = eax - 1u;
L_102bff4b: ;
            wr8(edi - 1u, (uint8_t)arg3);
            t4 = rd8(ecx - 1u);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t5 = rd32(sp0 + 8u);
            wr8(edi - 2u, (uint8_t)t4);
            if (t5 != 1u)
            {
                ecx = ecx - 1u;
                ebx = (ebx & 0xffffff00u) | t4;
                edi = edi - 2u;
                goto L_102bff4b;
            }
            edi = edi - 2u;
        }
        wr8(edi - 1u, (uint8_t)arg3);
    }
    wr8(esi + 0xau, 2u);
    wr8(esi + 0xbu, 0x10u);
    eax = eax * 2u;
L_102c0138: ;
    wr32(esi + 4u, eax);
L_102c013b: ;
    return;
L_102bff82: ;
    if ((uint8_t)ecx != 0x10u) goto L_102c013b;
    if ((rd8(sp0 + 0x10u) & 0x80u) == 0u)
    {
        ecx = rd32(sp0 + 8u);
        wr32(sp0 + 8u, eax + ecx);
        if (eax != 0u)
        {
            edi = eax * 2u + ecx;
            wr32(sp0 + 0x10u, eax);
L_102bffda: ;
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t11 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, t11 - 1u);
            wr8(edi - 1u, rd8(t11));
            wr8(edi - 2u, rd8(rd32(sp0 + 8u)));
            wr8(edi - 3u, (uint8_t)(arg3 >> 8u));
            wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) - 1u);
            t12 = rd32(sp0 + 0x10u);
            wr8(edi - 4u, (uint8_t)arg3);
            if (t12 != 1u)
            {
                edi = edi - 4u;
                goto L_102bffda;
            }
        }
    }
    else
    {
        ecx = rd32(sp0 + 8u);
        wr32(sp0 + 0x10u, eax + ecx);
        if (eax <= 1u)
        {
            ecx = eax * 2u + ecx;
            ebx = arg3 >> 8u;
        }
        else
        {
            ecx = eax * 2u + ecx;
            wr32(sp0 + 8u, eax - 1u);
            ebx = arg3 >> 8u;
            edi = rd32(sp0 + 0x10u);
L_102bffa9: ;
            wr8(ecx - 1u, (uint8_t)ebx);
            wr8(ecx - 2u, (uint8_t)arg3);
            t8 = rd8(edi - 1u);
            wr8(ecx - 3u, (uint8_t)t8);
            t9 = rd8(edi - 2u);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t10 = rd32(sp0 + 8u);
            wr8(ecx - 4u, (uint8_t)t9);
            if (t10 != 1u)
            {
                ecx = ecx - 4u;
                ebx = ((ebx | t8 | t9) & 0xffffff00u) | rd8(sp0 + 7u);
                edi = edi - 2u;
                goto L_102bffa9;
            }
            ecx = ecx - 4u;
            ebx = ((ebx | t8 | t9) & 0xffffff00u) | rd8(sp0 + 7u);
        }
        wr8(ecx - 1u, (uint8_t)ebx);
        wr8(ecx - 2u, (uint8_t)arg3);
    }
    wr8(esi + 0xau, 2u);
    wr8(esi + 0xbu, 0x20u);
    eax = eax << 2u;
    goto L_102c0138;
L_102c000b: ;
    if ((uint8_t)ecx != 2u) goto L_102c013b;
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        goto L_102c0090;
    }
    if ((rd8(sp0 + 0x10u) & 0x80u) == 0u)
    {
        ecx = rd32(sp0 + 8u);
        if (eax != 0u)
        {
            edi = eax * 3u + ecx;
            ecx = eax * 4u + ecx;
            wr32(sp0 + 8u, eax);
            ebx = arg3 >> 8u;
L_102c006a: ;
            t17 = rd8(edi - 1u);
            wr8(ecx - 1u, (uint8_t)t17);
            t18 = rd8(edi - 2u);
            wr8(ecx - 2u, (uint8_t)t18);
            t19 = rd8(edi - 3u);
            wr8(ecx - 3u, (uint8_t)t19);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t20 = rd32(sp0 + 8u);
            wr8(ecx - 4u, (uint8_t)arg3);
            if (t20 != 1u)
            {
                ecx = ecx - 4u;
                ebx = ((ebx | t17 | t18) & 0xffffff00u) | t19;
                edi = edi - 3u;
                goto L_102c006a;
            }
        }
    }
    else
    {
        ecx = rd32(sp0 + 8u);
        if (eax <= 1u)
        {
            edi = eax * 4u + ecx;
        }
        else
        {
            edi = eax * 4u + ecx;
            ecx = eax * 3u + ecx;
            wr32(sp0 + 8u, eax - 1u);
            ebx = eax - 1u;
L_102c003a: ;
            wr8(edi - 1u, (uint8_t)arg3);
            t13 = rd8(ecx - 1u);
            wr8(edi - 2u, (uint8_t)t13);
            t14 = rd8(ecx - 2u);
            wr8(edi - 3u, (uint8_t)t14);
            t15 = rd8(ecx - 3u);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t16 = rd32(sp0 + 8u);
            wr8(edi - 4u, (uint8_t)t15);
            if (t16 != 1u)
            {
                ecx = ecx - 3u;
                ebx = ((ebx | t13 | t14) & 0xffffff00u) | t15;
                edi = edi - 4u;
                goto L_102c003a;
            }
            edi = edi - 4u;
        }
        wr8(edi - 1u, (uint8_t)arg3);
    }
    wr8(esi + 0xbu, 0x20u);
    eax = eax << 2u;
L_102c0134: ;
    wr8(esi + 0xau, 4u);
    goto L_102c0138;
L_102c0090: ;
    if ((uint8_t)ecx != 0x10u) goto L_102c013b;
    if ((rd8(sp0 + 0x10u) & 0x80u) == 0u)
    {
        ecx = eax * 4u + rd32(sp0 + 8u);
        edi = eax * 3u + rd32(sp0 + 8u);
        if (eax != 0u)
        {
            wr32(sp0 + 8u, eax);
            ebx = arg3 >> 8u;
L_102c00fb: ;
            t29 = rd8(edi - 1u);
            wr8(ecx - 1u, (uint8_t)t29);
            t30 = rd8(edi - 2u);
            wr8(ecx - 2u, (uint8_t)t30);
            t31 = rd8(edi - 3u);
            wr8(ecx - 3u, (uint8_t)t31);
            t32 = rd8(edi - 4u);
            wr8(ecx - 4u, (uint8_t)t32);
            t33 = rd8(edi - 5u);
            wr8(ecx - 5u, (uint8_t)t33);
            t34 = rd8(edi - 6u);
            wr8(ecx - 6u, (uint8_t)t34);
            t35 = rd8(sp0 + 7u);
            wr8(ecx - 7u, (uint8_t)t35);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t36 = rd32(sp0 + 8u);
            wr8(ecx - 8u, (uint8_t)arg3);
            if (t36 != 1u)
            {
                ecx = ecx - 8u;
                ebx = ((ebx | t29 | t30 | t31 | t32 | t33 | t34) & 0xffffff00u) | t35;
                edi = edi - 6u;
                goto L_102c00fb;
            }
        }
    }
    else
    {
        ecx = eax * 4u + rd32(sp0 + 8u);
        edi = eax * 3u + rd32(sp0 + 8u);
        if (eax <= 1u)
        {
            ebx = arg3 >> 8u;
        }
        else
        {
            wr32(sp0 + 8u, eax - 1u);
            ebx = eax - 1u;
L_102c00b7: ;
            t21 = rd8(sp0 + 7u);
            wr8(ecx - 1u, (uint8_t)t21);
            wr8(ecx - 2u, (uint8_t)arg3);
            t22 = rd8(edi - 1u);
            wr8(ecx - 3u, (uint8_t)t22);
            t23 = rd8(edi - 2u);
            wr8(ecx - 4u, (uint8_t)t23);
            t24 = rd8(edi - 3u);
            wr8(ecx - 5u, (uint8_t)t24);
            t25 = rd8(edi - 4u);
            wr8(ecx - 6u, (uint8_t)t25);
            t26 = rd8(edi - 5u);
            wr8(ecx - 7u, (uint8_t)t26);
            t27 = rd8(edi - 6u);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t28 = rd32(sp0 + 8u);
            wr8(ecx - 8u, (uint8_t)t27);
            if (t28 != 1u)
            {
                ecx = ecx - 8u;
                ebx = ((ebx | t21 | t22 | t23 | t24 | t25 | t26) & 0xffffff00u) | t27;
                edi = edi - 6u;
                goto L_102c00b7;
            }
            ecx = ecx - 8u;
            ebx = ((ebx | t21 | t22 | t23 | t24 | t25 | t26) & 0xffffff00u) | t27;
            ebx = (ebx & 0xffffff00u) | rd8(sp0 + 7u);
        }
        wr8(ecx - 1u, (uint8_t)ebx);
        wr8(ecx - 2u, (uint8_t)arg3);
    }
    wr8(esi + 0xbu, 0x40u);
    eax = eax << 3u;
    goto L_102c0134;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bff09(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bff09(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
