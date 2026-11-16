/* f_0x100667a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100667a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_628;
    uint32_t loc_650;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1628u);

    wr32(sp0 - 0x640u, in_ebx);
    wr32(sp0 - 0x644u, in_ebp);
    wr32(sp0 - 0x648u, in_esi);
    wr32(sp0 - 0x64cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x64cu;
    t1 = cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t2 = g->edx;
    wr8(sp0 - 0x63bu, 7u);
    wr8(sp0 - 0x633u, 7u);
    wr16(sp0 - 0x636u, 0x3c3eu);
    wr16(sp0 - 0x62eu, 0x3c3eu);
    wr32(sp0 - 0x650u, arg1);
    wr8(sp0 - 0x63cu, 0x7cu);
    wr8(sp0 - 0x639u, 0x70u);
    wr8(sp0 - 0x63au, 2u);
    wr8(sp0 - 0x634u, 0x7cu);
    wr8(sp0 - 0x631u, 0x70u);
    wr8(sp0 - 0x632u, 3u);
    wr8(sp0 - 0x62fu, 0x1cu);
    g->eax = arg1;
    g->edx = (t2 & 0xffffff00u) | 0x70u;
    t3 = cow_thiscall(g, COW_IMG(0x10068200u), sp0 - 0x604u, 1, arg1);
    t4 = g->edx;
    wr32(sp0 - 0x628u, t3);
    if ((int32_t)arg3 >= (int32_t)t3)
    {
        eax = t3;
        edx = t4;
        goto L_100668cc;
    }
    eax = t3;
    edx = t4;
    ebx = 0u;
    ebp = in_ebp;
    esi = arg3;
    loc_628 = t3;
L_10066817: ;
    wr32(sp0 - 0x650u, arg4);
    wr32(sp0 - 0x654u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x650u;
    t5 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
    wr32(sp0 - 0x654u, t5);
    wr32(sp0 - 0x658u, sp0 - 0x634u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->edx = sp0 - 0x634u;
    g->esp = sp0 - 0x64cu;
    t6 = cow_thiscall(g, COW_IMG(0x100668f0u), self, 3, sp0 - 0x634u, t5, arg4);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        wr32(sp0 - 0x650u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x64cu;
        t8 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t9 = g->edx;
        wr32(sp0 - 0x650u, t8);
        wr32(sp0 - 0x654u, sp0 - 0x614u);
        g->ebx = ebx;
        t10 = cow_thiscall(g, COW_IMG(0x100660a0u), self, 2, sp0 - 0x614u, t8);
        wr32(sp0 - 0x650u, 8u);
        wr32(sp0 - 0x624u, rd32(t10));
        t11 = rd32(t10 + 4u);
        wr32(sp0 - 0x620u, t11);
        t12 = rd32(t10 + 8u);
        wr32(sp0 - 0x61cu, t12);
        wr32(sp0 - 0x624u, rd32(t10));
        t13 = rd32(t10 + 4u);
        wr32(sp0 - 0x620u, t13);
        t14 = rd32(t10 + 8u);
        wr32(sp0 - 0x61cu, t14);
        t15 = rd32(t10 + 0xcu);
        wr8(sp0 - 0x637u, (uint8_t)t15);
        eax = sp0 - 0x63cu;
        edx = t14;
        ebx = t15;
        loc_650 = 8u;
    }
    else
    {
        edx = t7;
        wr32(sp0 - 0x650u, 0xcu);
        eax = sp0 - 0x634u;
        loc_650 = 0xcu;
    }
    wr32(sp0 - 0x654u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x64cu;
    cow_thiscall(g, COW_IMG(0x10065d60u), arg2, 2, eax, loc_650);
    t16 = g->edx;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 0x628u))
    {
        eax = rd32(sp0 - 0x628u);
        edx = t16;
        ebp = arg2;
        esi = esi + 1u;
        goto L_10066817;
    }
    eax = rd32(sp0 - 0x628u);
    edx = t16;
    if ((int32_t)ebx >= 20)
    {
        if ((int32_t)ebx <= 24)
        {
            wr32(sp0 - 0x650u, 8u);
            wr32(sp0 - 0x654u, sp0 - 0x63cu);
            wr8(sp0 - 0x637u, 0x1du);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x64cu;
            t17 = cow_thiscall(g, COW_IMG(0x10065d60u), arg2, 2, sp0 - 0x63cu, 8u);
            t18 = g->edx;
            eax = t17;
            edx = t18;
        }
    }
L_100668cc: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x64cu;
    t19 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t20 = g->edx;
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    g->edx = t20;
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100667a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100667a0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
