/* f_0x1017a950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1017a950(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x24u) <= 0)
    {
        edx = rd32(rd32(sp0 + 4u) + 0x24u);
        edi = rd32(sp0 + 4u);
    }
    else
    {
        ecx = rd32(rd32(sp0 + 4u) + 0x28u);
        edi = rd32(sp0 + 4u);
        eax = 0u;
        ecx = ecx + 0xcu;
L_1017a96c: ;
        wr8(ecx, 0u);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(edi + 0x24u))
        {
            eax = eax + 1u;
            ecx = ecx + 0x16cu;
            goto L_1017a96c;
        }
        edx = rd32(edi + 0x24u);
    }
    t1 = rd32(edi + 0x24u);
    t2 = rd32(edi + 0x28u);
    wr32(edi + 0x40u, 0u);
    if ((int32_t)t1 > 0)
    {
        eax = t1;
        ecx = t2;
        ebx = 0u;
        esi = ecx + 0xc0u;
L_1017a992: ;
        if (rd32(esi) != 0u)
        {
            ecx = rd32(esi);
            if (rd8(esi - 0xb4u) != 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(esi - 0xb4u);
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(esi - 0xb4u);
                if ((uint8_t)ecx == 0x5fu) goto L_1017a9b2;
                ecx = (uint8_t)ecx;
                if (ecx != 0x40u) goto L_1017a9df;
L_1017a9b2: ;
                t3 = rd32(edi + 0x40u) + 1u;
                t4 = rd32(edi + 0x28u);
                wr32(edi + 0x40u, t3);
                if ((int32_t)eax <= 0)
                {
                    edx = t4;
                }
                else
                {
                    edx = t4;
                    eax = edx + 0xcu;
                    ecx = 0u;
L_1017a9c5: ;
                    if (rd32(esi) == rd32(eax + 0xb4u))
                    {
                        wr8(eax, 1u);
                    }
                    if ((int32_t)(ecx + 1u) < (int32_t)rd32(edi + 0x24u))
                    {
                        eax = eax + 0x16cu;
                        ecx = ecx + 1u;
                        goto L_1017a9c5;
                    }
                    edx = rd32(edi + 0x24u);
                }
            }
        }
L_1017a9df: ;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(edi + 0x24u))
        {
            eax = rd32(edi + 0x24u);
            ebx = ebx + 1u;
            esi = esi + 0x16cu;
            goto L_1017a992;
        }
    }
    t5 = rd32(edi + 0x40u);
    wr32(edi + 0x3cu, 0u);
    if (t5 != 0u)
    {
        esi = t5;
        t6 = esi * 0x1acu + 4u;
        g->eax = esi * 0x6cu - esi;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t7 = cow_cdecl(g, COW_IMG(0x1002c8c0u), 1, t6);
        t8 = g->edx;
        if (t7 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t7;
            edx = t8;
            wr32(eax, esi);
            if ((int32_t)(esi - 1u) < 0)
            {
                ebp = eax + 4u;
            }
            else
            {
                ebx = eax + 4u;
                ebp = eax + 4u;
                eax = esi - 1u;
                esi = eax + 1u;
L_1017aa2b: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t9 = cow_thiscall(g, COW_IMG(0x10170ff0u), ebx, 0);
                t10 = g->edx;
                if (esi != 1u)
                {
                    eax = t9;
                    edx = t10;
                    ebx = ebx + 0x1acu;
                    esi = esi - 1u;
                    goto L_1017aa2b;
                }
            }
            eax = ebp;
        }
        wr32(edi + 0x3cu, eax);
        if (eax != 0u)
        {
            if ((int32_t)rd32(edi + 0x24u) > 0)
            {
                ecx = rd32(edi + 0x28u);
                eax = 0u;
                ecx = ecx + 0xcu;
L_1017aa5b: ;
                wr8(ecx, 0u);
                if ((int32_t)(eax + 1u) < (int32_t)rd32(edi + 0x24u))
                {
                    eax = eax + 1u;
                    ecx = ecx + 0x16cu;
                    goto L_1017aa5b;
                }
            }
            t11 = rd32(edi + 0x3cu);
            if ((int32_t)rd32(edi + 0x24u) > 0)
            {
                eax = rd32(edi + 0x28u);
                edx = t11;
                loc_14 = t11;
                esi = eax + 0xc0u;
                loc_4 = 0u;
                loc_10 = eax + 0xc0u;
L_1017aa93: ;
                if (rd8(esi - 0xb4u) == 0u)
                {
                    if ((uint8_t)rd32(esi) == 0x5fu)
                    {
                        ecx = rd32(esi);
                        goto L_1017aab8;
                    }
                    eax = (uint8_t)rd32(esi);
                    ecx = rd32(esi);
                    if (eax != 0x40u) goto L_1017aba6;
L_1017aab8: ;
                    wr32(edx + 4u, ecx);
                    t12 = rd32(edi + 0x28u);
                    if ((int32_t)rd32(edi + 0x24u) > 0)
                    {
                        eax = t12;
                        loc_8 = t12;
                        wr32(sp0 + 4u, edx + 0x198u);
                        ebx = 0u;
                        ebp = edx + 0x38u;
                        esi = eax + 0x1cu;
                        loc_c = 0u;
L_1017aae3: ;
                        if (rd32(loc_10) == rd32(esi + 0xa4u))
                        {
                            if ((int32_t)ebx < 4)
                            {
                                wr32(rd32(sp0 + 4u), eax);
                                wr32(ebp - 0x30u, rd32(esi));
                                t13 = rd32(esi + 4u);
                                wr32(ebp - 0x2cu, t13);
                                t14 = rd32(esi + 8u);
                                wr32(ebp - 0x28u, t14);
                                t15 = rd32(esi + 0xcu);
                                wr32(ebp, t15);
                                t16 = rd32(esi + 0x10u);
                                wr32(ebp + 4u, t16);
                                t17 = rd32(esi + 0x14u);
                                wr32(ebp + 8u, t17);
                                t18 = rd32(esi + 0x18u);
                                wr32(ebp + 0x30u, t18);
                                t19 = rd32(esi + 0x1cu);
                                wr32(ebp + 0x34u, t19);
                                t20 = rd32(esi + 0x20u);
                                wr32(ebp + 0x38u, t20);
                                g->esp = sp0 - 0x24u;
                                cow_thiscall(g, COW_IMG(0x101714c0u), loc_14, 1, ebx);
                                eax = loc_8;
                                edx = loc_14;
                            }
                            t21 = rd32(sp0 + 4u) + 4u;
                            wr32(sp0 + 4u, t21);
                            wr8(esi - 0x10u, 1u);
                            ebx = ebx + 1u;
                            ebp = ebp + 0xcu;
                        }
                        if ((int32_t)(loc_c + 1u) < (int32_t)rd32(edi + 0x24u))
                        {
                            esi = esi + 0x16cu;
                            loc_8 = eax + 0x16cu;
                            eax = eax + 0x16cu;
                            loc_c = loc_c + 1u;
                            goto L_1017aae3;
                        }
                        if (ebx != 0u)
                        {
                            if ((int32_t)ebx >= 4)
                            {
                                ebx = 4u;
                            }
                            wr8(edx + 0x1a9u, (uint8_t)ebx);
                        }
                    }
                    esi = loc_10;
                    loc_14 = edx + 0x1acu;
                    edx = edx + 0x1acu;
                }
L_1017aba6: ;
                if ((int32_t)(loc_4 + 1u) < (int32_t)rd32(edi + 0x24u))
                {
                    eax = loc_4 + 1u;
                    loc_4 = loc_4 + 1u;
                    loc_10 = esi + 0x16cu;
                    esi = esi + 0x16cu;
                    goto L_1017aa93;
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017a950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
