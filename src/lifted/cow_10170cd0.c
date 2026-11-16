/* f_0x10170cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10170cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_18;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 4u);
    if (rd32(self + 4u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        edi = t1;
        loc_18 = t1;
        loc_8 = 0u;
        goto L_10170d09;
    }
    edx = in_edx;
L_10170cee: ;
    if (arg1 == 0u)
    {
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x1016fc90u), self, 0);
    }
    return;
L_10170d05: ;
    edi = loc_18;
L_10170d09: ;
    if (arg1 == 0u)
    {
        esi = rd32(edi);
        loc_4 = rd32(edi);
        goto L_10170d1f;
    }
    esi = rd32(edi);
    loc_4 = rd32(edi);
    if (arg1 != edi) goto L_10170e34;
L_10170d1f: ;
    if ((int32_t)rd32(edi + 0x44u) <= 0) goto L_10170e10;
    ebp = rd32(edi + 0x60u);
    loc_c = 0u;
L_10170d35: ;
    if (rd32(ebp + 4u) != 0u)
    {
        eax = rd32(ebp + 4u);
        if ((int32_t)rd32(ebp) <= 0)
        {
            ecx = rd32(ebp);
        }
        else
        {
            ecx = rd32(ebp);
            esi = eax + 0x28u;
            loc_10 = 0u;
L_10170d56: ;
            if (rd32(esi - 0x20u) != 0u)
            {
                if (rd32(esi) != 0u)
                {
                    eax = rd32(esi);
                    g->edx = edx;
                    t2 = rd32(eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(t2 + 8u), t2, 1, eax);
                    t3 = g->ecx;
                    t4 = g->edx;
                    ecx = t3;
                    edx = t4;
                }
                if (rd32(esi + 0x90u) != 0u)
                {
                    eax = rd32(esi + 0x90u);
                    g->edx = rd32(eax);
                    t5 = rd32(eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(t5 + 8u), ecx, 1, eax);
                    t6 = g->ecx;
                    t7 = g->edx;
                    ecx = t6;
                    edx = t7;
                }
                if (rd32(esi + 4u) != 0u)
                {
                    eax = rd32(esi + 4u);
                    g->edx = edx;
                    t8 = rd32(eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(t8 + 8u), t8, 1, eax);
                    t9 = g->ecx;
                    t10 = g->edx;
                    ecx = t9;
                    edx = t10;
                }
                if (rd32(esi + 0x88u) != 0u)
                {
                    eax = rd32(esi + 0x88u);
                    g->edx = rd32(eax);
                    t11 = rd32(eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(t11 + 8u), ecx, 1, eax);
                    t12 = g->ecx;
                    t13 = g->edx;
                    ecx = t12;
                    edx = t13;
                }
                ebx = 0x20u;
                edi = esi + 8u;
L_10170d9e: ;
                if (rd32(edi) != 0u)
                {
                    eax = rd32(edi);
                    g->edx = edx;
                    t14 = rd32(eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(t14 + 8u), t14, 1, eax);
                    t15 = g->ecx;
                    t16 = g->edx;
                    ecx = t15;
                    edx = t16;
                }
                if (ebx != 1u)
                {
                    ebx = ebx - 1u;
                    edi = edi + 4u;
                    goto L_10170d9e;
                }
                if (rd32(esi + 0x8cu) != 0u)
                {
                    eax = rd32(esi + 0x8cu);
                    g->edx = rd32(eax);
                    t17 = rd32(eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(t17 + 8u), ecx, 1, eax);
                    t18 = g->edx;
                    edx = t18;
                }
                edi = loc_18;
            }
            if ((int32_t)(loc_10 + 1u) < (int32_t)rd32(ebp))
            {
                ecx = rd32(ebp);
                esi = esi + 0xc0u;
                loc_10 = loc_10 + 1u;
                goto L_10170d56;
            }
            ecx = rd32(ebp);
            esi = loc_4;
        }
        t19 = rd32(ebp + 4u);
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, t19);
        t20 = g->edx;
        wr32(ebp + 4u, 0u);
        edx = t20;
    }
    if ((int32_t)(loc_c + 1u) < (int32_t)rd32(edi + 0x44u))
    {
        ebp = ebp + 0x24u;
        loc_c = loc_c + 1u;
        goto L_10170d35;
    }
    ecx = rd32(edi + 0x44u);
L_10170e10: ;
    if (rd32(edi + 0x60u) == 0u)
    {
        eax = rd32(edi + 0x60u);
    }
    else
    {
        eax = rd32(edi + 0x60u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t21 = cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t22 = g->ecx;
        t23 = g->edx;
        wr32(edi + 0x60u, 0u);
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10028700u), 1, edi);
    t24 = g->ecx;
    t25 = g->edx;
    if (arg1 != 0u) goto L_10170e4d;
    ecx = t24;
    edx = t25;
L_10170e34: ;
    if (esi != 0u)
    {
        loc_18 = esi;
        loc_8 = edi;
        goto L_10170d05;
    }
    goto L_10170cee;
L_10170e4d: ;
    if (loc_8 != 0u)
    {
        eax = loc_8;
        wr32(eax, esi);
    }
    else
    {
        eax = loc_8;
        wr32(self + 4u, esi);
    }
    if (rd32(self + 8u) == arg1)
    {
        wr32(self + 8u, eax);
    }
    t26 = rd32(self + 0xcu) - 1u;
    wr32(self + 0xcu, t26);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10170cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10170cd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
