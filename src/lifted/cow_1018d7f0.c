/* f_0x1018d7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1018d7f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg4 > 15) goto L_1018d93a;
    if (arg4 == 0u) goto L_1018d93a;
    if ((int32_t)rd32(self + 0x88u) <= 0)
    {
        eax = arg4;
        edx = in_edx;
        esi = 0u;
        goto L_1018d861;
    }
    ecx = rd32(self + 0x88u);
    edx = in_edx;
    ebp = 0u;
    esi = 0u;
    edi = self + 0x8cu;
L_1018d825: ;
    if ((int32_t)esi >= (int32_t)arg2) goto L_1018d869;
    g->ebx = self;
    g->eax = arg3;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 5, arg3, edi, arg4, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        g->eax = eax;
        g->ecx = self;
        g->edx = arg1;
        g->esp = sp0 - 0x10u;
        t4 = cow_stdcall(g, COW_IMG(0x1018db10u), 4, arg1, esi, arg2, edi);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
        esi = esi + t4;
    }
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(self + 0x88u))
    {
        ebp = ebp + 1u;
        edi = edi + 0x10u;
        goto L_1018d821;
    }
    eax = rd32(self + 0x88u);
L_1018d861: ;
    if ((int32_t)esi < (int32_t)arg2) goto L_1018d872;
L_1018d869: ;
    g->ebx = in_ebx;
    return esi;
L_1018d821: ;
    goto L_1018d825;
L_1018d872: ;
    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x101598b0u), ecx, 0);
        t8 = g->edx;
        if (t7 == 0u)
        {
            edx = t8;
        }
        else
        {
            eax = t7;
            edx = t8;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
            t10 = g->edx;
            if (rd16(t9 + 0x210u) != 0u)
            {
                edx = t10;
                edi = t9 + 0x214u;
            }
            else
            {
                eax = t9;
                edx = t10;
                edi = eax + 0x7cu;
            }
            if (edi != 0u)
            {
                g->ebx = self;
                g->eax = arg4;
                g->esp = sp0 - 8u;
                t11 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 5, arg3, edi, arg4, in_edi, in_esi);
                t12 = g->edx;
                if (t11 != 0u)
                {
                    edx = t12;
                }
                else
                {
                    eax = t11;
                    g->eax = eax;
                    g->edx = arg1;
                    g->esp = sp0 - 0x10u;
                    t13 = cow_stdcall(g, COW_IMG(0x1018db10u), 4, arg1, esi, arg2, edi);
                    t14 = g->edx;
                    edx = t14;
                    esi = esi + t13;
                }
            }
        }
    }
    if ((int32_t)esi < (int32_t)arg2) goto L_1018d8dc;
    g->ebx = in_ebx;
    return esi;
L_1018d8dc: ;
    if (rd32(COW_IMG(0x106643a8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106643a8u));
        ebp = 0u;
L_1018d8e7: ;
        if ((int32_t)esi >= (int32_t)arg2) goto L_1018d931;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t15 = cow_stdcall(g, COW_IMG(0x10202c90u), 1, ebp);
        t16 = g->edx;
        if (t15 == 0u)
        {
            eax = t15;
            edx = t16;
        }
        else
        {
            edx = t16;
            edi = t15;
            g->ebx = self;
            g->eax = arg4;
            g->esp = sp0 - 8u;
            t17 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, edx, 1, 5, arg3, edi, arg4, in_edi, in_esi);
            t18 = g->edx;
            if (t17 != 0u)
            {
                eax = t17;
                edx = t18;
            }
            else
            {
                g->eax = arg1;
                g->edx = arg2;
                g->esp = sp0 - 0x10u;
                t19 = cow_stdcall(g, COW_IMG(0x1018db10u), 4, arg1, esi, arg2, edi);
                t20 = g->edx;
                eax = t19;
                edx = t20;
                esi = esi + t19;
            }
        }
        if ((int32_t)(ebp + 1u) < 18)
        {
            ebp = ebp + 1u;
            goto L_1018d8e7;
        }
    }
L_1018d931: ;
    g->ebx = in_ebx;
    return esi;
L_1018d93a: ;
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018d7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018d7f0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
