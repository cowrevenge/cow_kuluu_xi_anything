/* f_0x1031f1c8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031f1c8(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x5cu, 0x480u);
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t1 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x480u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 != 0u)
    {
        ecx = 0x480u;
        edx = t2;
        esi = t1;
    }
    else
    {
        edx = t2;
        esi = t1;
        wr32(sp0 - 0x5cu, 0x1bu);
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x1031680cu), 1, 0x1bu);
        t3 = g->edx;
        ecx = 0x1bu;
        edx = t3;
    }
    wr32(COW_IMG(0x109f82e0u), esi);
    wr32(COW_IMG(0x109f83e0u), 0x20u);
    eax = esi + 0x480u;
L_1031f200: ;
    if (esi >= eax) goto L_1031f222;
    wr8(esi + 4u, 0u);
    wr32(esi, 0xffffffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 5u, 0xau);
    eax = rd32(COW_IMG(0x109f82e0u)) + 0x480u;
    esi = esi + 0x24u;
    goto L_1031f200;
L_1031f222: ;
    wr32(sp0 - 0x5cu, sp0 - 0x4cu);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, rd32(COW_IMG(0x10329204u)), ecx, 1, sp0 - 0x4cu);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd16(sp0 - 0x1au) == 0u)
    {
        edx = t5;
    }
    else
    {
        ecx = t4;
        edx = t5;
        if (rd32(sp0 - 0x18u) != 0u)
        {
            eax = rd32(sp0 - 0x18u);
            t6 = eax + rd32(eax) + 4u;
            wr32(sp0 - 8u, t6);
            if ((int32_t)rd32(eax) < 2048)
            {
                ebx = eax + 4u;
                edi = rd32(eax);
                loc_8 = t6;
            }
            else
            {
                ebx = eax + 4u;
                loc_8 = t6;
                edi = 0x800u;
            }
            if ((int32_t)rd32(COW_IMG(0x109f83e0u)) < (int32_t)edi)
            {
                esi = COW_IMG(0x109f82e4u);
L_1031f265: ;
                wr32(sp0 - 0x5cu, 0x480u);
                g->edx = edx;
                g->esp = sp0 - 0x50u;
                t7 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x480u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
                t8 = g->edx;
                if (t7 == 0u)
                {
                    edx = t8;
                    goto L_1031f2b0;
                }
                eax = t7;
                edx = t8;
                wr32(COW_IMG(0x109f83e0u), rd32(COW_IMG(0x109f83e0u)) + 0x20u);
                wr32(esi, eax);
                ecx = eax + 0x480u;
L_1031f283: ;
                if (eax >= ecx) goto L_1031f2a3;
                wr8(eax + 4u, 0u);
                wr32(eax, 0xffffffffu);
                wr32(eax + 8u, 0u);
                wr8(eax + 5u, 0xau);
                eax = eax + 0x24u;
                ecx = rd32(esi) + 0x480u;
                goto L_1031f283;
            }
L_1031f2b6: ;
            if ((int32_t)edi <= 0) goto L_1031f308;
            esi = 0u;
L_1031f2bc: ;
            if (rd32(loc_8) != 0xffffffffu)
            {
                eax = loc_8;
                ecx = rd32(loc_8);
                if (rd8(ebx) & 1u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ebx);
                    if ((eax & 8u) != 0u) goto L_1031f2db;
                    wr32(sp0 - 0x5cu, ecx);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x58u;
                    t9 = cow_thiscall(g, rd32(COW_IMG(0x103290e8u)), ecx, 1, ecx);
                    t10 = g->edx;
                    if (t9 == 0u)
                    {
                        edx = t10;
                        goto L_1031f2fe;
                    }
                    edx = t10;
L_1031f2db: ;
                    t11 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)esi >> 5u) * 4u);
                    t12 = rd32(loc_8);
                    wr32((esi & 0x1fu) * 0x24u + t11, t12);
                    wr8((esi & 0x1fu) * 0x24u + t11 + 4u, rd8(ebx));
                }
            }
L_1031f2fe: ;
            wr32(sp0 - 8u, loc_8 + 4u);
            if ((int32_t)(esi + 1u) < (int32_t)edi)
            {
                ebx = ebx + 1u;
                esi = esi + 1u;
                loc_8 = loc_8 + 4u;
                goto L_1031f2bc;
            }
        }
    }
L_1031f308: ;
    ebx = 0u;
L_1031f30a: ;
    if (rd32(ebx * 0x24u + rd32(COW_IMG(0x109f82e0u))) != 0xffffffffu)
    {
        eax = ebx * 9u;
        ecx = rd32(COW_IMG(0x109f82e0u));
        esi = ebx * 0x24u + rd32(COW_IMG(0x109f82e0u));
        wr8(esi + 4u, rd8(esi + 4u) | 0x80u);
    }
    else
    {
        ecx = rd32(COW_IMG(0x109f82e0u));
        esi = ebx * 0x24u + rd32(COW_IMG(0x109f82e0u));
        wr8(esi + 4u, 0x81u);
        if (ebx != 0u)
        {
            eax = -(ebx != 1u) - 0xbu;
        }
        else
        {
            wr32(sp0 - 0x5cu, 0xfffffff6u);
            eax = 0xfffffff6u;
        }
        wr32(sp0 - 0x5cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t13 = cow_thiscall(g, rd32(COW_IMG(0x103292bcu)), ecx, 1, eax);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 == 0xffffffffu)
        {
            eax = t13;
            ecx = t14;
            edx = t15;
            goto L_1031f358;
        }
        eax = t13;
        ecx = t14;
        edx = t15;
        edi = t13;
        wr32(sp0 - 0x5cu, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t16 = cow_thiscall(g, rd32(COW_IMG(0x103290e8u)), ecx, 1, edi);
        t17 = g->ecx;
        t18 = g->edx;
        if (t16 == 0u)
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            goto L_1031f358;
        }
        eax = t16;
        ecx = t17;
        edx = t18;
        wr32(esi, edi);
        if ((uint8_t)eax != 2u)
        {
            eax = (uint8_t)eax;
            goto L_1031f35e;
        }
        eax = (uint8_t)eax;
L_1031f358: ;
        wr8(esi + 4u, rd8(esi + 4u) | 0x40u);
    }
L_1031f36d: ;
    if ((int32_t)(ebx + 1u) < 3)
    {
        ebx = ebx + 1u;
        goto L_1031f30a;
    }
    wr32(sp0 - 0x5cu, rd32(COW_IMG(0x109f83e0u)));
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, rd32(COW_IMG(0x103292b8u)), ecx, 1, rd32(COW_IMG(0x109f83e0u)));
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_1031f2a3: ;
    if ((int32_t)rd32(COW_IMG(0x109f83e0u)) < (int32_t)edi)
    {
        esi = esi + 4u;
        goto L_1031f265;
    }
    goto L_1031f2b6;
L_1031f2b0: ;
    edi = rd32(COW_IMG(0x109f83e0u));
    goto L_1031f2b6;
L_1031f35e: ;
    if (eax == 3u)
    {
        wr8(esi + 4u, rd8(esi + 4u) | 8u);
    }
    goto L_1031f36d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f1c8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031f1c8(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
