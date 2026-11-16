/* f_0x10318408 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10318408(Guest* g)
{
    uint32_t eax;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 4u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1031853e;
    }
    if (arg2 == 3u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1031853e;
    }
    if (arg1 == 2u) goto L_103184d6;
    if (arg1 == 0x15u) goto L_103184d6;
    if (arg1 == 0x16u) goto L_103184d6;
    if (arg1 == 0xfu) goto L_103184d6;
    if (arg1 == 8u) goto L_1031845d;
    if (arg1 == 4u) goto L_1031845d;
    if (arg1 != 0xbu)
    {
        ecx = self;
        edx = in_edx;
        goto L_1031853e;
    }
L_1031845d: ;
    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x1031a04du), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(t1 + 0x50u) != COW_IMG(0x103d2e08u))
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10318495;
    }
    ecx = t2;
    edx = t3;
    esi = t1;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x103d2e88u));
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t4, in_edi, in_esi);
    t6 = g->edx;
    wr32(esi + 0x50u, t5);
    if (t5 == 0u)
    {
        ecx = t4;
        edx = t6;
        goto L_1031853e;
    }
    eax = t5;
    ecx = t4;
    edx = t6;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, eax, COW_IMG(0x103d2e08u), rd32(COW_IMG(0x103d2e88u)), in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
L_10318495: ;
    t9 = rd32(esi + 0x50u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x1031876eu), 3, arg1, t9, in_edi);
    t11 = g->edx;
    if (t10 == 0u)
    {
        ecx = t9;
        edx = t11;
        goto L_1031853e;
    }
    eax = t10;
    edx = t11;
    edi = rd32(eax + 8u);
L_103184ab: ;
    if (rd32(eax + 4u) != arg1) goto L_10318586;
    wr32(eax + 8u, arg2);
    if (eax + 0xcu >= rd32(COW_IMG(0x103d2e8cu)) * 0xcu + rd32(esi + 0x50u))
    {
        edx = rd32(esi + 0x50u);
        goto L_10318586;
    }
    eax = eax + 0xcu;
    edx = rd32(esi + 0x50u);
    goto L_103184ab;
L_103184d6: ;
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 1u, in_edi, in_esi);
    t13 = g->edx;
    if (arg1 == 2u)
    {
        eax = t12;
        edx = t13;
        goto L_103184ea;
    }
    eax = t12;
    edx = t13;
    if (arg1 != 0x15u)
    {
        ecx = 1u;
        goto L_10318509;
    }
L_103184ea: ;
    if (rd32(COW_IMG(0x109b273cu)) != 0u)
    {
        ecx = 1u;
        goto L_10318509;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, rd32(COW_IMG(0x103290d8u)), 1u, 2, COW_IMG(0x1031858au), 1u);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 1u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_10318528;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    wr32(COW_IMG(0x109b273cu), 1u);
L_10318509: ;
    if (arg1 == 2u)
    {
        t27 = rd32(COW_IMG(0x109b272cu));
        wr32(COW_IMG(0x109b272cu), arg2);
        edi = t27;
    }
    else
    {
        if (arg1 - 2u == 0xdu)
        {
            t26 = rd32(COW_IMG(0x109b2738u));
            wr32(COW_IMG(0x109b2738u), arg2);
            edi = t26;
        }
        else
        {
            if (arg1 - 0xfu == 6u)
            {
                t25 = rd32(COW_IMG(0x109b2730u));
                wr32(COW_IMG(0x109b2730u), arg2);
                edi = t25;
            }
            else
            {
                if (arg1 != 0x16u)
                {
                    edi = arg2;
                }
                else
                {
                    t24 = rd32(COW_IMG(0x109b2734u));
                    wr32(COW_IMG(0x109b2734u), arg2);
                    edi = t24;
                }
            }
        }
    }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 1u, in_edi, in_esi);
    t28 = g->edx;
    edx = t28;
L_10318586: ;
    eax = edi;
L_1031854c: ;
    g->edx = edx;
    return eax;
L_10318528: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    t18 = g->ecx;
    t19 = g->edx;
    t20 = cow_fastcall(g, COW_IMG(0x10319c92u), t18, t19, 0);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(t20, t17);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, t21, t22, 1, 3, 1u, in_edi, in_esi);
    t23 = g->edx;
    ecx = 1u;
    edx = t23;
L_1031853e: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t29 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t30 = g->edx;
    wr32(t29, 0x16u);
    eax = 0xffffffffu;
    edx = t30;
    goto L_1031854c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10318408(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10318408(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
