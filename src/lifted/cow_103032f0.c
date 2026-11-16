/* f_0x103032f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103032f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(rd32(sp0 + 4u) + 0x184u);
    t2 = rd32(rd32(sp0 + 4u) + 0x118u);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    edx = in_edx;
    ebx = t2 - 1u;
    esi = t3;
    loc_28 = t2 - 1u;
L_1030330e: ;
    if ((int32_t)rd32(esi + 0x7cu) < (int32_t)rd32(esi + 0x84u))
    {
        ecx = rd32(esi + 0x84u);
        goto L_1030332b;
    }
    ecx = rd32(esi + 0x84u);
    zf = rd32(esi + 0x7cu) == rd32(esi + 0x84u);
    if (!zf) goto L_1030333d;
    if (rd32(esi + 0x80u) > rd32(esi + 0x88u)) goto L_1030333d;
L_1030332b: ;
    g->eax = rd32(esi + 0x18cu);
    g->edx = edx;
    t19 = rd32(esi + 0x18cu);
    g->esp = sp0 - 0x34u;
    t20 = cow_thiscall(g, rd32(t19), ecx, 0);
    t21 = g->edx;
    if (t20 != 0u)
    {
        edx = t21;
        goto L_1030330e;
    }
    eax = t20;
    edx = t21;
L_10303339: ;
    g->edx = edx;
    return eax;
L_1030333d: ;
    if ((int32_t)rd32(esi + 0x20u) > 0)
    {
        edi = rd32(esi + 0xc4u);
        t4 = rd32(sp0 + 4u) + 0x48u;
        loc_8 = 0u;
        loc_18 = t4;
        loc_10 = rd32(sp0 - 0x10u);
L_1030335b: ;
        if (rd8(edi + 0x30u) != 0u)
        {
            t5 = rd32(edi + 0xcu);
            t6 = rd32(esi + 0x88u) * rd32(edi + 0xcu);
            g->eax = loc_18;
            g->edx = t6;
            g->esp = sp0 - 0x48u;
            t7 = cow_thiscall(g, rd32(rd32(esi + 4u) + 0x20u), rd32(esi + 4u), 0);
            t8 = g->edx;
            if (rd32(esi + 0x88u) >= ebx)
            {
                loc_20 = t7;
                t10 = cow_divu(g, rd32(edi + 0x20u), rd32(edi + 0xcu));
                t11 = cow_modu(g, rd32(edi + 0x20u), rd32(edi + 0xcu));
                t12 = rd32(edi + 0xcu);
                wr32(sp0 + 4u, t11);
                if (t11 != 0u)
                {
                    edx = t11;
                }
                else
                {
                    ecx = t12;
                    edx = t11;
                    wr32(sp0 + 4u, ecx);
                }
            }
            else
            {
                edx = t8;
                loc_20 = t7;
                t9 = rd32(edi + 0xcu);
                wr32(sp0 + 4u, t9);
            }
            t13 = rd32(loc_8 * 4u + rd32(esi + 0x198u) + 4u);
            t14 = rd32(arg2 + loc_8 * 4u);
            if ((int32_t)rd32(sp0 + 4u) > 0)
            {
                loc_24 = t13;
                loc_14 = t14;
                eax = rd32(edi + 0x1cu);
                ecx = 0u;
                loc_1c = 0u;
L_103033d4: ;
                t15 = rd32(ecx * 4u + loc_20);
                if (eax == 0u)
                {
                    loc_10 = 0u;
                    goto L_1030340a;
                }
                ecx = t15;
                edx = loc_20;
                ebx = 0u;
                loc_10 = 0u;
                loc_c = t15;
L_103033e6: ;
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                cow_thiscall(g, loc_24, ecx, 0);
                t16 = g->ecx;
                t17 = g->edx;
                if (loc_10 + 1u < rd32(edi + 0x1cu))
                {
                    eax = rd32(edi + 0x1cu);
                    ecx = t16;
                    edx = t17;
                    ebx = ebx + rd32(edi + 0x24u);
                    loc_10 = loc_10 + 1u;
                    loc_c = loc_c + 0x80u;
                    goto L_103033e6;
                }
                eax = rd32(edi + 0x1cu);
                loc_10 = loc_10 + 1u;
L_1030340a: ;
                t18 = loc_14 + rd32(edi + 0x24u) * 4u;
                if ((int32_t)(loc_1c + 1u) < (int32_t)rd32(sp0 + 4u))
                {
                    ecx = loc_1c + 1u;
                    loc_14 = t18;
                    loc_1c = loc_1c + 1u;
                    goto L_103033d4;
                }
                edx = loc_14;
                ebx = loc_28;
            }
        }
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(esi + 0x20u))
        {
            edi = edi + 0x54u;
            loc_8 = loc_8 + 1u;
            loc_18 = loc_18 + 4u;
            goto L_1030335b;
        }
    }
    wr32(esi + 0x88u, rd32(esi + 0x88u) + 1u);
    eax = -(rd32(esi + 0x88u) < rd32(esi + 0x118u)) + 4u;
    goto L_10303339;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103032f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103032f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
