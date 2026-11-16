/* f_0x10232970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10232970(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_20;
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
    uint32_t t3;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
        goto L_10232a36;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10232760u), (in_eax & 0xffffff00u) | (uint8_t)arg2, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_10232a36;
    }
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10230a80u), 1, arg1 - 0x2000u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10230ba0u), 1, arg1);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        ebp = t4;
        goto L_102329d8;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    loc_10 = 1u;
    loc_20 = 0x20du;
L_102329b8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, loc_20);
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x10210f10u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10232a40u), arg1, t10, 0u, 0u, 1u, loc_10);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_102329d8: ;
    if ((int32_t)ebp <= 0) goto L_102329e8;
    loc_10 = 0u;
    loc_20 = 0x74u;
    goto L_102329b8;
L_102329e8: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10230930u), eax, g->ecx, g->edx, 1, 1, arg1 - 0x2000u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        edx = t16;
    }
    else
    {
        ecx = t15;
        edx = t16;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t17 = cow_cdecl(g, COW_IMG(0x10098fe0u), 2, 0u, arg1);
        t18 = g->edx;
        t19 = rd32(COW_IMG(0x10668ed0u));
        wr32(COW_IMG(0x10668edcu), 0u);
        if (t19 == 0u)
        {
            eax = t17;
            edx = t18;
        }
        else
        {
            eax = t17;
            ecx = t19;
            edx = t18;
            if (rd32(ecx + 0x64u) == 1u)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t20 = cow_thiscall(g, COW_IMG(0x10221c60u), ecx, 0);
                t21 = g->edx;
                cow_fastcall(g, COW_IMG(0x10221cb0u), rd32(COW_IMG(0x10668ed0u)), t21, 0);
                t22 = g->edx;
                t23 = rd32(COW_IMG(0x10668ed0u));
                wr32(t23 + 0x64u, 0u);
                eax = t23;
                edx = t22;
            }
        }
    }
L_10232a36: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10232970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10232970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
