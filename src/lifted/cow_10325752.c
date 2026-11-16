/* f_0x10325752 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10325752(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(rd32(sp0 + 4u)) != 0u)
    {
        ebx = rd32(sp0 + 4u);
        eax = in_eax;
        edx = in_edx;
        esi = rd32(sp0 + 0xcu);
        edi = rd32(sp0 + 0x10u);
L_1032576b: ;
        if (rd32(edi) == 0u) goto L_10325802;
        wr32(COW_IMG(0x109f82d8u), 0u);
        wr8(sp0 + 7u, rd8(ebx));
        wr32(sp0 + 0xcu, ebx + 1u);
        ecx = 0u;
        loc_8 = ebx + 1u;
L_10325789: ;
        t1 = rd32(sp0 + 0xcu);
        t2 = rd8(sp0 + 7u);
        wr32(sp0 + 0xcu, t1 + 1u);
        if (rd8(t1) == (uint8_t)t2)
        {
            ecx = ecx + 1u;
            edx = (edx & 0xffffff00u) | t2;
            goto L_10325789;
        }
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t2;
        wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
        if ((int8_t)edx > 100)
        {
            eax = (uint32_t)(int8_t)edx;
            goto L_1032591c;
        }
        eax = (uint32_t)(int8_t)edx;
        zf = (uint32_t)(int8_t)edx == 0x64u;
        if (zf) goto L_103258e5;
        if (eax == 0x27u) goto L_1032588d;
        if (eax == 0x41u) goto L_10325857;
        if (eax == 0x48u) goto L_1032583a;
        if (eax == 0x4du) goto L_10325807;
        if (eax == 0x61u) goto L_10325857;
L_103257d3: ;
        if ((rd8((uint8_t)edx * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
        {
            ecx = rd32(COW_IMG(0x103d0030u));
        }
        else
        {
            ecx = rd32(COW_IMG(0x103d0030u));
            wr8(rd32(esi), (uint8_t)edx);
            wr32(esi, rd32(esi) + 1u);
            wr32(edi, rd32(edi) - 1u);
            ebx = loc_8;
        }
        t14 = rd32(esi);
        wr8(t14, rd8(ebx));
        wr32(esi, rd32(esi) + 1u);
        wr32(edi, rd32(edi) - 1u);
        eax = t14;
        ebx = ebx + 1u;
L_103257f9: ;
        if (rd8(ebx) != 0u) goto L_1032576b;
    }
L_10325802: ;
    g->ebx = in_ebx;
    return;
L_10325807: ;
    if (ecx == 1u)
    {
        eax = ecx - 1u;
        goto L_10325827;
    }
    eax = ecx - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10325831;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1032581e;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_103257d3;
    eax = eax - 1u;
    wr8(sp0 + 0x10u, 0x42u);
L_10325a48: ;
    t15 = rd32(sp0 + 0x10u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t16 = cow_call_regs(g, COW_IMG(0x10325284u), g->eax, ecx, edx, 1, 5, t15, arg2, esi, edi, arg5);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_103259b3: ;
    ebx = rd32(sp0 + 0xcu);
    goto L_103257f9;
L_1032581e: ;
    wr8(sp0 + 0x10u, 0x62u);
    goto L_10325a48;
L_10325827: ;
    wr32(COW_IMG(0x109f82d8u), 1u);
L_10325831: ;
    wr8(sp0 + 0x10u, 0x6du);
    goto L_10325a48;
L_1032583a: ;
    if (ecx == 1u)
    {
        eax = ecx - 1u;
        goto L_10325844;
    }
    eax = ecx - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1032584e;
    }
    goto L_103257d3;
L_10325844: ;
    wr32(COW_IMG(0x109f82d8u), 1u);
L_1032584e: ;
    wr8(sp0 + 0x10u, 0x48u);
    goto L_10325a48;
L_10325857: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 4, ebx, COW_IMG(0x1034b404u), in_edi, in_esi);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1032586d;
    }
    eax = t3;
    edx = t4;
    ecx = COW_IMG(0x1034b404u);
    ebx = ebx + 5u;
L_10325881: ;
    wr32(sp0 + 0xcu, ebx);
L_10325884: ;
    wr8(sp0 + 0x10u, 0x70u);
    goto L_10325a48;
L_1032586d: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, COW_IMG(0x1034b404u), edx, 1, 4, ebx, COW_IMG(0x1034b400u), in_edi, in_esi);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        ecx = COW_IMG(0x1034b400u);
        edx = t6;
        goto L_10325884;
    }
    eax = t5;
    edx = t6;
    ecx = COW_IMG(0x1034b400u);
    ebx = ebx + 3u;
    goto L_10325881;
L_1032588d: ;
    if (!(ecx & 1u))
    {
        ebx = ebx + ecx;
    }
    else
    {
        ebx = ebx + ecx;
L_10325894: ;
        if (rd8(ebx) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ebx);
            goto L_103257f9;
        }
        eax = (eax & 0xffffff00u) | rd8(ebx);
        if (rd32(edi) == 0u) goto L_103257f9;
        if ((uint8_t)eax == 0x27u) goto L_103258d8;
        if ((rd8((uint8_t)eax * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
        {
            ecx = (uint8_t)eax;
            edx = rd32(COW_IMG(0x103d0030u));
        }
        else
        {
            edx = rd32(COW_IMG(0x103d0030u));
            if (rd32(edi) <= 1u)
            {
                ecx = rd32(edi);
            }
            else
            {
                t7 = rd32(esi);
                wr8(t7, (uint8_t)eax);
                wr32(esi, rd32(esi) + 1u);
                wr32(edi, rd32(edi) - 1u);
                ecx = t7;
                ebx = ebx + 1u;
            }
        }
        t8 = rd32(esi);
        wr8(t8, rd8(ebx));
        wr32(esi, rd32(esi) + 1u);
        wr32(edi, rd32(edi) - 1u);
        eax = t8;
        ebx = ebx + 1u;
        goto L_10325894;
    }
    goto L_103257f9;
L_103258d8: ;
    ebx = ebx + 1u;
    goto L_103257f9;
L_103258e5: ;
    if (ecx == 1u)
    {
        eax = ecx - 1u;
        goto L_10325909;
    }
    eax = ecx - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10325913;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10325900;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_103257d3;
    eax = eax - 1u;
    wr8(sp0 + 0x10u, 0x41u);
    goto L_10325a48;
L_10325900: ;
    wr8(sp0 + 0x10u, 0x61u);
    goto L_10325a48;
L_10325909: ;
    wr32(COW_IMG(0x109f82d8u), 1u);
L_10325913: ;
    wr8(sp0 + 0x10u, 0x64u);
    goto L_10325a48;
L_1032591c: ;
    if (eax == 0x68u) goto L_10325a2d;
    eax = eax - 0x68u;
    if (eax == 5u) goto L_10325a10;
    eax = eax - 5u;
    if (eax == 6u) goto L_103259f3;
    eax = eax - 6u;
    if (eax == 1u) goto L_10325963;
    eax = eax - 1u;
    if (eax != 5u) goto L_103257d3;
    if (ecx == 2u)
    {
        eax = ecx - 2u;
        goto L_1032595a;
    }
    eax = ecx - 2u;
    if (eax != 2u) goto L_103257d3;
    eax = eax - 2u;
    wr8(sp0 + 0x10u, 0x59u);
    goto L_10325a48;
L_1032595a: ;
    wr8(sp0 + 0x10u, 0x79u);
    goto L_10325a48;
L_10325963: ;
    if ((int32_t)rd32(arg2 + 8u) > 11)
    {
        eax = rd32(arg5 + 0x9cu);
    }
    else
    {
        eax = rd32(arg5 + 0x98u);
    }
    if (ecx != 1u) goto L_103259bb;
    if (rd32(edi) == 0u) goto L_103259bb;
    if ((rd8(rd8(eax) * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
    {
        edx = rd8(eax);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        if (rd32(edi) <= 1u)
        {
            edx = rd32(edi);
        }
        else
        {
            t9 = rd32(esi);
            wr8(t9, (uint8_t)ecx);
            wr32(esi, rd32(esi) + 1u);
            wr32(edi, rd32(edi) - 1u);
            eax = eax + 1u;
            edx = t9;
        }
    }
    t10 = rd8(eax);
    wr8(rd32(esi), (uint8_t)t10);
    wr32(esi, rd32(esi) + 1u);
    wr32(edi, rd32(edi) - 1u);
    eax = (eax & 0xffffff00u) | t10;
    goto L_103259b3;
L_103259bb: ;
    if (rd8(eax) == 0u) goto L_103259b3;
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if (rd32(edi) == 0u) goto L_103259b3;
    if ((rd8((uint8_t)ecx * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
    {
        edx = (uint8_t)ecx;
    }
    else
    {
        if (rd32(edi) <= 1u)
        {
            edx = rd32(edi);
        }
        else
        {
            t11 = rd32(esi);
            wr8(t11, (uint8_t)ecx);
            wr32(esi, rd32(esi) + 1u);
            wr32(edi, rd32(edi) - 1u);
            eax = eax + 1u;
            edx = t11;
        }
    }
    t12 = rd32(esi);
    t13 = rd8(eax);
    wr8(t12, (uint8_t)t13);
    wr32(esi, rd32(esi) + 1u);
    wr32(edi, rd32(edi) - 1u);
    eax = eax + 1u;
    ecx = t12;
    edx = (edx & 0xffffff00u) | t13;
    goto L_103259bb;
L_103259f3: ;
    if (ecx == 1u)
    {
        eax = ecx - 1u;
        goto L_10325a00;
    }
    eax = ecx - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10325a0a;
    }
    goto L_103257d3;
L_10325a00: ;
    wr32(COW_IMG(0x109f82d8u), 1u);
L_10325a0a: ;
    wr8(sp0 + 0x10u, 0x53u);
    goto L_10325a48;
L_10325a10: ;
    if (ecx == 1u)
    {
        eax = ecx - 1u;
        goto L_10325a1d;
    }
    eax = ecx - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10325a27;
    }
    goto L_103257d3;
L_10325a1d: ;
    wr32(COW_IMG(0x109f82d8u), 1u);
L_10325a27: ;
    wr8(sp0 + 0x10u, 0x4du);
    goto L_10325a48;
L_10325a2d: ;
    if (ecx == 1u)
    {
        eax = ecx - 1u;
        goto L_10325a3a;
    }
    eax = ecx - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10325a44;
    }
    goto L_103257d3;
L_10325a3a: ;
    wr32(COW_IMG(0x109f82d8u), 1u);
L_10325a44: ;
    wr8(sp0 + 0x10u, 0x49u);
    goto L_10325a48;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325752(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10325752(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
