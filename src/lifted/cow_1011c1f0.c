/* f_0x1011c1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1011c1f0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_1011c5a0;
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t1) + 0xfcu), rd32(t1), 4, t1, 0u, 4u, 5u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t2) + 0xc8u), rd32(t2), 3, t2, 0x1bu, 1u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t4 = rd32(t3);
    t5 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(t4 + 0xc8u), t4, 3, t3, 0xabu, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    if (arg2 == 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_1011c474;
    }
    ecx = t6;
    edx = t7;
    if (arg2 == 1u) goto L_1011c328;
    if (arg2 != 2u) goto L_1011c5b6;
    if (arg3 == 0u) goto L_1011c2ed;
    if (arg3 == 1u) goto L_1011c2bd;
    if (arg3 == 2u)
    {
        if (arg4 == 0u)
        {
            g->esp = sp0 - 4u;
            cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        }
        else
        {
            if (arg4 == 1u)
            {
                g->esp = sp0 - 4u;
                cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            }
            else
            {
                if (arg4 == 2u)
                {
                    g->esp = sp0 - 4u;
                    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
                }
            }
        }
    }
L_1011c5b6: ;
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t20;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t21 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0;
    t22 = cow_thiscall(g, rd32(rd32(t20) + 0xc8u), rd32(t20), 3, t20, 0xabu, 1u);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_1011c2bd: ;
    if (arg4 == 0u) goto L_1011c52f;
    if (arg4 == 1u) goto L_1011c2e6;
    if (arg4 == 2u)
    {
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    }
    goto L_1011c5b6;
L_1011c2e6: ;
    loc_4 = 1u;
L_1011c515: ;
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t16) + 0xc8u), rd32(t16), 3, t16, 0x13u, loc_4);
    loc_4 = 6u;
    loc_8 = 0x14u;
L_1011c5a4: ;
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t19) + 0xc8u), rd32(t19), 3, t19, loc_8, loc_4);
    goto L_1011c5b6;
L_1011c2ed: ;
    if (arg4 == 0u) goto L_1011c316;
    if (arg4 == 1u) goto L_1011c41d;
    if (arg4 == 2u)
    {
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    }
    goto L_1011c5b6;
L_1011c316: ;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    goto L_1011c5b6;
L_1011c328: ;
    if (arg3 == 0u) goto L_1011c3f8;
    if (arg3 == 1u) goto L_1011c3af;
    if (arg3 != 2u) goto L_1011c5b6;
    if (arg4 == 0u) goto L_1011c390;
    if (arg4 == 1u) goto L_1011c371;
    if (arg4 != 2u) goto L_1011c5b6;
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x13u, 1u);
    loc_4 = 5u;
    loc_8 = 0x14u;
    goto L_1011c5a4;
L_1011c371: ;
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x13u, 9u);
    loc_4 = 5u;
    loc_8 = 0x14u;
    goto L_1011c5a4;
L_1011c390: ;
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x13u, 2u);
    loc_4 = 5u;
    loc_8 = 0x14u;
    goto L_1011c5a4;
L_1011c3af: ;
    if (arg4 == 0u)
    {
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    }
    else
    {
        if (arg4 == 1u)
        {
            g->esp = sp0 - 4u;
            cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        }
        else
        {
            if (arg4 == 2u)
            {
                g->esp = sp0 - 4u;
                cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            }
        }
    }
    goto L_1011c5b6;
L_1011c3f8: ;
    if (arg4 == 0u) goto L_1011c455;
    if (arg4 == 1u) goto L_1011c41d;
    if (arg4 == 2u)
    {
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    }
    goto L_1011c5b6;
L_1011c41d: ;
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0x13u, 5u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t12) + 0xc8u), rd32(t12), 3, t12, 0x14u, 2u);
    loc_4 = 3u;
    loc_8 = 0xabu;
    goto L_1011c5a4;
L_1011c455: ;
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t13) + 0xc8u), rd32(t13), 3, t13, 0x13u, 6u);
    loc_4 = 5u;
    loc_8 = 0x14u;
    goto L_1011c5a4;
L_1011c474: ;
    if (arg3 == 0u) goto L_1011c564;
    if (arg3 == 1u) goto L_1011c4ee;
    if (arg3 != 2u) goto L_1011c5b6;
    if (arg4 == 0u) goto L_1011c4dc;
    if (arg4 == 1u) goto L_1011c4bd;
    if (arg4 != 2u) goto L_1011c5b6;
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 0x13u, 5u);
    loc_4 = 1u;
    loc_8 = 0x14u;
    goto L_1011c5a4;
L_1011c4bd: ;
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t15) + 0xc8u), rd32(t15), 3, t15, 0x13u, 5u);
    loc_4 = 2u;
    loc_8 = 0x14u;
    goto L_1011c5a4;
L_1011c4dc: ;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    goto L_1011c5b6;
L_1011c4ee: ;
    if (arg4 == 0u) goto L_1011c52f;
    if (arg4 == 1u) goto L_1011c513;
    if (arg4 == 2u)
    {
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    }
    goto L_1011c5b6;
L_1011c513: ;
    loc_4 = 5u;
    goto L_1011c515;
L_1011c52f: ;
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t17) + 0xc8u), rd32(t17), 3, t17, 0x13u, 2u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t18) + 0xc8u), rd32(t18), 3, t18, 0x14u, 5u);
    loc_4 = 2u;
    loc_8 = 0xabu;
    goto L_1011c5a4;
L_1011c564: ;
    if (arg4 == 0u)
    {
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    }
    else
    {
        if (arg4 == 1u)
        {
            g->esp = sp0 - 4u;
            cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        }
        else
        {
            if (arg4 == 2u)
            {
                g->esp = sp0 - 4u;
                cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            }
        }
    }
    goto L_1011c5b6;
L_1011c5a0: ;
    loc_4 = 0u;
    loc_8 = 0x1bu;
    goto L_1011c5a4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c1f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011c1f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
