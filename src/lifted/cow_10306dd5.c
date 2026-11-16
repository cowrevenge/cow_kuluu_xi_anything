/* f_0x10306dd5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10306dd5(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(sp0 + 0xcu) < (int32_t)arg4)
    {
        eax = rd32(sp0 + 0xcu);
        edi = arg2 + eax * 0x20u + 0xcu;
        loc_8 = eax * 2u;
L_10306e00: ;
        if ((int32_t)loc_8 > (int32_t)arg4)
        {
            if ((int32_t)loc_8 <= 0)
            {
                esi = 0u;
            }
            else
            {
                ecx = arg2 + 0x18u;
                ebx = 0u;
                esi = 0u;
                loc_c = eax;
L_10306e3d: ;
                if ((int32_t)rd32(ecx) > (int32_t)ebx)
                {
                    edx = rd32(ecx);
                    ebx = edx;
                    esi = ecx - 0x18u;
                }
                if (loc_c != 1u)
                {
                    ecx = ecx + 0x20u;
                    loc_c = loc_c - 1u;
                    goto L_10306e3d;
                }
            }
        }
        else
        {
            edx = loc_8;
            if ((int32_t)edx <= 0)
            {
                esi = 0u;
            }
            else
            {
                ecx = arg2 + 0x1cu;
                ebx = 0u;
                esi = 0u;
                loc_c = eax;
L_10306e16: ;
                if ((int32_t)rd32(ecx) > (int32_t)ebx)
                {
                    edx = rd32(ecx);
                    if ((int32_t)rd32(ecx - 4u) > 0)
                    {
                        ebx = edx;
                        esi = ecx - 0x1cu;
                    }
                }
                if (loc_c != 1u)
                {
                    ecx = ecx + 0x20u;
                    loc_c = loc_c - 1u;
                    goto L_10306e16;
                }
            }
        }
        if (esi == 0u) goto L_10306f23;
        t1 = rd32(esi + 4u);
        wr32(edi - 8u, t1);
        t2 = rd32(esi + 0xcu);
        wr32(edi, t2);
        t3 = rd32(esi + 0x14u);
        wr32(edi + 8u, t3);
        wr32(edi - 0xcu, rd32(esi));
        t4 = rd32(esi + 8u);
        wr32(edi - 4u, t4);
        t5 = rd32(esi + 0x10u);
        wr32(edi + 4u, t5);
        if ((int32_t)(rd32(esi + 4u) * 0x10u - rd32(esi) * 0x10u) <= (int32_t)(rd32(esi + 0xcu) * 0xcu - rd32(esi + 8u) * 0xcu))
        {
            eax = rd32(esi + 0xcu) * 0xcu - rd32(esi + 8u) * 0xcu;
            ecx = rd32(esi + 4u) * 0x10u - rd32(esi) * 0x10u;
            edx = rd32(esi + 0x14u) * 8u - rd32(esi + 0x10u) * 8u;
            ebx = 1u;
        }
        else
        {
            ecx = rd32(esi + 4u) * 0x10u - rd32(esi) * 0x10u;
            edx = rd32(esi + 0x14u) * 8u - rd32(esi + 0x10u) * 8u;
            eax = ecx;
            ebx = 0u;
        }
        if ((int32_t)edx > (int32_t)eax)
        {
            ebx = 2u;
        }
        if (ebx == 0u)
        {
            t12 = (uint32_t)((int32_t)(rd32(esi) + rd32(esi + 4u) - (uint32_t)((int32_t)(rd32(esi) + rd32(esi + 4u)) >> 0x1fu)) >> 1u);
            t13 = rd32(esi);
            t14 = rd32(esi + 4u);
            wr32(esi + 4u, t12);
            wr32(edi - 0xcu, t12 + 1u);
            ecx = t13;
            edx = (uint32_t)((int32_t)(t13 + t14) >> 0x1fu);
        }
        else
        {
            if (ebx == 1u)
            {
                t9 = (uint32_t)((int32_t)(rd32(esi + 0xcu) + rd32(esi + 8u) - (uint32_t)((int32_t)(rd32(esi + 0xcu) + rd32(esi + 8u)) >> 0x1fu)) >> 1u);
                t10 = rd32(esi + 8u);
                t11 = rd32(esi + 0xcu);
                wr32(esi + 0xcu, t9);
                wr32(edi - 4u, t9 + 1u);
                ecx = t10;
                edx = (uint32_t)((int32_t)(t11 + t10) >> 0x1fu);
            }
            else
            {
                ebx = ebx - 1u;
                if (ebx == 1u)
                {
                    t6 = (uint32_t)((int32_t)(rd32(esi + 0x10u) + rd32(esi + 0x14u) - (uint32_t)((int32_t)(rd32(esi + 0x10u) + rd32(esi + 0x14u)) >> 0x1fu)) >> 1u);
                    t7 = rd32(esi + 0x10u);
                    t8 = rd32(esi + 0x14u);
                    wr32(esi + 0x14u, t6);
                    wr32(edi + 4u, t6 + 1u);
                    ecx = t7;
                    edx = (uint32_t)((int32_t)(t7 + t8) >> 0x1fu);
                }
            }
        }
        g->esi = esi;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10306a9du), arg1, g->ecx, g->edx, 1, 0);
        t15 = g->ecx;
        t16 = g->edx;
        g->esi = edi - 0xcu;
        cow_call_regs(g, COW_IMG(0x10306a9du), arg1, g->ecx, g->edx, 1, 0);
        t17 = rd32(sp0 + 0xcu) + 1u;
        t18 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t17);
        if ((int32_t)(t18 + 1u) < (int32_t)arg4)
        {
            eax = t17;
            edi = edi + 0x20u;
            loc_8 = loc_8 + 2u;
            goto L_10306dfd;
        }
L_10306f23: ;
    }
    g->esi = in_esi;
    return;
L_10306dfd: ;
    goto L_10306e00;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10306dd5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10306dd5(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
